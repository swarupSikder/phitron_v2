#include <stdio.h>
void printDigit(int n){
    if(n==0){
        return;
    }
    int digit= n%10; 
    printDigit(n/10);
    printf("%d ", digit);
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        if(n==0){
            printf("0");
        }

        printDigit(n);
        printf("\n");
    }

    return 0;
}