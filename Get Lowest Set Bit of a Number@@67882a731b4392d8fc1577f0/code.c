#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    while(a!=0){
        if(a&1==1)
        break;
        else{
            a=a<<1;
            a++;
        }
    }
    return 0;
}