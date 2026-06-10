#include<stdio.h>
int main(){
    int i,j,p=65;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j<=i){
                
                printf("%c",p);
               
            }
            else{
                printf(" ");
                
            }
        }
        printf("\n");
        p++;
    }
    return 0;

}