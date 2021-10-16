#include <stdio.h>

int linear_search(int A[], int n, int x);

int main()
{
    int A[] = {22, 17, 2225, 9, 29, 2247, 97, 32};
    int n = 8;
    int find_element = 2247;

    int element = linear_search(A, n, find_element);
    if(element >= 0)
        printf("Element position: %d", element);
    else
        printf("Element position not found. %d", element);

    getch();
}

int linear_search(int A[], int n, int x)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(A[i] == x)
            return i;
    }
    i = -1;

    return i;
}
