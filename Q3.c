//3. WAP to make reverse the 1D Array   Like : int a[10]= {1,5,7,3,2,9}      o/p: 9,2,3,7,5,1
#include <stdio.h>
void main()
{
    int i, array[10] = {1, 5, 7, 3, 2, 9};
    for (i = 0; i <= 6; i++)
    {
        printf("array[%d]=[%d]\n", i, array[i]);
    }
}