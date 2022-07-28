# C-Lab-4
Tasks:

Task 1: 
Write a program that allows the user to enter multiple lines on the keyboard 
and then prints them out in ascending order of line length.

Explanation:
Lines are entered until an empty line appears and are written to a two-dimensional 
character array. At the same time, an array of pointers to char is created and 
filled. When the input is finished, the program sorts the pointers in the array 
nd outputs the lines according to the sorted pointers.

The program should consist of functions:

     - void lineSort(char *str[],int size) - a function that sorts an array of pointers
     - void printLines(const char *str[],int size) - a function that prints lines in the order of the str array
     - main() - organization of string input into a two-dimensional character array
Three files are created: task1.h, task1.cpp, main1.cpp.


Task 2:
