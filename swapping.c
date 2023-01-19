#include<stdio.h>
void main(){
int a[1000][1000],b[1000][1000],i,j,r,c;
printf("Enter the row size \n");
scanf("%d",&r);
printf("Enter the coloumn size \n");
scanf("%d",&c);
printf("Enter the elements of the matrix \n");
	for(i = 0 ; i < r ; i++){
		for(j = 0 ; j < c ; j++){
			scanf("%d",&a[i][j]);
		}
	}
printf("Entered the elements are\n");
	for(i = 0 ; i < r ; i++){
		for(j = 0 ; j < c ; j++){
			printf("%d  ",a[i][j]);
		}
			printf("\n");
	}
printf("swapped elements are\n");
	for(i = 0 ; i < c ; i++){
		for(j = 0 ; j < r ; j++){
			printf("%d  ",a[j][i]);
		}
		printf("\n");
	}
}
