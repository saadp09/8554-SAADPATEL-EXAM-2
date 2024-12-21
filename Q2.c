//2. WAP to find square of any number using UDF
#include<stdio.h>
void square(int a)
{
    printf("the  of:- %d",a*a);
}

void main()
{
    int a;
    printf("enter num:-");
    scanf("%d",&a);
    square(a);
}
