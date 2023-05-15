
/**************
 BINARY SEARCH
***************/

#include <stdlib.h>
#include <stdio.h>

// Array must be already sorted for binary search !!!
#define MAX 6
int Array[MAX] = {3, 6, 7, 8, 9, 12};

int searchFor(int array[], int N, int numToFind)
{
    // Your code goes here    
    int found=-1;
    int middle, first, last;

    // Binary Search
    first = 0;
    last = N-1;

    do
    {
        middle = (first+last)/2;

        printf("\nBuscando ... %d", array[middle]);

        if(array[middle]==numToFind)
        {
            found = middle;
            break;
        }
        else if (numToFind > array[middle])
            first = middle+1;
        else // (numToFind < array[middle])
            last = middle-1;
    } 
    while (first<=last);

    return(found);
}

int main (void)
{
    int searchResult = 0;
    int numFind = 0;

    while(1)
    {
        printf("\nEnter a number to search for: ");
        scanf("%d", &numFind);

        searchResult = searchFor(Array, MAX, numFind);

        if(searchResult == -1)
            printf("\nNumber is not on the array\n");
        else
            printf("\nNumber is on the %d element the array\n", searchResult);
    }
}
