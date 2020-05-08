# libc

>  **A homemade C library.** :wrench::pineapple:


**Work in Progress.**

The aim of this project is to code my own **C standard library** replicating mythical functions. It will be expanded and revised as I learn more.

A brief explanation of their functionality can be found inside each function.
  

## libc functions
### Standard Input-Output functions

||Functionality|
|-|-|-|
|ft_putchar| Displays char c (converted to an 'unsigned char') with write()|

### String-Handling functions
||Functionality|
|-|-|-|
|ft_strcat|String concatenation.|
|ft_strncat|Size-bound string concatenation|
|ft_strlcat|Size-bound string concatenation.|
|ft_strcmp|String comparison|
|ft_strncmp|Size-bound string comparison|
|ft_strcpy|String copying|
|ft_strncpy|Size-bound string copying|
|ft_strlcpy|Size-bound string copying|
|ft_strlen|Return string length|
|ft_strstr|Locate a substring in a string|
|ft_strdup|Save a copy of a string|

### Standard functions
||Functionality|
|-|-|-|
|ft_atoi|String to integer conversion|
|ft_div|Return quotient and remainder from division|

### Math functions
||Functionality|
|-|-|-|
|ft_sqrt|Return square root|

## Installation Guide

1. Download or clone the repository.
2. Create a main.c file.
3. Compile main.c and ft_example.c together:
 ```
    gcc -c main.c ft_example.c
```
4. Execute a.out file.
```
    ./a.out
```

## How To Contribute

Contributions are what make the open source community such an amazing place to be, learn and grow. Any contributions are **greatly appreciated**.
1. Fork the project.
2. Create a Branch:
    ```
    git checkout -b <name>
    ```
3. Commit your changes and push to the branch:
    ```
    git commit -m "commit-name"
    git push
    ```
5. Open a Pull Request.
    
**Authors**

[cortesana](https://twitter.com/cortesana_dev)

**MIT License**
