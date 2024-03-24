
#include <stdio.h>
// selection short
/* 1st take the first element in the arr[i] as the minimum (min) and then it check with the 
arr[j] which is = j=i+1; if j<min then min = j;
the next step would be the swapping in of arr[i] with the arr[min]
to sort the elements in the array */

int main()
{
    int n;
    scanf ("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        scanf ("%d",&arr[i]);
    }
    for (int i=0;i<n-1;i++)
    {
        int min = i;
        for (int j=i+1;j<n;j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    for (int i=0;i<n;i++)
    {
        printf ("%d ",arr[i]);
    }
    return 0;

}
