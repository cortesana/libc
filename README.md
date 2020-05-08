# libc

>  **A homemade libc.** :wrench::pineapple:


**Work in Progress.**

The aim of this project is to code my own **C standard library** replicating mythical functions. It will be expanded and revised as I learn more.

## libc functions
### Standard Input-Output functions

||Description|Argument type|Return type|
|-----------|-----------|-----------|-----------|
|ft_putchar|Write char c (converted to an 'unsigned char')|char|void|

EXAMPLE:
```c
void	ft_putchar(char c);

int	main()
{
	char c;
	
	c = 'c';
	ft_putchar(c);
}
// OUTPUT => c
```

### Character-Handling functions

||Description|Argument type|Return type|
|-----------|-----------|-----------|-----------|
|ft_isalpha|Alphabetic character test|char|int|
|ft_isdigit|Numeric character test|char|int|
|ft_isprint|Printable character test|char|int|
|ft_islower|Lower-case character test|char|int|
|ft_isupper|Upper-case character test|char|int|
|ft_tolower|Upper-case to lower-case character conversion|char|char|
|ft_toupper|Lower-case to upper-case character conversion|char|char|
 
 EXAMPLE:
```c
int	ft_isalpha(char c);

int	main()
{
	char c;
	
	c = 'c';
	ft_isalpha(c); // Return 1
	c = '2';
	ft_isalpha(c); // Return 0
}
```


### String-Handling functions

||Description|Argument type|Return type|
|-----------|-----------|-----------|-----------|
|ft_strcat|String concatenation.|*char|*char|
|ft_strncat|Size-bound string concatenation|*char, int|*char|
|ft_strlcat|Size-bound string concatenation.|*char, int|unsigned int|
|ft_strcmp|String comparison|*char|int|
|ft_strncmp|Size-bound string comparison|*char, int|int|
|ft_strcpy|String copying|*char|*char|
|ft_strncpy|Size-bound string copying|*char, int|*char|
|ft_strlcpy|Size-bound string copying|*char, int|*char|
|ft_strlen|Return string length|*char|int|
|ft_strstr|Locate a substring in a string|*char|*char|
|ft_strdup|Save a copy of a string|*char|*char|

EXAMPLE:
```c
char	*ft_strcat(char *dest, char *src);

int	main()
{
	char dest[] = "Hola";
	char src[] = ", mundo";
	
	ft_strcat(dest, src); // Return Hola, mundo
}
```
  

### Standard functions

||Description|Argument type|Return type|
|-----------|-----------|-----------|-----------|
|ft_atoi|String to integer conversion|string|int|
|ft_div|Return quotient and remainder from division|int|void


EXAMPLE:
```c
int	ft_atoi(char *str);

int	main()
{
	char str[] = "+-++1skaj334skdj";
	
	ft_strcat(str); // Return -1334
}
```

### Math functions

||Description|Argument type|Return type|
|-----------|-----------|-----------|-----------|
|ft_sqrt|Return square root|int|int|


EXAMPLE:
```c
int	ft_sqrt(int nb);

int	main()
{
	int nb;
	
	nb = 4;
	ft_sqrt(nb); // Return 2
}
```
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

Contributions are what make the open source community an amazing place to be, learn and grow. Any contributions to **libc** are **greatly appreciated**.
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