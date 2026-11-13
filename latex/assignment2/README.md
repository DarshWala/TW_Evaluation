# Assignment 2 – Tables in LaTeX

## What I Learned
- Creating basic tables using the `tabular` environment
- Specifying column alignment: `l` (left), `c` (center), `r` (right)
- Adding horizontal lines with `\hline`
- Adding vertical separators using `|` in column spec
- Creating tables with double borders: `||`
- Merging columns using `\multicolumn{n}{alignment}{text}`
- Merging rows using `\multirow{n}{width}{text}` from the `multirow` package
- Coloring table rows/cells using the `xcolor` package with `\rowcolor{}` and `\cellcolor{}`
- Placing tables in floating environments with `\begin{table}` and captions

## Important Commands & Packages
| Command/Package | Purpose |
|----------------|---------|
| `\begin{tabular}{cols}` | Start a table |
| `\hline` | Horizontal line |
| `\multicolumn{n}{align}{text}` | Merge n columns |
| `\multirow{n}{width}{text}` | Merge n rows |
| `\rowcolor{color}` | Color a row |
| `\cellcolor{color}` | Color a cell |
| `\usepackage{multirow}` | Enable multirow |
| `\usepackage{xcolor}` | Enable colors |
| `\usepackage{colortbl}` | Enable colored table cells |
