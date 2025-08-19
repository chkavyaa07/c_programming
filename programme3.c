#include<stdio.h>
int main(){

    int a;
    int b;
    int c;
    float d;

    printf("Enter First Value");
    scanf("%d",&a);

    printf("Enter Second Value");
    scanf("%d",&b);

    printf("Enter Third Value");
    scanf("%d",&c);

    d=(a+b+c)/3;

    printf("average=");
    printf("%f",d);

}
