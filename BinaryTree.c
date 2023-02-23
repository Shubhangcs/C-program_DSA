#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;
	struct node *rlink , *llink;
	
}*root = NULL , *temp , *cur , *ptr;

int ch,flag,key;

void insert(){
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter the data \n");
	scanf("%d",&temp->data);
	temp->llink = NULL;
	temp->rlink = NULL;
	if(root == NULL)
		root = temp;
	else{
		ptr = root;
		while(ptr != NULL){
			cur = ptr;
			if(temp->data > cur->data)
				ptr = ptr->rlink;
			else
				ptr = ptr->llink;
		}
		if(temp->data > cur->data)
			cur->rlink = temp;
		else
			cur->llink = temp;
	}
}
void preorder(struct node *root){
	if(root == NULL)
		return;
	printf("%d\t",root->data);
	preorder(root->llink);
	preorder(root->rlink);
}
void inorder(struct node *root){
	if(root == NULL)
		return;
	inorder(root->llink);
	printf("%d\t",root->data);
	inorder(root->rlink);

}

void postorder(struct node *root){
	if(root == NULL)
		return;
	postorder(root->llink);
	postorder(root->rlink);
	printf("%d\t",root->data);

}

void main(){
	while(1){
		printf("\nMenu\n1.Create BST \n2.Traverse \n3.Exit \nEnter your choice \n");
		scanf("%d",&ch);
			switch(ch){
				case 1:
					insert();
					break;
				case 2:
					if(root == NULL)
						printf("Tree is empty \n");
					else{
						printf("Preorder traversal : \n");
						preorder(root);
						printf("\n inorder traversal \n");
						inorder(root);
						printf("\nPostorder traversal \n");
						postorder(root);
					
					}
					break;
				case 3:
					exit(0);
				default:
					printf("Invalid \n");
			}
