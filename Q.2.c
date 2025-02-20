#include <stdio.h>
#include <stdlib.h>

void merge(int arr[],int left,int mid,int right) {
    int n1=mid-left+1;  
    int n2=right-mid;     

    int arr1= (int*)malloc(n1*sizeof(int));
    int arr2= (int*)malloc(n2*sizeof(int));

    for(int i=0;i<n1;i++) {
        arr1[i]=arr[left+i];
    }
    for(int j=0;j<n2;j++) {
        arr2[j]=arr[mid+1+j];
    }

    int i=0,j=0,k=left;
    while (i<n1 && j<n2) {
        if (arr1[i]<=arr2[j]) {
            arr[k]=arr1[i];
            i++;
        } else {
            arr[k]=arr2[j];
            j++;
        }
        k++;
    }
    while (i<n1) {
        arr[k]=arr1[i];
        i++;
        k++;
    }

    while (j<n2) {
        arr[k]=arr2[j];
        j++;
        k++;
    }
    free(arr1);
    free(arr2);
}

void mergeSort(int arr[], int n) {
    for (int a=1; a<n;a =2*a) {
        for (int left=0; left<n-1; left+=2*a) {
            int mid = (left + a- 1 < n - 1) ? (left + a - 1) : (n - 1);
            int right = ((left + 2 * a - 1) < (n - 1)) ? (left + 2 * a - 1) : (n - 1);

            merge(arr, left, mid, right);
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {32,89,54,67,20,25,32};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    mergeSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
