# Git & GitHub

Git is a distributed version control system (DVCS) used to track changes in files and coordinate work among multiple contributors. GitHub is an online platform for hosting Git repositories and collaborating on projects.

## Table of Contents

- [Assignment 8 – Git Basics](#assignment-8)
- [Assignment 9 – Git Branching & GitHub](#assignment-9)
- [Core Concepts](#core-concepts)

---

## Assignment 8
**Git Basics**

Learned the fundamental Git workflow: initializing a repository, staging and committing files, viewing history, comparing changes, undoing work, and removing files. Practiced `git init`, `git add`, `git commit`, `git log`, `git diff`, `git restore`, `git revert`, `git rm`, and `git checkout`.

📄 [`assignment8/README.md`](assignment8/README.md)

---

## Assignment 9
**Git Branching & GitHub**

Explored parallel development using branches. Learned to create, rename, switch, merge, and delete branches. Handled merge conflicts manually. Connected a local repository to GitHub using remotes, pushed commits, cloned repositories, and opened pull requests. Also covered `git stash` for temporarily shelving work.

📄 [`assignment9/README.md`](assignment9/README.md)

---

## Core Concepts

### The Three Areas of Git

| Area | Description |
|------|-------------|
| Working Directory | Where files are edited |
| Staging Area | Where changes are selected for the next commit |
| Repository (`.git`) | Where the full project history is stored |

### Essential Commands

```bash
# Setup
git init
git config user.name "Your Name"
git config user.email "you@example.com"

# Daily workflow
git status
git add .
git commit -m "message"
git log --oneline

# Undoing
git restore <file>              # discard unstaged changes
git restore --staged <file>     # unstage a file
git revert <hash>               # safely undo a commit

# Branching
git branch <name>               # create branch
git switch <branch>             # switch branch
git switch -c <branch>          # create + switch
git merge <branch>              # merge into current branch
git branch -d <branch>          # delete branch

# GitHub
git remote add origin <url>
git push -u origin main
git pull
git clone <url>
```

### Git vs GitHub

| Feature | Git | GitHub |
|---------|-----|--------|
| Type | Version control tool | Hosting & collaboration platform |
| Works | Locally (offline) | Online |
| Purpose | Track changes | Share, review, collaborate |

