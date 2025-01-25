#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int r;
    printf("Enter radius: ");
    scanf("%d", &r);
    float Area = 3.14*r*r;
    printf("area is: %.2f", Area);
    Return 0;
}    
    