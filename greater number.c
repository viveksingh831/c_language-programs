#include<stdio.h>
int main(){
    int x,y,z;
    printf("enter three numbers:\n");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y && x>z){
        printf("%d is a greater number",x);

    }

    else if (y>x && y>z){
        printf("%d is a ngreater number", y);

    }
    else{

    
        printf("%d is a greater number",z);


    }

    }