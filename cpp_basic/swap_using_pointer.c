#include <stdio.h>
void swapFun(int *p, int *q){
    int temp= *p;
    *p= *q;
    *q= temp;
}

int main(){
    int x,y;
    scanf("%d %d", &x, &y);

    swapFun(&x,&y);

    printf("%d %d\n", x, y);

    return 0;
}