#include<stdio.h>

int linerat_search(int arr[], int n, int x)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(arr[i] == x)
        {
            return i;
        }
    }
    i = -1;
    return -1;
}
int main()
{
   int arr[10] = {10, 50, 20, 30, 60, 40, 90, 70, 80, 100};
   int n = 10;
   int x = 10;
   int s = linerat_search(arr, n, x);
   printf("%d ", s);
}
