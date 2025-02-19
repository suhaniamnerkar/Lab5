#include<stdio.h>
int main(){
     int n , temp;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n+1];
    printf("Enter the values in the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int j;
    for(int i=0;i<n-1;i++){
        int min=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=j){
                int temp;
                temp=arr[min];
                arr[min]=arr[i];
                arr[i]=temp;
            }
    } 
    for(int k=0;k<n;k++){
        printf("%d, ",arr[k]);
    }
    
    return 0;
} 
