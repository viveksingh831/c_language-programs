#include<stdio.h>
void sum(){
    int x,p,sum=0;
    printf("enter a number\n");
    scanf("%d",&x);
    while(x!=0){
        p=x%10;
        sum=sum+p;
        x=x/10;
    }
    printf("the sum of digits is%d \n",sum);
}
void reverse(){
    int x,p,sum=0;
    printf("enter a number\n");
    scanf("%d",&x);
    while(x!=0){
        p=x%10;
        sum=sum*10+p;
        x=x/10;
    }
    printf("the reverse of number is%d \n",sum);

}
int main(){
    sum();
    reverse();
    return 0;

}