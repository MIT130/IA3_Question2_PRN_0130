# Git workflow – six genuine incremental commits

The assignment accepts a local or private Git repository; GitHub is not specifically mandatory. Make six real commits as you build the program. Do not backdate, squash, or create empty commits.

Initialize:
```bash
git init
git config user.name "Your Name"
git config user.email "your-email@example.com"
```

Suggested genuine milestones:
1. Commit project plan and PRN parameters (`README.md`).
2. Add personalized values and table initialization (`main.cpp`).
3. Add division hash function.
4. Add basic insertion and test it.
5. Add linear probing and collision trace.
6. Add final table display and validation documents.

At each milestone, stage and commit only the actual files changed, for example:
```bash
git add README.md
git commit -m "Document PRN scenario and project plan"
```
Repeat with the appropriate files as each feature is implemented. Each commit must have a real incremental change.

After all commits:
```bash
git log --stat --date=iso > git_log_stat.txt
git log --oneline
```
