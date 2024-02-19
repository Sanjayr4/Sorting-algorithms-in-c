#include<stdio.h>
int main()
{
int n;
scan ("%d",&n);
int arr[n];
for (int i=0;i<n;i++)
{
Scanf ("%d",&arr[i]);
}
int left=0;right=n-1;
While (arr[left]<arr[right])
{
   printf ("%d %d",arr[left],arr[right])
   left++;
   right--;
}
If (n%2!=0)
{
Printf ("%d",arr[left]);
}
Return 0;
}