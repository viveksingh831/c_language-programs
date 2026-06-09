#include <stdio.h>
int checknumber(){
    int x;
    printf("enter a number");
    scanf("%d", &x);
    if(x>0){
        printf("this is a positive number");
    }
    else if (x<0)
    {
        printf("this is a negative number");
            
    }

    else{
        printf("neigther positive nor negative its called zero");
    }
}

int main(){
checknumber();
return 0;
}