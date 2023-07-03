#include<stdio.h>
void main(){
	int i,n;
	int a[n];
	int *ptr;
	printf("enter the array of array:");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++){
		printf("a[%d]",i);
		scanf("%d",&a[i]);
			}
			ptr=&a[n-1];
			printf("reversed array elements:\n");
			for(i=0;i<n;i++)
			printf("%d\n",*ptr--);
}
