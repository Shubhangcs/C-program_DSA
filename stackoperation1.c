#include<stdio.h>
#include<stdlib.h>
#define max 5
void push(int s[] , int *t , int item){
if(*t >= max-1){
	printf("Stack is full\n");
}
else{
	s[++(*t)] = item;
}
}
int pop(int s[] , int *t){
int item;
if(*t == -1)
	return 0;
item = s[(*t)--];
return item;

}
void display(int s[] , int *t){
int i;
if(*t == -1){
	printf("Stack is empty\n");
}
else{
	for(i=*t ; i>=0 ; i--)
		printf("%d\t",s[i]);
		printf("\n");
}
}
void main(){
int choice,item,n,i,s[100],top=-1,flag;
while(1){
	printf("Operation on stack\n");
	printf("\n1-->push\n");
	printf("2-->pop\n");
	printf("3-->display\n");
	printf("4-->exit\n");

	scanf("%d",&choice);
	switch(choice){
	case 1:
		printf("Enter the element to be pushed in\n");
		scanf("%d",&item);
		push(s , &top , item);
		break;
	case 2:
		item = pop(s,&top);
		if(item == 0)
			printf("Stack is empty\n");
		else
			printf("item deleted = %d\n",item);
		break;
	case 3:
		display(s,&top);
		break;
	case 4:
		exit(0);
	
	}
}
}
