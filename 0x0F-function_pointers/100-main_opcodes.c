#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/*
 * main- chek the code for student
 * @argc : the num of args
 * @argv :argument vector
 *
 * returne : always 0.
 */
int main(int argc, char **argv)
{
	char *p =(char *)main;
	int b;
	if (argc != 2)
	printf("error\n"), exit(1);
	b = atoi(argv[1]);
	if (b < 0)
	printf("error\n"), exit(2);
	while (b--)
	printf("%02hhx%s", *p++, b? " ": "\n");
	return (0);	
