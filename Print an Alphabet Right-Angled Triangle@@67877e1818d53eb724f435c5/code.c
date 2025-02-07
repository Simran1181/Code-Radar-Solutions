#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    char a='A';
    for(int i=1;i<=N;i++){
        for(j=1;j<=i;j++){
            printf("%d",a);
        }
        printf("\n");
    }
    return 0;
}