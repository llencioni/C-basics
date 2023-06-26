
Defined in header <stdlib.h>
===============================
- exit(EXIT_FAILURE); = exit(0); 
- exit(EXIT_SUCCESS); = exit(1);


Defined in header <unistd.h>
===============================
- sleep(seconds);


Defined in header <signal.h>
===============================
- Signal types: SIGABRT (internal abort), SIGINT(CTRL+C), etc

- raise(SIGABRT); // signal from inside the program

- signal(SIGINT, signal_handler);	// "signal handler" is the user handler function
- signal(SIGABRT, signal_handler);



https://www.gnu.org/software/libc/manual/html_node/Signal-Handling.html


