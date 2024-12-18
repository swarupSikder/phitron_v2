#include <stdio.h>
void fun(int x, int *y){
    x= x*10;
    (*y)= (*y)*10;
}

int main(){
    int a=10, b=200;
    fun(a, &b);

    printf("%d %d\n", a, b);

    return 0;
}