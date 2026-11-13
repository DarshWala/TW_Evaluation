# Assignment 5 – Report Class & Document Structure

## What I Learned
- Using the `report` document class with chapters
- Setting page margins using the `geometry` package
- Creating a title page with `\maketitle` and `\title`, `\author`, `\date`
- Formatting title elements: `{\Huge \textbf{...}}`, `{\Large ...}`
- Adding an abstract with `\begin{abstract}`
- Using `sectsty` package to style section/chapter headings with colors and fonts
- Adding headers and footers with `fancyhdr` package
- Setting up `\pagestyle{fancy}` and using `\lhead`, `\chead`, `\rhead`
- Making the first page have no header using `\thispagestyle{empty}`

## Important Commands
| Command | Purpose |
|---------|---------|
| `\documentclass{report}` | Report class (supports chapters) |
| `\usepackage{geometry}` | Set page margins |
| `\geometry{margin=1in}` | 1 inch margins on all sides |
| `\chapter{Title}` | Add a chapter |
| `\begin{abstract}` | Add abstract |
| `\usepackage{sectsty}` | Style headings |
| `\chapterfont{\color{red}\huge\bfseries}` | Style chapter titles |
| `\usepackage{fancyhdr}` | Custom headers/footers |
| `\pagestyle{fancy}` | Enable fancy page style |
| `\lhead{}, \chead{}, \rhead{}` | Left/center/right header |
| `\thispagestyle{empty}` | No header/footer on this page |
