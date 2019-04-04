#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int faktorial(int x);
//pthread_t *thread;//inisialisasi awal
//int t;

int main()
{
	int i=0;
	int t=0;
	char masuk[1000];
	int arr[1000];
	while(1)
	{
		char chr;
		scanf("%d%c", &arr[t], &chr);
		t++;
		int  j, min_idx;

    			//One by one move boundary of unsorted subarray 
    		for (i=0; i<t; i++) 
    		{
        		// Find the minimum element in unsorted array 
      			min_idx = i;
        		for (j=i+1; j<t; j++)
          			if (arr[j] < arr[min_idx]) min_idx = j;
        				//Swap the found minimum element with the first element
        		swap(&arr[min_idx], &arr[i]);
		}

		if(chr == '\n') break;
	}
	for(i=0;i<t;i++) printf("%d! = %d \n", arr[i], faktorial(arr[i]));
}

int faktorial(int x)
{
	if(x<2) return 1;
	else return x*faktorial(x-1);
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

