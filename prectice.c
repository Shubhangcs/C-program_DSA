//linked list operation

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct NODE{
int data;
struct node*link;
};
typedef struct node* n;

	n first = NULL;
n create_node(){
n newnode = (node)malloc(sizeof(struct node));
printf("Enter the data INT");
scanf("%d",&newnode->data);
newnode->link=NULL;
return newnode;
}
void insert_front(){
	n usr1 = create_node();
	if(first == NULL)
		printf("NO space\n");
	else{
		usr1->link=first;
		first = usr1;
	}
}
		
void display(){
	n ptr;
	int count = 0;
	ptr = first;
	if(first == NULL)
		printf("List is empty\n");
	else{
		while(ptr != NULL){
		printf(" %d ->",ptr->data);
		ptr = ptr->link;
		count++;
		}
	printf("\nNODE count = %d\n",count);
	}
}
	
void main(){
int ch,n,i;
	while(1){
		printf("1.Enter the data\n");
		printf("2.display the data\n");
		scanf("%d",&ch);
		if(ch == 1){
			printf("Enter the number of nodes \n");
			scanf("%d",&n);
			for(i = 1 ; i<n ; i++){
				insert_front();
			}
		}
		else if(ch == 2){
			display();
		}
		else
			exit(0);
	}
}		

