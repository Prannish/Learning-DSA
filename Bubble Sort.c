#include<stdio.h>

void bubble_sort(int arr[], int n){
int i,j;
for(i=0; i<n-1; i++){
    for(j=0; j<n-i-1; j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
}

int main(){
int n;
printf("Enter the array size: \n");
scanf("%d",&n);
int arr[n];
printf("Enter elements of array: \n");
for(int i=0; i<n; i++)
scanf("%d",&arr[i]);
printf("\n");

bubble_sort(arr,n);

printf("sorted array: \n");
for(int i=0; i<n; i++)
    printf("%d \n",arr[i]);
printf("\n");

return 0;
}
