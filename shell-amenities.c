
#include <stdio.h>
#include <stdlib.h>

#define __PRINTF_BLACK__	"\033[30m"
#define __PRINTF_BLUE__		"\033[34m"
#define __PRINTF_CYAN__		"\033[36m"
#define __PRINTF_GREEN__	"\033[32m"
#define __PRINTF_MAGENTA__	"\033[35m"
#define __PRINTF_RED__		"\033[31m"
#define __PRINTF_WHITE__	"\033[37m"
#define __PRINTF_YELLOW__	"\033[33m"

#define PRINT_QTDE	(4)

int main (int argc, char ** argv)
{
	printf("\n");

	for (int i=1; i<PRINT_QTDE; i++)
		printf(__PRINTF_BLUE__ "This is Blue ... %d\n", i);
	printf("\n");

	for (int i=1; i<PRINT_QTDE; i++)
		printf(__PRINTF_CYAN__ "This is Cyan ... %d\n", i);
	printf("\n");

	for (int i=1; i<PRINT_QTDE; i++)
		printf(__PRINTF_GREEN__ "This is Green ... %d\n", i);
	printf("\n");

	for (int i=1; i<PRINT_QTDE; i++)
		printf(__PRINTF_MAGENTA__ "This is Magenta ... %d\n", i);
	printf("\n");

	for (int i=1; i<PRINT_QTDE; i++)
		printf(__PRINTF_RED__ "This is Magenta ... %d\n", i);
	printf("\n");

	for (int i=1; i<PRINT_QTDE; i++)
		printf(__PRINTF_WHITE__ "This is White ... %d\n", i);
	printf("\n");

	exit(EXIT_SUCCESS);
}

