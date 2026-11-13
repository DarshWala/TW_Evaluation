# Assignment 8 – Git Basics

## What I Learned
- Version control tracks changes to files over time
- Git is a distributed version control system (DVCS)
- Three areas in Git: **Working Directory**, **Staging Area**, **Repository**
- `git init` initializes a new local repository (creates a `.git` folder)
- `git config` sets your identity (name and email) for commits
- `git status` shows the current state of the working directory and staging area
- `git add <file>` stages a file for the next commit
- `git add .` stages all changes
- `git commit -m "message"` records staged changes in the repository
- `git log` shows commit history (hash, author, date, message)
- `git log --oneline` shows compact one-line commit history
- `git diff` shows unstaged changes
- `git diff --staged` shows staged changes
- `git restore <file>` discards unstaged changes in a file
- `git restore --staged <file>` unstages a file (keeps changes)
- `git revert <hash>` creates a new commit that undoes a previous commit
- `git rm <file>` removes a file and stages the deletion
- `git checkout <hash>` navigates to an older commit (detached HEAD)
- `git checkout <branch>` returns to the latest commit on a branch

## Important Commands

```bash
git init
git config user.name "Your Name"
git config user.email "you@example.com"
git status
git add readme.txt
git add .
git commit -m "Adding first file."
git log
git log --oneline
git diff
git diff --staged
git restore main.py
git restore --staged main.py
git revert <commit-hash>
git rm readme.txt
git checkout <commit-hash>
git checkout main
```

## Key Concepts
- **Working Directory**: where you edit files
- **Staging Area (Index)**: where you prepare changes before committing
- **Repository**: stores the full project history in `.git`
- A commit records a snapshot, not just a diff
- `git revert` is safe for undoing published changes — it adds a new commit, doesn't delete history
- `git checkout <hash>` puts you in "detached HEAD" state — navigate back with `git checkout main`
