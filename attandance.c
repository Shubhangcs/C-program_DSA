#include<stdio.h>
#include<stdlib.h>
int a[100],i,n,lin=0,lout=0,cn,passwd,cnn;
char name[1000];
char usn[1000];
void main(){
int choice;
passwd = 2003;
printf("Welcome to the DS lab \n");
printf("1.Work in lab \n");
printf("2.Take componants from lab or Return a componant \n");
printf("3.ADMIN PANNEL \n");
printf("4.LOGOUT");
printf("Enter your choice = ");
scanf("%d",&choice);
	switch(choice){
		case 1:
			workinlab();
			break;
		case 2:
			componants();
			break;
}
}
void workinlab(){
	printf("Enter the number of people\n");
	scanf("%d",&n);
	printf("####### LOGIN ####### \n");
	for(i = 1 ; i <= n ; i++){
		printf("Person %d. \n",i);
		printf("Name = ");
		scanf("%s",name[i]);
		printf("USN = ");
		scanf("%s",usn[i]);
		lin++;
	}
	printf("!!!! LOGIN Succsessfull !!!!\n");
}
void componants(){
int o = 0;
	printf("1.Take componants \n");
	printf("2.Return componants \n");
	scanf("%d",&o);
	if(o == 1){
	printf("Enter lab password \n");
	scanf("%d",&passwd);
	printf("\n COMPONANTS LIST \n");
	printf("1.KEYBOARD\n");
	printf("2.MOUSE\n");
	printf("3.MONITOR\n");
	printf("4.CPU\n");
	printf("5.PROJECTOR\n");
	printf("Enter the componant number = ");
	scanf("%d",&cnn);
	printf("Enter the count of componants \n");
	scanf("%d",&cn);
	for(i = 1 ; i <= cn ; i++){
		printf("Your componant id is = %d",i);
	}
	}
	else{
		printf("");
	}
}
