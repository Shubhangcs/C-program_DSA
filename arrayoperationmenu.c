#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
//global declaration

int array[SIZE],n,i;

//Read array function

void readArray(){
printf("Enter the value for n intiger : ");
scanf("%d",&n);
	if(n>SIZE){
		printf("%d Exceeds the array size\n",n);	

	}
	else{
		if(n == 0){
			printf("Invalid input\n");
		
		}
		else{
			printf("Enter the array elements : \n");
				for(i = 0 ; i < n ; i++){
					scanf("%d",&array[i]);
				}
		
		}
	
	
	
	}
}

//Print array function

void printArray(){

if(n == 0){
	printf("Array is empty");

}
else{
	printf("The array elements are\n");
		for(i = 0 ; i < n ; i++){
			printf("%d\n",array[i]);
		
		}
}

}

// Main function

int main(){

int ch,flag;
	while(1){
		printf("\t\t\t\t################## Array operation menu ##################\n");
		printf("\t1.Create an array of N elements\n");
		printf("\t2.Display array\n");
		printf("\t3.Exit window\n");
		printf("\t\t\t\t\t\t****Enter your choice****\n");
		scanf("%d",&ch);
			switch(ch){
				case 1 : 
					readArray();
					flag = 1;
					break;
				case 2 : 
					printArray();
					break;
				case 3 : exit(0);
					break;
				default : printf("Enter the valid choice!!!!!!\n\n");
			
			}
	
	}




}
