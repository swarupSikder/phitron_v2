#include <stdio.h>
long long int fac(int n){
    if(n==0){
        return 1;
    }

    return n*fac(n-1);
    //4*fac(4-1)
    //4*3*fac(3-1)
    //4*3*2*fac(2-1)
    //4*3*2*1 -------return 1------->*fac(1-1)

}

int main(){
    int n;
    scanf("%d", &n);

    printf("%lld\n", fac(n));

    return 0;
}