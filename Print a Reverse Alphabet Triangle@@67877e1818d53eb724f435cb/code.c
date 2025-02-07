#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    char a='A';
    for(int i=N-1;i>=0;i--){
        a='A';
        for(int j=1;j<=i;j++){
            printf("%c "a);
            a++;
        }
        printf("\n");
    }
    return 0;
}