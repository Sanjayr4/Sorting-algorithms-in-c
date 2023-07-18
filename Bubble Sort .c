#include <stdio.h>

int main() {
    // To Write C code here for bubble sort 
    int n;
    scanf ("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        scanf ("%d",&arr[i]);
    }
    for (int i=0;i<n;i++)// thise for acessing the index in array
    {
       for (int j=0;j<n-1;j++)// thise for ascessing the number in that index
       {
           if (arr[j]>arr[j+1])
           {
               //swapping process
               int temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp;
               
           }
       }
    }
    for (int i=0;i<n;i++)
    {
        printf ("arr[%d] %d\n ",i,arr[i]);
        // The higher the index higher the number
    }

    return 0;
}
