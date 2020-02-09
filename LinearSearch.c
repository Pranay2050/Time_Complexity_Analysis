#include<stdio.h>
#include<stdlib.h>
#define N 100000
void linear_search(int arr[], int x)
{
    int i;
    for (i = 0; i < N; i++)
    {   if (arr[i] == x)
            printf("Found at %d\n",i);
    }
}

int main()
{
    int arr[N],i;
    for(i=0;i<N;i++)
        arr[i]=i*10;
    linear_search(arr,999990);
}

/*Output
Found at 99999

real	0m0.004s
user	0m0.000s
sys	0m0.003s
*/
