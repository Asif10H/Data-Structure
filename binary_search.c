#include<stdio.h>

int binary_search(int array[], int n, int x)
{
    int left, right, mid;
    left = 0;
    right = n -1;
    while(left <= right)
    {
        mid = (left + right) /2;
        if(array[mid] == x)
        {
            return mid;
        }
        if(array[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;

}
int main()
{
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int x = 4;
    int s = binary_search(array, n, x);
    printf("%d ", s);
    return 0;

}
