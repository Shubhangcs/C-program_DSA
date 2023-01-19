#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
//global declaration

int array[SIZE],n,i,pos,elem;

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
//insertion operation
void insert(){
if(n == SIZE){
	printf("The array size exceeds\n");
	}
	else{
	printf("Enter the position of the element to be inserted\n");
	scanf("%d",&pos);
		if(pos <= n){
			printf("Enter the element to be inserted\n");
			scanf("%d",&elem);
			for(i = n-1 ; i >= pos ; i--){
				array[i+1] = array[i];
				}
				array[pos] = elem;
				n++;
			}
			else{
				printf("position entered is invalid\n");
			}
		}
	}
//Deletion operation
void delete(){
if(n == 0){
	printf("No elements to be deleted in an empty array\n");
}
else{
	printf("Enter the position to be deleted from\n");
	scanf("%d",&pos);
		if(pos < n){
			printf("The deleted element is %d\n",array[pos]);
			for(i = pos+1 ; i<n-1 ; i++){
				array[i - 1] = array[i];
			}
			n--;
		}
		else{
		printf("Position entered is invalid\n");
		}
}
}

// Main function

int main(){

int ch,flag;
	while(1){
		printf("\t\t\t\t################## Array operation menu ##################\n");
		printf("\t1.Create an array of N elements\n");
		printf("\t2.Insert an element to array in specific position\n");
		printf("\t3.Delete an element in specific position\n");
		printf("\t4.Display array\n");
		printf("\t5.Exit window\n");
		printf("\t\t\t\t\t\t****Enter your choice****\n");
		scanf("%d",&ch);
			switch(ch){
				case 1 : 
					readArray();
					flag = 1;
					break;
				case 2 : 
					insert();
					break;
				case 3 : 
					delete();
					break;
				case 4 :
					printArray();
					break;
				case 5 :
					exit(0);
					break;
				default : printf("Enter the valid choice!!!!!!\n\n");
			
			}
	
	}




}
