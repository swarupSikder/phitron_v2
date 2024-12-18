#include <stdio.h>
int sumFun(int *p, int *q){
    return (*p)+(*q);
}

int main(){
    int x,y;
    scanf("%d %d", &x, &y);

    printf("%d\n", sumFun(&x,&y));

    return 0;
}