#include<stdio.h>
#include<time.h>

double linearSearch(int arr[], int n, int ele){
    clock_t start, end;

    start = clock();
    for(int i = 0; i < n; i++){
        if(arr[i] == ele){
            break;
        }
    }
    end = clock();

    double timeTaken = ((double)(end - start))/CLOCKS_PER_SEC;

    return timeTaken;
}

double binarySearch(int arr[], int n, int ele){
    int low = 0;
    int high = n - 1;

    clock_t start, end;

    start = clock();
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == ele){
            break;
        }
        else if(arr[mid] > ele){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    end = clock();
    double timeTaken = ((double)(end - start))/CLOCKS_PER_SEC;

    return timeTaken;
}

int main(){

    int arr[] = {1,2,3,4,5};

    int ele;
    printf("Enter the target: ");
    scanf("%d", &ele);

    double linearSearchTime = linearSearch(arr, 5, ele);
    double binarySearchTime = binarySearch(arr, 5, ele);

    if(linearSearchTime < binarySearchTime){
        printf("Linear Search is faster");
    }
    // else if(linearSearchTime==binarySearchTime){
    //     printf("Both are same");
    // }
    else{
        printf("Binary search is faster");
    }

    return 0;
}