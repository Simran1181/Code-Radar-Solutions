#include <stdio.h>

int main() {
    int a,count,i;
    scanf("%d",&a);
    count = 0;
    b = a>>31;
    while((a&b)==0 && count<32){
        a = a <<1;
        count++;
    }
    printf("%d",count);
    return 0;
}