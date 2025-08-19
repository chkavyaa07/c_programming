#include<stdio.h>
   int main(){
   int a;
   int b;

   printf("Enter a Number");
   scanf("%d",&a);

   printf("Enter a Number");
   scanf("%d",&b);

   if(a>b){
    printf("a is bigger");

   }else if(b>a){
     printf("b is bigger");

   }else{
     printf("both are equal");
   }

   }

