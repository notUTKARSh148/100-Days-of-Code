//Q4: Write a program to calculate the area and circumference of a circle given its radius.

# include <stdio.h>
int main()
{
    float radius,area,circumference;
    printf("enter radius :");
    scanf("%f",& radius);

    area = 3.14 * radius * radius;


    printf("area is : %f \n",22.0/7.0*radius*radius);

    printf("The circumference of circle is : %f \n",2*3.14*radius);
    return  0; 

} 