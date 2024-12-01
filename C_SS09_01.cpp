#include<stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	int n=5;
	printf("mang ban dau la:");
	for(int i=0;i<n;i++){
		printf("%d\n",&arr[i]); 
	} 
	printf("\n");
	int position,value;
	printf("moi ban nhap vao vi tri ma ban can sua: ");
	scanf("%d",&position);
	printf("moi ban nhap vao gia tri moi: ");
	scanf("%d",&value);
	arr[position-1] =value;
	printf("mang moi la: \n");
	for(int i=0;i<n;i++){
		printf("%d\n",arr[i]); 
	} 
	 
 
} 
