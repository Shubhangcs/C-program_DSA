#include<stdio.h>
#include<stdlib.h>
struct employ{
	char empId[10];
	struct name{
		char FN[20];
		char MN[20];
		char LN[20];
	}n;
	struct adres{
		char area[30];
		char city[30];
		char state[30];
	}a;
	int age;
	long sal;
	char designation[30];
}s[100];
void main(){
int n,i;
	printf("Enter the number of employee = ");
	scanf("%d",&n);
		for(i = 0 ; i < n ; i++){
			printf("Enter the staff id = ");
			scanf("%s",s[i].empId);
			printf("Enter the first name = ");
			scanf("%s",s[i].n.FN);
			printf("Enter the middle name = ");
			scanf("%s",s[i].n.MN);
			printf("Enter the last name = ");
			scanf("%s",s[i].n.LN);
			printf("Enter your adress\n");
			printf("Area = ");
			scanf("%s",s[i].a.area);
			printf("City = ");
			scanf("%s",s[i].a.city);
			printf("State = ");
			scanf("%s",s[i].a.state);
			printf("Enter your age = ");
			scanf("%d",&s[i].age);
			printf("Enter your salery = ");
			scanf("%ld",&s[i].sal);
			printf("Enter your designation  = ");
			scanf("%s",s[i].designation);
		}
		for(i = 0 ; i < n ; i++){
			printf("\nEmployee no %d\n",i+1);
			printf("\nEmploy'e ID  = %s \n",s[i].empId);
			printf("Employ'e Name  = %s %s %s \n",s[i].n.FN,s[i].n.MN,s[i].n.LN);
			printf("Employ'e Adress  = %s , %s , %s. \n",s[i].a.area,s[i].a.city,s[i].a.state);
			printf("Employ'e AGE  = %d \n",s[i].age);
			printf("Employ'e SALERY  = %ld \n",s[i].sal);
			printf("Employ'e DESIGNATION = %s \n",s[i].designation);
			
		}
}
