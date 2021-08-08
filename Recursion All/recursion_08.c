#include<stdio.h>
#include <cmath>

void prime(int n, int i) {
    if(n!=1 && i==1){
        printf("prime");
        return;
    }
    if (n % i==0){
        printf("not prime");
        return ;
    }
    prime(n,i-1);

}

int main() {
    int n;
    scanf("%d", &n);
    prime(n,(int)pow(n,0.5));
}