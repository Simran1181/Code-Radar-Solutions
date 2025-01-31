#include <stdio.h>

int main() {
    int a;
    int prime=1;
    scanf("%d",&a);
    if(a==0 || a==1)
    else{
        for(int i=2;i<a;i++){
            if(a%i==0){
                prime=0;
            }

        }
    }
        if(prime)
        printf("Prime");
        else{
            printf("Not Prime");
        }
    return 0;
}
