#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Candidate {
    int id;
    char name[50];
    int votes;
};

struct Voter {
    int id;
    char name[50];
    int voted;
};

void addCandidate() {
    FILE *fp = fopen("candidates.txt", "ab");
    struct Candidate c;
    printf("Enter Candidate ID: ");
    scanf("%d", &c.id);
    printf("Enter Candidate Name: ");
    scanf("%s", c.name);
    c.votes = 0;
    fwrite(&c, sizeof(c), 1, fp);
    fclose(fp);
}

void registerVoter() {
    FILE *fp = fopen("voters.txt", "ab");
    struct Voter v;
    printf("Enter Voter ID: ");
    scanf("%d", &v.id);
    printf("Enter Voter Name: ");
    scanf("%s", v.name);
    v.voted = 0;
    fwrite(&v, sizeof(v), 1, fp);
    fclose(fp);
}

void vote() {
    int vid, cid;
    struct Voter v;
    struct Candidate c;
    FILE *fv = fopen("voters.txt", "rb+");
    FILE *fc = fopen("candidates.txt", "rb+");

    printf("Enter Voter ID: ");
    scanf("%d", &vid);

    while (fread(&v, sizeof(v), 1, fv)) {
        if (v.id == vid) {
            if (v.voted) {
                printf("You have already voted\n");
                fclose(fv);
                fclose(fc);
                return;
            }
            printf("Enter Candidate ID to vote: ");
            scanf("%d", &cid);

            while (fread(&c, sizeof(c), 1, fc)) {
                if (c.id == cid) {
                    c.votes++;
                    fseek(fc, -sizeof(c), SEEK_CUR);
                    fwrite(&c, sizeof(c), 1, fc);
                    v.voted = 1;
                    fseek(fv, -sizeof(v), SEEK_CUR);
                    fwrite(&v, sizeof(v), 1, fv);
                    printf("Vote Cast Successfully\n");
                    fclose(fv);
                    fclose(fc);
                    return;
                }
            }
        }
    }

    printf("Invalid Voter ID\n");
    fclose(fv);
    fclose(fc);
}

void viewResults() {
    FILE *fp = fopen("candidates.txt", "rb");
    struct Candidate c;
    printf("\nElection Results:\n");
    while (fread(&c, sizeof(c), 1, fp)) {
        printf("ID: %d Name: %s Votes: %d\n", c.id, c.name, c.votes);
    }
    fclose(fp);
}

void adminMenu() {
    int ch;
    do {
        printf("\n1.Add Candidate\n2.Register Voter\n3.View Results\n4.Exit\n");
        scanf("%d", &ch);
        if (ch == 1) addCandidate();
        else if (ch == 2) registerVoter();
        else if (ch == 3) viewResults();
    } while (ch != 4);
}

int main() {
    int choice;
    do {
        printf("\n1.Admin\n2.Voter\n3.Exit\n");
        scanf("%d", &choice);

        if (choice == 1) {
            adminMenu();
        } else if (choice == 2) {
            vote();
        }
    } while (choice != 3);

    return 0;
}
