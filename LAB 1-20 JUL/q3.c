#include<stdio.h>
#include<stdlib.h>

void selectionSort(int* arr,int n){

    int i,j,mini;
    int swapCnt=0;
    for(int i=0;i<n-1;i++){
        mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[mini]){
                mini=j;
            }
            int temp=arr[mini];
            arr[mini]=arr[i];
            arr[i]=arr[mini];
            swapCnt++;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        printf(" ");
    }
    printf("\n");
    printf("No. of Swaps done: %d",swapCnt);
}

int main(){

    int arr1[5]={1,2,3,4,5};
    printf("Sorted array is:- ");
    printf("\n");
    selectionSort(arr1,5);
    printf("\n");
    int arr2[5]={5,4,3,2,1};
    printf("Sorted array is:- ");
    printf("\n");
    selectionSort(arr2,5);
    printf("\n");
    int arr3[10001];
    for(int i=0;i<=1000;i++){
        arr3[i]=rand()%50;
    }
    printf("Sorted array is:- ");
    printf("\n");
    selectionSort(arr3,5);
    printf("\n");

    return 0;
}