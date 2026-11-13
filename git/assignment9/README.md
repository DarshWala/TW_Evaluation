# Assignment 9 – Git Branching & GitHub

## What I Learned

### Branching
- A branch is an independent line of development
- `git branch` lists all local branches
- `git branch <name>` creates a new branch
- `git branch -m <old> <new>` renames a branch
- `git switch <branch>` switches to a branch
- `git switch -c <branch>` creates and switches to a new branch (shortcut)
- `git checkout <branch>` also switches branches (older syntax)
- `git merge <branch>` merges a branch into the current branch
- `git branch -d <branch>` deletes a branch

### Merge Conflicts
- Occur when two branches modify the same lines differently
- Git marks conflicting sections with `<<<<<<<`, `=======`, `>>>>>>>`
- Resolve by editing the file, removing markers, then staging and committing

### Stashing
- `git stash` temporarily saves uncommitted changes
- Useful when you need to switch branches with a dirty working directory
- `git stash pop` restores stashed changes

### GitHub & Remote Repositories
- GitHub hosts Git repositories online
- `git remote add origin <url>` links local repo to GitHub
- `git remote -v` lists configured remotes
- `git push -u origin main` pushes commits to GitHub and sets upstream
- `git clone <url>` downloads a remote repo to local
- `git fetch origin` downloads remote changes without merging
- `git pull` fetches and merges remote changes into current branch
- `git branch -M main` renames current branch to `main`

### Pull Requests
- Push a feature branch to GitHub
- Open a Pull Request (PR) on GitHub to propose merging it into `main`
- Team members review and approve before merging

### Additional Topics
- `git log --oneline --all --graph` shows a visual branch history
- **Fork** = a separate hosted copy of a repo (for contributing to others' projects)
- **Clone** = a local copy of a repo
- Tags: `git tag -a v1.0.0 -m "Version 1.0.0"` marks a release point

## Important Commands

```bash
# Branching
git branch
git branch fast
git branch -m fast parallel
git switch parallel
git switch -c feature-login
git merge parallel
git branch -d parallel

# Remote & GitHub
git remote add origin https://github.com/USERNAME/repo.git
git remote -v
git branch -M main
git push -u origin main
git clone https://github.com/USERNAME/repo.git
git fetch origin
git pull

# Stash
git stash
git stash pop

# Visualize
git log --oneline --all --graph
```
