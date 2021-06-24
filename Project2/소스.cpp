#include<stdio.h>

int main(void)
{
    int a[5] = { 5,77,3,12,1 };
    int temp;
    int i, j, k; 




    for (j = 0;j < 5;j++)
    {
        for (k = 0;k < 4 - j; k++)
        {
            if (a[k] > a[k + 1])
            {
                temp = a[k];
                a[k] = a[k + 1];
                a[k + 1] = temp;
            }
        }
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}