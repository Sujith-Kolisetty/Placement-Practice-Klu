HTTP: Request vs Response (Complete Guide)
1️⃣ What is an HTTP Request?

An HTTP Request is sent by the client (browser, app, script) to a server asking for something.

Structure of an HTTP Request
2️⃣ What is an HTTP Response?

An HTTP Response is sent by the server back to the client with the result.
3️⃣ HTTP Methods (VERY IMPORTANT)
🔹 GET

Purpose: Fetch data

Body: ❌ No

Sensitive data? ❌ NO (URL visible)

Idempotent: ✅ Yes

GET /users?id=10 HTTP/1.1


👉 Security risk: Parameters logged, cached, leaked.

🔹 POST

Purpose: Submit data

Body: ✅ Yes

Used for: Login, forms, uploads

Idempotent: ❌ No

POST /login HTTP/1.1
{
  "user": "admin",
  "pass": "123"
}


👉 Most attacked method (SQLi, XSS, auth bypass).

🔹 PUT

Purpose: Replace entire resource

Idempotent: ✅ Yes

PUT /users/10
{
  "name": "Alice",
  "role": "admin"
}


👉 Bug class: Mass assignment, IDOR.

🔹 PATCH

Purpose: Partial update

Idempotent: ❌ Usually no

PATCH /users/10
{
  "role": "admin"
}


👉 Classic privilege escalation target.

🔹 DELETE

Purpose: Remove resource

Idempotent: ✅ Yes

DELETE /users/10


👉 Check: Auth + authorization. Often broken.