# Assignment 6 – Fonts, Spacing, Boxes, Indexing & Bibliography

## What I Learned
- Changing fonts using the `fontspec` package (requires XeLaTeX compiler)
- Setting main font, sans-serif font, and monospace font
- Setting page background color with `\pagecolor{}`
- Controlling spacing: `\vspace{length}`, `\\` for line breaks within paragraph
- Using `\sloppy` / `\fussy` to control hyphenation behavior
- Creating save boxes with `\newsavebox`, `\savebox`, `\usebox`
- Creating paragraph boxes with `\parbox{width}{text}`
- Ensuring sections are numbered with alphabetic labels via `\renewcommand`
- Adding an index with `makeindex`: `\usepackage{makeidx}`, `\index{term}`, `\printindex`
- Managing bibliography with `.bib` files and `\bibliography{}`, `\bibliographystyle{}`
- Citing references with `\cite{key}`

## Important Commands
| Command | Purpose |
|---------|---------|
| `\usepackage{fontspec}` | Load custom fonts (XeLaTeX) |
| `\setmainfont{FontName}` | Set main font |
| `\pagecolor{color}` | Set background color |
| `\vspace{1cm}` | Add vertical space |
| `\sloppy` | Allow more relaxed line breaking |
| `\newsavebox{\mybox}` | Declare a save box |
| `\savebox{\mybox}{content}` | Save content in box |
| `\usebox{\mybox}` | Use/print the saved box |
| `\parbox{5cm}{text}` | Paragraph box of fixed width |
| `\usepackage{makeidx}` | Enable index |
| `\makeindex` | Initialize index |
| `\index{term}` | Add term to index |
| `\printindex` | Print the index |
| `\bibliography{file}` | Load .bib file |
| `\bibliographystyle{plain}` | Set bibliography style |
| `\cite{key}` | Cite a reference |
