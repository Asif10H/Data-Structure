#include<stdio.h>
int selection_sort(int arr[], int n)
{
    int i , j, temp;
    for(i = 0; i < n-1; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }


}

int main()
{
    int arr[100], i, j, n, l;
    printf("Enter array size\n");
    scanf("%d", &n);
    printf("Enter array element\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    selection_sort(arr,n);
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

}


    //printf("%d ",
