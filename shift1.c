#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *faktorial( void *arr );
void swap(int *xp, int *yp);

pthread_t *thread;//inisialisasi awal
int arr[1000];
int banyak=0;
int main()
{
        int i=0;
        int t=0;
        int iret1;
        while(1)
        {
                char chr;
                scanf("%d%c", &arr[t], &chr);
                thread=malloc(t*sizeof(int));
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
        for(i=0;i<t;i++)
        {
                iret1 = pthread_create( &thread[banyak], NULL, faktorial, NULL);//membuat thread pertama
                if(iret1)//jika eror
                {
                        fprintf(stderr,"Error - pthread_create() return code: %d\n",iret1);
                        exit(EXIT_FAILURE);
                }
                pthread_join( thread[i], NULL); 
                 banyak++;
                if(t==banyak) break;
         }
        // for(int i=0;i<banyak;i++) pthread_join( thread[i], NULL); 

        exit(EXIT_SUCCESS);

}


void *faktorial( void *ar )
{
    int x=arr[banyak];
    int total=1;
    int c;
    for(c=x;c>0;c--) total*=c;
    printf("%d! = %d\n", x,total);
}


void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

