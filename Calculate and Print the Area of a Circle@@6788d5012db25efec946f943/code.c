#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int r;
    printf("Enter radius: ");
    scanf("%d", &r);
    float area = 3.14*r*r;
    printf("area is: %f", area);

    printf("%s", welcome());
    return 0;
}