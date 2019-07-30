#include<stdio.h>

void insertion_sort(int array[], int n)
{
    int i, j, item;
    for(i = 1; i < n; i++)
    {
        item = array[i];
        j = i - 1;
        while(j >= 0 && array[j] > item)
        {
            array[j+1] = array[j];
            j = j - 1;
        }
        array[j] = item;
    }

}
int main()
{
   int a[5] = {1, 2, 3, 5, 4};
   int n = 5;
   int ii = insertion_sort(a, n);
   printf("%d ", ii);
}
