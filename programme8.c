#include<stdio.h>
int main(){

    int n;
    int x;
    printf("Enter a Number");
    scanf("%d",&n);

    n%2==0?(x=n*n):(x=n*n*n);
printf("%d",x);

}
