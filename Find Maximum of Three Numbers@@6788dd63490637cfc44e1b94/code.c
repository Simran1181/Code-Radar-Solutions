#include <stdio.h>


int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    a = a>b && a = a>c;
    b = b>a && b = b>c;
    c = c>a && c = c>b;
    printf("%d", a, b, c);
    return 0;
}