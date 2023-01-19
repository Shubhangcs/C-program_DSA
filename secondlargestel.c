//second largest element
#include<stdio.h>
void main(){
int a[10000],n,i,j,temp;
printf("Enter the array size\n");
scanf("%d",&n);
printf("Enter the array elements\n");
for(i = 0 ; i<n ; i++){
scanf("%d",&a[i]);
}
for(i = 0 ; i < n ; i++){
	for(j = 0 ; j < n ; j++){
	if(a[j] > a[i]){
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
	}
	}
	
}
printf("The second largest element in array is : %d\n",a[n-2]);
}
