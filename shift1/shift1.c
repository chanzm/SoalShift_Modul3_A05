#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *faktorial( void *arr );
void swap(int *xp, int *yp);
void sorting(int A[], int n);

int faktor[1000];
int count=1;
int main(int argc, char* argv[])
{
        int i;
        int batas=argc;
        int arr[batas];

        //faktor = malloc(batas*sizeof(int));

        for(i=1;i<batas;i++) arr[i]=atoi(argv[i]);

        sorting(arr, batas);

        pthread_t thread[batas];

        for(i=1;i<batas;i++) {
                pthread_create( &thread[i], NULL, faktorial, &arr[i]);//membuat thread
        }

        for(i=1;i<batas;i++) {
                pthread_join(thread[i], NULL);
       }

        sorting(faktor, count);

        for(i=1;i<count;i++) {
                printf("%d! = %d\n", arr[i], faktor[i]);
        }
}


void *faktorial( void *ar )
{
    int *x=(int*) ar;
    int total=1;
    int c;
    for(c=*x;c>0;c--) total*=c;
    faktor[count]=total;
    count++;
}


void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void sorting(int A[], int n)
{
        int i, j, min_idx;
        //One by one move boundary of unsorted subarray
        for (i=1; i<n; i++)
        {
              // Find the minimum element in unsorted array
              min_idx = i;
              for (j=i+1; j<n; j++)
                      if (A[j] < A[min_idx]) min_idx = j;
              //Swap the found minimum element with the first element
              swap(&A[min_idx], &A[i]);
         }
}


