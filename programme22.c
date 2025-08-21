#include<stdio.h>
   int main(){
   int a;
   int b;
   int c;
   printf("Enter the Side a");
   scanf("%d",&a);

   printf("Enter the Side b");
   scanf("%d",&b);

   printf("Enter the Side c");
   scanf("%d",&c);

   if(a==b && b==c){
    printf("Equilateral");

   }else if(a==b || b==c || c==a){
    printf("Isosceles");

   }else{
    printf("Scalene");
   }


   }
