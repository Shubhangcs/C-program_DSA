#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct NODE{
	int sem;
	long long phno;
	char name[20],branch[10],usn[20];
	struct NODE*link;
};
typedef struct NODE* NODEPTR;

NODEPTR first = NULL;

NODEPTR create_node(){
	NODEPTR newnode = (NODEPTR)malloc(sizeof(struct NODE));
	printf("Enter the student usn\n");
	scanf("%s",newnode->usn);
	printf("Enter the student name\n");
	scanf("%s",newnode->name);
	printf("Enter the student branch\n");
	scanf("%s",newnode->branch);
	printf("Enter the student semister\n");
	scanf("%d",&newnode->sem);
	printf("Enter the student phno\n");
	scanf("%lld",&newnode->phno);
	newnode->link=NULL;
	return newnode;
}
//insertion of node
void insert_front(){
	NODEPTR temp = create_node();
	if(first == NULL)
		first = temp;
	else{
		temp->link=first;
		first = temp;
	}
}
//deletion of the node
void delete_end(){
	NODEPTR ptr,prev;
	ptr = first;
	if(first == NULL)
		printf("List is empty\n");
	else if(first->link == NULL){
		first=NULL;
		free(ptr);
		printf("End node is deleted succesfully\n");
	}
	else{
		while(ptr->link != NULL){
			prev = ptr;
			ptr = ptr->link;
		}
		prev->link = NULL;
		free(ptr);
		printf("End node deleted succesfully\n");
	}
}
//display linked list
void display(){
	NODEPTR ptr;
	int count = 0;
	ptr = first;
	if(first == NULL)
		printf("List is empty\n");
	else{
		printf("List values are ... \n");
		printf("[usn , name , branch , sem , phone]\n");
		while(ptr != NULL){
		printf("[%s , %s , %s , %d , %lld]->",ptr->usn,ptr->name,ptr->branch,ptr->sem,ptr->phno);
		ptr = ptr->link;
		count++;
		}
	printf("\nNODE count = %d\n",count);
	}
}
int main(){
	int n,ch,i;
	while(1){
		printf("\nSingle linked list operation\n");
		printf("1.Create a SLL of N student data by using insert front\n");
		printf("2.Display the status of SLL\n");
		printf("3.Deletion at end of SLL\n");
		printf("4.Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("Enter the number of students\n");
				scanf("%d",&n);
				for(i = 1 ; i <= n ; i++){
					printf("Enter the %d node to insert towards front of SLL\n",i);
					insert_front();
				}
				break;
			case 2:
				display();
				break;
			case 3:
				delete_end();
				break;
			case 4:
				exit(0);
			default:
				printf("Enter the valid choice \n");
				break;
		}
	}
	return 0;
}



















