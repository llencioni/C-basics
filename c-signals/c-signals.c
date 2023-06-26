/*
 * simple-rt-pthread.c
 *
 *  Created on: Jun 25, 2023
 *      Author: luizlencioni
 *
 *  Working with C signals
 *
 *  To compile: $ gcc c-signals.c -o c-signals.exe
 *  To run: ./c-signals.exe
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

// https://www.gnu.org/software/libc/manual/html_node/Signal-Handling.html

// Defined in header <stdlib.h>
// exit(EXIT_FAILURE); = exit(0); 
// exit(EXIT_SUCCESS); = exit(1);

// Defined in header <unistd.h>
// sleep(seconds);

// Defined in header <signal.h>
// Signal types: SIGABRT (internal abort), SIGINT(CTRL+C), etc
//
// raise(SIGABRT); // signal from inside the program
//
// 	signal(SIGINT, signal_handler);	// "signal handler" is the user handler function
//	signal(SIGABRT, signal_handler);
//


/*
 * C signal handler routine
 */
static void signal_handler(int signal_name)
{
	if(signal_name == SIGINT)
		printf("\n\nCTRL+C pressed!\n\n");
	else if(signal_name == SIGABRT)
		printf("\n\nProgram aborted from inside!\n\n");

	exit(EXIT_FAILURE);
}

/*
 * Main routine
 */
int main (int argc, char *argv[])
{
	volatile int k = 0;

	// Create the signal handler
	signal(SIGINT, signal_handler);
	signal(SIGABRT, signal_handler);
	
	// Doing nothing, waiting for an user <CRTL>+<C> action
	
	printf ("\n\nProgram started\n");

	while(1)
	{
		for(k=0; k<1000000; k++)
		{
			printf("\nWaiting for CRTL+C ....");
			
			sleep(1);

			// If CTRL + C does not come, ABORT the program
			if(k==10)
				raise(SIGABRT);
		}
	}

	// Should not get here
	exit(EXIT_SUCCESS);

	return(0);
}

