#include<stdio.h>
#include<stdlib.h>


struct node{
int info;
struct node *link;
};

typedef struct node *NODE;

NODE getnode(){
NODE x;
x=(NODE)malloc(sizeof(struct node));
	if(x == NULL){
		printf("Out of memory\n");
		exit(0);
	}
	return x;
}
NODE insert_font(int item , NODE first){
	NODE temp = getnode();
	
	temp -> info = item;
	temp -> link = first;
	return temp;
}

NODE insert_font1(int item , NODE second){
	NODE temp = getnode();
	temp -> info = item;
	temp -> link = second;
	return temp;
}
NODE delete_font(NODE first){
	NODE temp;
	if(first == NULL){
		printf("List is empty\n");
		return NULL;
	}
	temp = first;
	temp = temp -> link;
	printf("Item deleted = %d",first->info);
	printf("front node is deleted successfully\n");
	free(first);
	return temp;
}
void display(NODE first){
	NODE cur;
	if(first == NULL){
	printf("List is empty");
	return;
	}
	printf("The contents of the single linked list are\n");
	cur = first;
	while(cur != NULL){
	printf("%d\t",cur -> info);
	cur = cur -> link;
	}
	printf("\n");
}
NODE search(int key , NODE first){
	NODE cur;
	if(first == NULL)
	return NULL;
	cur = first;
while(cur != NULL){
	if(key == cur -> info)break;
	cur=cur -> link;
	}
	if(cur == NULL){
		printf("Search unsuccessfull\n");
		return 0;
		}
		printf("Search successfull");
}
NODE contact(NODE first , NODE second){
	NODE cur;
	cur = first;
	while(cur -> link != NULL){
	cur = cur -> link;
	}
	cur -> link = second;
	return first;
}
void main(){
	NODE first,second;
	int ch,item,key,i,n;
	first = NULL;
	second = NULL;
	while(1){
	printf("\n############# SINGLE LINKED LIST OPERATION MENU##############\n");
	printf("1.Insert front\t3.Delete front\n");
	printf("2.Display\t4.Linear search\n");
	printf("5.Concatination of list\n");
	printf("Enter your choice = ");
	scanf("%d",&ch);
	switch(ch){
	case 1:
		printf("Enter the NODE to insert towards front of SLL\n");
		printf("Enter the item to be inserted\n");
		scanf("%d",&item);
		first = insert_font(item,first);
		break;
	case 2:
		display(first);
		break;
	case 3:
		first = delete_font(first);
		break;
	case 4:
		printf("The item to be searched\n");
		scanf("%d",&key);
		search(key , first);
		break;
	case 5:
		printf("Concatination of two list\n");
		printf("Create first list\n");
		printf("Enter the numbsr of nodes\n");
		scanf("%d",&n);
		for(i=1 ; i<n ; i++){
		printf("Enter the item to be inserted\n");
		scanf("%d",&item);
		first = insert_font(item , first);
		}
		printf("Create second list\n");
		printf("Enter the numbsr of nodes\n");
		scanf("%d",&n);
		for(i=1 ; i<n ; i++){
		printf("Enter the item to be inserted\n");
		scanf("%d",&item);
		second = insert_font1(item , second);
		}
		first = contact(first , second);
		display(first);
		break;
		
		default:
			exit(0);
	}
	}
}
