# 0x18. C - Dynamic Libraries

## General

    What is a dynamic library, how does it work, how to create one, and how to use it
	What is the environment variable $LD_LIBRARY_PATH and how to use it
	What are the differences between static and shared libraries
	Basic usage nm, ldd, ldconfig

## Requirements

	
    Allowed editors: vi, vim, emacs
    All your files will be compiled on Ubuntu 14.04 LTS
    Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
    All your files should end with a new line
    A README.md file, at the root of the folder of the project is mandatory
    Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
    You are not allowed to use global variables
    No more than 5 functions per file
    You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
    You are allowed to use _putchar
    You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
    In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
    The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called holberton.h
    Don’t forget to push your header file

## Exercises

	0. A library is not a luxury but one of the necessities of life
	Create the dynamic library libholberton.so containing all the functions listed below:

	1. Without libraries what have we? We have no past and no future
	Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.

	2. Either write something worth reading or do something worth writing
	Write a blog post describing the differences between static and dynamic libraries. It should cover:

    Why using libraries in general
    How do they work
    How to create them (Linux only)
    How to use them (Linux only)
    What are the differences between static and dynamic libraries
    What are the advantages and drawbacks of each of them
	Your posts should have examples and at least one picture, at the top. Publish your blog post on Medium or LinkedIn, and share it at least on LinkedIn.
	When done, please add all urls below (blog post, LinkedIn post, etc.)
