#include<stdio.h>

struct comp{
int real;
float imagi;
}c1,c2,sum,diff;
void main(){
printf("Enter the real number");
scanf("%d%d",&c1.real,&c2.real);
printf("Enter the imaginary number");
scanf("%f%f",&c1.imagi,&c2.imagi);
printf("Before addition");
printf("( %d + i * %f ) + ",c1.real,c1.imagi);
printf("( %d + i * %f ) = ",c2.real,c2.imagi);
sum.real = c1.real+c2.real;
sum.imagi = c1.imagi+c2.imagi;
printf("( %d + i * %f ) = ",sum.real,sum.imagi);
}
