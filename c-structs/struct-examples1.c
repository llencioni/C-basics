#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DEF_STRUCT_TYPE 	2

#if (DEF_STRUCT_TYPE == 1)

// Define struct direto na declaracao

struct ID1 {
	int Nada1;
	int Nada2;
} Nada_st;

#else

// Define struct depois da declaracao do tipo

struct ID1 {
	int Nada1;
	int Nada2;
};

struct ID1  Nada_st;

#endif


int main (void)
{
	Nada_st.Nada1 = 10;
	Nada_st.Nada2 = 20;

	printf("\nNada1 = %d\n", Nada_st.Nada1);
 	printf("Nada2 = %d\n\n", Nada_st.Nada2);
}
