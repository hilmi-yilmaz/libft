# Libft Project

Libft is a self-written library which contains the most important functions of the C Standard Library (libc). It also contains some other useful functions.

## Description

The function names have the following structure: ft + _ + C Library Function Name. To find information about a function, use the manpages together with the C Library Function Name. 

A lot of functions are not part of the C Standard Library. These functions do the following:

* **ft\_substr**:  Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.
* **ft\_strjoin**: Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.
* **ft\_strtrim**: Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.
* **ft\_split**: Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array ends with a NULL pointer.
* **ft\_itoa**: Allocates (with malloc(3)) and returns a string representing the integer received as an argument.
* **ft\_strmapi**: Applies the function ’f’ to each character of the string ’s’ to create a new string (with malloc(3)) resulting from successive applications of ’f’.
* **ft\_putchar\_fd**: Outputs the character ’c’ to the given file descriptor.
* **ft\_putstr\_fd**: Outputs the string ’s’ to the given file descriptor.
* **ft\_putendl\_fd**: Outputs the string ’s’ to the given file descriptor, followed by a newline.
* **ft\_putnbr\_fd**: Outputs the integer ’n’ to the given file descriptor.
