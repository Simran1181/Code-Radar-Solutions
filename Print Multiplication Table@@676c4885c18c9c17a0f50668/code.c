#include <stdio.h>


int main() {
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        printf("%d * %d = %d",i,N,i*N);
    }
    printf("\n");
    return 0;
}