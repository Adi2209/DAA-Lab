#include<stdio.h>
int solution(int a, int b){
    if(b==0){
        return 0;
    }
    return a + solution(a, b-1);

}
int main(){
    int a, b;
    printf("enter a,b: ");
    scanf("%d %d", &a, &b);

    printf("%d", solution(a, b));
    return 0;
} 