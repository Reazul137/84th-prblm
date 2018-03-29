#include<stdio.h>
int main()
{
    int num1, rem1;

    printf("Input an integer : ");
    scanf("%d",&num1);

    rem1 = num1 % 2;

    if(rem1 == 0)
        printf("This is an even number\n");
    else
        printf("This is an odd number \n");
    return 0;
}
