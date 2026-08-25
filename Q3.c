//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main()
{
    float length,width;
    printf("enter length :");
    scanf("%f",& length);

    printf("enter width :");
    scanf("%f",& width);


    printf("area is : %f \n",length*width);

    float a,b;
    printf("enter a ");
    scanf("%f",&a);

    printf("enter b ");
    scanf("%f",&b);

    printf("The peremiter of rectangle is : %f \n",2*(a+b));
    return  0; 

} 