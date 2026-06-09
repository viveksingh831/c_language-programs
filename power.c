#include<stdio.h>
int main(){
    int x,y,i,s=1;
    printf("enter a cofficient number\n");
    scanf("%d",&x);
    printf("enter a power of the cofficient\n");
    scanf("%d",&y);
    for(i=1;i<=y;i++){

        s=s*x;

    }
    printf("the power of x is %d",s);
        return 0;
    }
    
    