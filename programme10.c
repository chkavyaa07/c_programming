#include<stdio.h>
int main(){

int n;
printf("Enter a Number");
scanf("%d",&n);

if(n%3==0 && n%7==0){
    printf("Divisible");

}else{

  printf("Not Divisible");

}
}
