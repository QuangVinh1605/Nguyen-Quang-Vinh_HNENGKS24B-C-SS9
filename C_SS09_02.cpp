#include<stdio.h>
int main(){
	int arr[100];
	int n;
	printf("moi ban nhap vao so phan tu cua mang: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("moi ban nhap vao phan tu thu %d cua mang: ",i+1);
		scanf("%d",&arr[i]); 
	}
	 printf("\n");
	 int position;
	 printf("moi ban nhap vao vi tri phan tu ma ban can xoa: ");
	 scanf("%d",&position);
	 for(int i=position-1;i<n-1;i++){
	 	arr[i]=arr[i+1];
	 }n--;
	 printf("mang moi la: ");
	 for(int i=0;i<n;i++){
	 
	 printf("%d",arr[i]);
}
printf("\n"); 
} 
