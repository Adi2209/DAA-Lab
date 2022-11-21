#include <stdio.h>
void solution(int a, int b){
    if(b==0){
        return 0;
    }
    solution(a, b-1);
    printf("%d x %d = %d\n", a, b, a*b);
}
int main(){
    int a, b;
    printf("enter a,b: ");
    scanf("%d %d", &a, &b);

    solution(a, b);
    
    return 0;
}
