#include<stdio.h>
#include<stdlib.h>
int choice,i,n;
struct node{
	int id;
	char name[30];
	char branch[30];
	char area[30];
	struct node *rlink;
	struct node *llink;
	
};
struct node *start1 = NULL , *start2= NULL , *temp, *ptr;

void insert_front(){
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter \n \t Staff ID = ");
	scanf("%d",&temp->id);
	printf("\t Name = ");
	scanf("%s",temp->name);
	printf("\t Branch = ");
	scanf("%s",temp->branch);
	printf("\t Area = ");
	scanf("%s",temp->area);
	temp->rlink = NULL;
	temp->rlink = NULL;
	
	if(start1 == NULL)
		start1 = temp;
	else{
		temp->rlink = start1;
		start1->llink = temp;
		start1 = temp;
	}	
}
void inserted(){
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter \n \t Staff ID = ");
	scanf("%d",&temp->id);
	printf("\t Name = ");
	scanf("%s",temp->name);
	printf("\t Branch = ");
	scanf("%s",temp->branch);
	printf("\t Area = ");
	scanf("%s",temp->area);
		temp->rlink = NULL;
		temp->llink = NULL;
		if(start2 == NULL)
			start2 = temp;
		else{
			ptr = start2;
			while(ptr->rlink != NULL)
			ptr = ptr->rlink;
			ptr->rlink = temp;
			temp->llink = ptr;
		}
}

void display(){
	int count=0;
		if(start1 == NULL && start2 == NULL)
			printf("list is empty \n");
		else{
			ptr = start1;
			while(ptr->rlink!=NULL)
			ptr = ptr->rlink;
			ptr->rlink = start2;
			ptr = start1;
			
		while(ptr != NULL){
			printf("\n%d\t%s\t%s\t%s\n",ptr->id,ptr->name,ptr->branch,ptr->area);
			ptr = ptr->rlink;
			count++;
		}
		}
		printf("\nNumber of nodes are %d\n",count);
	}

int main(){
	while(1){
	printf("1.create stack of DLL \n2.create quee of DLL \n3.Display \n4.Exit\n");
	printf("Enter your choice = ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("Enter the number of professors = ");
			scanf("%d",&n);
			for(i = 0 ; i < n ; i++)
			insert_front();
			break;
		case 2:
			printf("Enter the number of professors = ");
			scanf("%d",&n);
			for(i = 0 ; i < n ; i++)
			inserted();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
	
	}
	
	}
return 0;
}
	
