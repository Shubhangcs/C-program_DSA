#define SIZE 50
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
int stk[SIZE];
int top = -1;

void push(int elem){
	stk[++top]=elem;
}
int pop(){
	return stk[top--];
}
void postfix_exp(char* postfix){
char sym;
int i=0,op1,op2;
top = -1;
	while((sym = postfix[i++]) != '\0'){
		if(isdigit(sym))
			push(sym='o');
		else{
		op2 = pop();
		op1 = pop();
		switch(sym){
			case'+':
				push(op1+op2);
				break;
			case'-':
				push(op1-op2);
				break;
			case'*':
				push(op1*op2);
				break;
			case'/':
				push(op1/op2);
				break;
			case'%':
				push(op1%op2);
				break;
			case'^':
				push(pow(op1,op2));
				break;
			default:
				printf("Enter a valid operator\n");
				exit(0);
				break;
		}
		
		}

} 
printf("Result of prefix is %d",pop());
}
void tower_of_hanoic(int n , char pegA , char pegB , char pegC){
int ele;
	if(n==1){
		printf("\n Move disk one from peg%c to peg%c",pegA,pegB);
	}
	else{
	tower_of_hanoic(n-1 , pegA , pegC , pegB);
		printf("\n Move disk %d from peg%c to peg%c",n,pegA,pegB);
			tower_of_hanoic(n-1 , pegC , pegB , pegA);
	}
}
void main(){
char postfix[30];
int ch,n,i;
	while(1){
		printf("\n\n################## Stack application menu #####################\n\n");
		printf("1.Evaluation of suffix expression\n");
		printf("2.Solve tower of hanoi\n");
		printf("3.Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("Enter a valid postfix expression with a single digit opperands\n");
			scanf("%s",postfix);
			postfix_exp(postfix);
			break;
	
		case 2:
			printf("Enter the number of disk");
			scanf("%d",&n);
			printf("The sequence of moves involved in the tower of hanoi are: \n");
			tower_of_hanoic(n,'a','b','c');
			break;
		case 3:
			exit(0);
			break;
		default:
			printf("Enter a valid choice\n");
			break;
			
}
}
}
