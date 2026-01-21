#include <stdio.h>
#include <string.h>

struct Quiz {
    char question[200];
    char opt1[50];
    char opt2[50];
    char opt3[50];
    char opt4[50];
    int answer;
};

void addQuestion() {
    FILE *fp = fopen("quiz.dat", "ab");
    struct Quiz q;
    int n;

    printf("Enter number of questions: ");
    scanf("%d", &n);

    for(int i=0;i<n;i++) {
        printf("\nEnter Question: ");
        scanf(" %[^\n]", q.question);
        printf("Option 1: ");
        scanf(" %[^\n]", q.opt1);
        printf("Option 2: ");
        scanf(" %[^\n]", q.opt2);
        printf("Option 3: ");
        scanf(" %[^\n]", q.opt3);
        printf("Option 4: ");
        scanf(" %[^\n]", q.opt4);
        printf("Correct option (1-4): ");
        scanf("%d", &q.answer);

        fwrite(&q, sizeof(q), 1, fp);
    }
    fclose(fp);
}

void adminLogin() {
    char pass[20];

    printf("Enter admin password: ");
    scanf("%s", pass);

    if(strcmp(pass, "admin") == 0) {
        printf("Admin Access Granted\n");
        addQuestion();
    } else {
        printf("Access Denied. You are not an Admin\n");
    }
}

void takeQuiz() {
    FILE *fp = fopen("quiz.dat", "rb");
    struct Quiz q;
    int score = 0, ans, count = 0;

    if(fp == NULL) {
        printf("No questions available\n");
        return;
    }

    while(fread(&q, sizeof(q), 1, fp)) {
        count++;
        printf("\nQ%d: %s\n", count, q.question);
        printf("1. %s\n", q.opt1);
        printf("2. %s\n", q.opt2);
        printf("3. %s\n", q.opt3);
        printf("4. %s\n", q.opt4);
        printf("Enter answer: ");
        scanf("%d", &ans);

        if(ans == q.answer)
            score++;
    }

    printf("\nQuiz Finished\n");
    printf("Score: %d / %d\n", score, count);
    fclose(fp);
}

int main() {
    int ch;

    while(1) {
        printf("\n==== QUIZ MANAGEMENT SYSTEM ====\n");
        printf("1. Admin Login\n");
        printf("2. Take Quiz\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        if(ch == 1) adminLogin();
        else if(ch == 2) takeQuiz();
        else if(ch == 3) break;
        else printf("Invalid Choice\n");
    }
    return 0;
}
