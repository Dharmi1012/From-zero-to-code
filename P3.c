#include<stdio.h>

int main()
{
     int dairymilk=50, kitkat=50, silk=100, munch=50, cadbury=150;
     int a, b, c, d, e;

     printf("enter how many dairymilk do you want \n");
     scanf("%d",&a);
     printf("enter how many kitkat do you want \n");
     scanf("%d",&b);
     printf("enter how many silk do you want \n");
     scanf("%d",&c);
     printf("enter how many munch do you want \n");
     scanf("%d",&d);
     printf("enter how many cadbury do you want \n");
     scanf("%d",&e);

     int t;
     t = (dairymilk*a) + (kitkat*b) + (silk*c) + (munch*d) + (cadbury*e);
     printf("total bill is %d\n", t);

     if(t>=500)
     {
         printf("the discounted bill is %d\n", t - ((t*3)/100) );
     }

     else if(t>=1000)
     {
         printf("the discounted bill is %d\n", t - ((t*5)/100) );
     }
     return 0;
}
