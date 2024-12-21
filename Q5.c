//5. WAP to make Swapping of two number without third variable.
#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the value of A:-");
    scanf("%d",&a);
    printf("enter the value of B:-");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("after swapping the program");
    printf("\nthe swap of variable A is:-%d",a);
    printf("\nthe swap of variable B is:-%d",b);
}
