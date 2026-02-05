#include<stdio.h>

int main()
{
    float length, width, area;

    printf("enter length and width:");
    scanf("%f %f", &length,&width);

    area=length*width;

    printf("area of rectangle=%.2f",area);

    return 0;
}
