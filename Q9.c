//Write a program to calculate simple and compound interest for given principal, rate, and time.

# include <stdio.h>
int main()
{
    int principal,rate,time,interest;
    printf("enter principal :");
    scanf("%d",&principal);
    printf("enter rate :");
    scanf("%d",&rate);
    printf("enter time :");
    scanf("%d",&time);
    interest = (principal * rate * time) / 100;
    printf("the interest is : %d\n", interest);
    return 0;
}