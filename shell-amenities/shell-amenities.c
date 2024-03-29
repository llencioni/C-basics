
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

int main (int argc, char *argv[])
{
	int i;
	
	/***********************************************/
	/* Command Line Arguments 					   */
	/***********************************************/

	printf("\nName of the .obj file: %s\n", argv[0]);
	
	/* Argument passing treatment */
	if (argc < 2)
	{
        printf("\nNo argument passed through command line!\n");
    } 
	else
	{
        printf("\nArgument supplied: ");
        for (i = 1; i < argc; i++)
		{
            printf("%s\t", argv[i]);
        }
        printf("\n");
    }
	
	/***********************************************/
	/* Shell Printf Coloring 					   */
	/***********************************************/
	
	/* Blue */
	printf(__PRINTF_BLUE__ "\n");

	for (int i=1; i<PRINT_QTDE; i++)
		printf("This is Blue ... %d\n", i);

	/* Cyan */
	printf(__PRINTF_CYAN__ "\n");

	for (int i=1; i<PRINT_QTDE; i++)
		printf("This is Cyan ... %d\n", i);

	/* Green */
	printf(__PRINTF_GREEN__ "\n");

	for (int i=1; i<PRINT_QTDE; i++)
		printf("This is Green ... %d\n", i);

	/* Magenta */
	printf(__PRINTF_MAGENTA__ "\n");

	for (int i=1; i<PRINT_QTDE; i++)
		printf("This is Magenta ... %d\n", i);

	/* Red */
	printf(__PRINTF_RED__ "\n");

	for (int i=1; i<PRINT_QTDE; i++)
		printf("This is Magenta ... %d\n", i);
	
	/* White */
	printf(__PRINTF_WHITE__ "\n");

	for (int i=1; i<PRINT_QTDE; i++)
		printf("This is White ... %d\n", i);
	printf("\n");

	exit(EXIT_SUCCESS);
}

