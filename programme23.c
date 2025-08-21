#include<stdio.h>
   int main(){
   int a;
   int b;
   int c;

   printf("Enter the Angle a");
   scanf("%d",&a);

   printf("Enter the Angle b");
   scanf("%d",&b);

   printf("Enter the Angle c");
   scanf("%d",&c);

   if(a+b+c==180){
    printf("Valid Triangle");

   }else{
    printf("Invalid Triangle");
   }



   }
