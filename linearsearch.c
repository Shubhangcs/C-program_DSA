#include<stdio.h>
void main(){
int a[1000] , i , k , n , l = 0 , pos;

printf("Enter the size of the array = ");
scanf("%d",&n);

	for(i = 1 ; i <= n ; i++){
	printf("Enter the element %d = ",i);
		scanf("%d",&a[i]);
	}
printf("Enter the key to be searched = ");
scanf("%d",&k);
	for(i = 1 ; i <= n ; i++){
		if(k == a[i]){
			pos = i;
			l++;
			break;	
		}
	}
	if(l == 0){
		printf("key not found in this array sorry (*_*) \n");
	}
	else{
		printf("key found in position - %d\n",pos);
	}
	
}
