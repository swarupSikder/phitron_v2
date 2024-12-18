//author:   SwarupSikder
//Judge:    hackerRank
//Problem:  4

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
long long int sumFun(int *a, int n, long long int sum, int i){
    if(i==n){
        return sum;
    }

    return sumFun(a, n, (long long int) sum+a[i], i+1);
}

int main(){
    //---------------//
    //     input     //
    //---------------//
    int n;
    scanf("%d", &n);

    int i=0;
    int *a = (int *) malloc(1*sizeof(int));
    
    while(1){
        scanf("%d", &a[i]);
        i++;
        int *temp = a;
        a = (int *) realloc(a, (i+1)*sizeof(int));
        if(a==NULL){
            a=temp;
        }

        if(i==n){
            break;
        }
    }
    

    //----------------//
    //     output     //
    //----------------//
    printf("%lld\n", abs(sumFun(a,n,0,0)));


    free(a);
    return 0;
}