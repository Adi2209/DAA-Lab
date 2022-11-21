#include<stdio.h>
#include<stdlib.h>

void bubbleSort(int* arr,int n){
    int swapCnt=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swapCnt++;
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        printf(" ");
    }
    printf("\n");
    printf("Total No. of swaps done : %d",swapCnt);

}

int main(){

    int arr1[5]={1,2,3,4,5};
    printf("Sorted array is:-");
    printf("\n");
    bubbleSort(arr1,5);
    printf("\n");
    int arr2[5]={5,4,3,2,1};
    printf("Sorted array is:- ");
    printf("\n");
    bubbleSort(arr2,5);
    printf("\n");
    int arr3[10001];
    for(int i=0;i<=1000;i++){
        arr3[i]=rand()%50;
    }
    printf("Sorted array is:- \n");
    // printf("\n");
    bubbleSort(arr3,5);
    printf("\n");

    return 0;
}