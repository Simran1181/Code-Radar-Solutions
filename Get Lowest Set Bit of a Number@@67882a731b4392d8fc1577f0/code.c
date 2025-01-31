#include <stdio.h>


int main() {
    int a;
    int count = 0;
    scanf("%d",&a);
    while(a!=0){
        if(a&1==1)
        break;
        else{
            a = a>>1;
            count++;
        }
    }
    return 0;
}