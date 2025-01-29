#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a, &b);
    printf("%d",a^(1<<b)); //(^)operator bcz it converts 1^1 to 0
    return 0;
}