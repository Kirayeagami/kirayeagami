#include<stdio.h>
int main(){
    float radios;
    printf("Enter radios :");
    scanf("%f",&radios);
    float pi = 3.1415;
    float area = pi * radios * radios;
    printf("the area of circle is :%f",area);
    return 0;
}