# Assignment 7 – Doxygen Documentation

## What I Learned
- Doxygen generates documentation from specially formatted comments in source code
- It supports C, C++, Python, Java, and more
- Output formats: HTML (browseable), LaTeX/PDF (printable)
- Writing Doxygen comments using `/** ... */` style blocks
- Using `@file` to describe a file, `@class` to describe a class
- Using `@brief` for a short description
- Using `@param` to document function parameters
- Using `@return` to describe return values
- Using `@enum` to document enumerations
- Using `\mainpage` to create the project main page
- Generating a Doxyfile with `doxygen -g Doxyfile`
- Running Doxygen with `doxygen Doxyfile`
- Generating PDF from LaTeX output by running `make` in the `latex/` directory

## Workflow
1. Write Doxygen comments in source code
2. Generate config: `doxygen -g Doxyfile`
3. Edit `Doxyfile` (set `PROJECT_NAME`, `INPUT`, `GENERATE_HTML`, `GENERATE_LATEX`)
4. Run: `doxygen Doxyfile`
5. Open `html/index.html` to browse docs
6. `cd latex && make` to generate PDF

## Important Tags
| Tag | Purpose |
|-----|---------|
| `@file` | Document a file |
| `@class` | Document a class |
| `@brief` | Short description |
| `@param name desc` | Parameter description |
| `@return desc` | Return value |
| `@enum` | Document an enum |
| `\mainpage title` | Project main page |
| `@note` | Additional note |
| `\todo` | Mark a TODO item |
