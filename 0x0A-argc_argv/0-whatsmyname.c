#include <stdio.h>
/**
 * main - writes programe name
 * @arg: argument count
 * @argv: array of pointers to CLI argument
 * Return: 0
 **/
int main(int argc,char *argv[])
{
	print("%s\n", argv[argc- 1]);
			return (0);
}
