#include<stdio.h>
#include<stdlib.h>
//wacp to generate random 1000 numbers
int main(){
    int arr[1000];
    for(int i=0;i<=1000;i++){
        printf("%d",rand()%50);
        printf(" ");
    }
    return 0;
}