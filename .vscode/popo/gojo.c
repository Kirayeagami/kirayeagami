#include<stdio.h>
int main(){
    float a,b,c,d,e,f;
    printf("enter the value of a:");
    scanf("%f",&a);
    printf("enter the value of b:");
    scanf("%f",&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    printf("addition=%f \n",c);
    printf("subtraction=%f \n",d);
    printf("multiplication=%f \n",e);
    printf("division=%f",f);
}