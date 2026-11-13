# Assignment 4 – Lists, Colors, and Figures

## What I Learned
- Creating bullet lists with `itemize` and nested lists
- Defining custom colors with `\definecolor{name}{model}{values}` using RGB
- Creating colors as a mix with `\colorlet{name}{mix}`
- Using colors in text with `\textcolor{color}{text}`
- Including images with `\includegraphics[options]{file}`
- Rotating images with `angle=` option
- Cropping images with `trim=` and `clip` options
- Making images span the text width: `width=\textwidth`
- Using `minipage` environment for side-by-side figures
- Floating figures with `\begin{figure}[placement]` and `\caption{}`

## Important Commands & Options
| Command | Purpose |
|---------|---------|
| `\begin{itemize}` / `\item` | Bullet list |
| `\definecolor{name}{RGB}{r,g,b}` | Define custom color |
| `\colorlet{name}{base!percent}` | Mix colors |
| `\textcolor{color}{text}` | Colored text |
| `\includegraphics[width=..., angle=...]{file}` | Include image |
| `trim=l b r t, clip` | Crop an image |
| `\begin{minipage}{width}` | Side-by-side layout |
| `\usepackage{graphicx}` | Enable image inclusion |
| `\usepackage{xcolor}` | Enable colors |
