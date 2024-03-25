//Insertion sort 
#include <stdio.h>

int main()
{
    int n;    //number of array elements(size);
    scanf ("%d",&n);
    int arr[n]; // declaration of array size
    for (int i=0;i<n;i++)   // loop for scan array elements of size n;
    {
        scanf ("%d",&arr[i]);
    }
    for (int i=1;i<n;i++)  // loop to traverse the array from i = 1 to n;
    {
        int j = i-1;  // declare j = i-1 which means j starts from 0;
        while (j>=0)  // while (j>=0) the loop will run;
        {
            if (arr[j]>arr[j+1])  // check the arr[i] > arr[j+1] if true it will swap  
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            else // if not it break from the while loop 
            {
                break;
            }
            j--; // if (arr[j]>arr[j+1]) true the j will decreament to check the array element before;
        }
    }
    for (int i=0;i<n;i++) // printing the sorted array;
    {
        printf ("%d ",arr[i]);
    }

    return 0;
}
