#include<stdio.h>

int main(){

    int arr[5]={45,23,13,54,22};
    int maxEle1=0;
    for(int i=0;i<4;i++){
        if(arr[i]>maxEle1){
            maxEle1=arr[i];
        }
    }
    int maxEle2=0;
    for(int i=0;i<4;i++){
        if(arr[i]>maxEle2 && arr[i]!=maxEle1){
            maxEle2=arr[i];
        }
    }
    printf("Maximum element 1: %d",maxEle1);
    printf("\n");
    printf("Maximum element 2: %d",maxEle2);
    printf("\n");
    int sum=maxEle1+maxEle2;
    printf("The sum of the maximum elements of the array is %d",sum);
    printf("\n");

    return 0;
}