#include<stdio.h>
#define N 100000

int binary_search(int arr[],int x)
{
    int low,high,mid;
    low=0;
    high=N-1;

    while(low<high)
    {
        mid=(low+high)/2;
        if(arr[mid]==x)
        {
            printf("Found at %d\n",mid);
            return 0;
        }
        else if(x<arr[mid])
            high=mid-1;
        else
            low=mid+1;
    }

    if(arr[low]==x)
        printf("Found at %d\n",low);
    else
        printf("Not found\n");
}

int main()
{
    int arr[N],i;
    for(i=0;i<N;i++)
        arr[i]=i;
    binary_search(arr,99999);
}

/*output
Found at 99999

real	0m0.004s
user	0m0.000s
sys	0m0.003s
*/
