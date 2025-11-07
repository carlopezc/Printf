# 🚀 ft_printf

> A complete recreation of the standard C `printf` function, a core project at 42.

---

## 🎯 Project Goals

This project was a deep dive into variadic functions, a powerful but complex feature of C. The main goal was to replicate the functionality of `printf` from scratch, learning to handle an unknown number of arguments and format types. This project significantly improved my skills in argument parsing, string manipulation, and modular code design.

## 🛠️ Technical Details

* Variadic Function: Built around `stdarg.h` to process an indefinite number of arguments passed to the function.
* Flag Handling: Manages the following conversion specifiers: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%%`.
* Challenge: The most challenging part was designing a flexible system to parse the format string and correctly fetch the right argument type from the `va_list` without errors or memory issues.

## ⚙️ How to Compile & Run

1.  Clone the repository:
    ```bash
    git clone [https://github.com/carlopezc/Printf.git](https://github.com/carlopezc/Printf.git)
    cd Printf
    ```
2.  Compile the library:
    ```bash
    make
    ```
    This will create the `libftprintf.a` library file.

3.  To use it in another program, link the library during compilation:
    ```bash
    gcc your_program.c -L. -lftprintf
    ```
