#include <stdio.h>

int main() {
    int a,i;
    scanf("%d",&a);
    if(a==0 || a==1){
        prime=0;
    }
    else{
        for(i=2;i<a;i++){
            if(a%i==0){
                prime=0;
            }
        }
    }
    if(prime){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}