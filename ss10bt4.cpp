#include<stdio.h>
int main(){
int array[]={3,7,1,9,5};
int n= sizeof(array)/sizeof(array[0]);
for(int i=0;i<n-1;i++){
	int min=i;
	for(int j=i;j<n;j++){
		if(array[j]<array[min]){
			min=j;
		}
	}
	int temp=array[min];
	array[min]=array[i];
	array[i]=temp;		
   }
   printf("array: \n");
   for(int i=0;i<n;i++){
       printf("%d ",array[i]);
   }
   printf("\n");
   return 0;
}
