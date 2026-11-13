# Doxygen

Doxygen is an open-source documentation generator that extracts specially formatted comments from source code and produces reference manuals in HTML, PDF, and other formats. It is widely used in C, C++, Python, and Java projects (e.g., OpenCV, LLVM).

## Table of Contents

- [Assignment 7 – Documenting a C++ Project](#assignment-7)
- [Doxygen Workflow](#doxygen-workflow)
- [Important Tags](#important-tags)

---

## Assignment 7
**Documenting a Multi-File C++ Project**

Applied Doxygen to a small C++ project consisting of three files. Wrote correctly formatted documentation comments for a `Logger` class, a `LogLevel` enum, a `CalculationEngine` class, and a `main.cpp` entry point. Generated both HTML and LaTeX/PDF outputs using a `Doxyfile`.

📄 Source files: [`assignment7/Logger.h`](assignment7/Logger.h) · [`assignment7/CalculationEngine.h`](assignment7/CalculationEngine.h) · [`assignment7/main.cpp`](assignment7/main.cpp)
📄 Config: [`assignment7/Doxyfile`](assignment7/Doxyfile)
📄 Notes: [`assignment7/README.md`](assignment7/README.md)

---

## Doxygen Workflow

```bash
# 1. Generate a default config file
doxygen -g Doxyfile

# 2. Edit Doxyfile (set PROJECT_NAME, INPUT, GENERATE_HTML, GENERATE_LATEX)

# 3. Run Doxygen
doxygen Doxyfile

# 4. Browse HTML output
#    Open html/index.html in a browser

# 5. Generate PDF
cd latex
make
```

---

## Important Tags

| Tag | Purpose |
|-----|---------|
| `@file` | Describe a source file |
| `@class` | Describe a class |
| `@brief` | Short one-line description |
| `@param name desc` | Document a function parameter |
| `@return desc` | Document the return value |
| `@enum` | Document an enumeration |
| `\mainpage title` | Define the project main page |
| `@note` | Add a note |
| `\todo` | Mark a TODO item |

