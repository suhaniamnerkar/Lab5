#include<stdio.h>
int main(){
    int n,temp;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n+1];
    printf("Enter the values in the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min,max,i;
    for (i = 0; i < n / 2; i++) {
    min = i;
    max= i;
    }
    for (int j=i+1; j<n-i; j++) {
            if (arr[j]<arr[min]) {
                min=j;
            }
            if (arr[j]>arr[max]) {
                max=j;
            }
        }

    if (min!=i){
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
        if (max==i) {
            max=min;
        }
        if (max!=n-i-1) {
            temp=arr[n-i-1];
            arr[n-i-1]=arr[max];
            arr[max]=temp;
        }
    for(int k=0;k<n;k++){
        printf("%d, ",arr[k]);
    }
    
    return 0;
} 
