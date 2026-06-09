#include<stdio.h>
void lcm(){
int x,y,i;
printf("enter two numbers\n");
scanf("%d%d",&x,&y);
for(i=x>y?x:y;i<=x*y;i++){
    if(i%x==0&&i%y==0){
        printf("the lcm of %d ",i);
        break;
    }
}

}
void hcf(){
    int x,y,i;
    printf("enter two numbers\n");
    scanf("%d%d",&x,&y);
    for(i=x<y?x:y;i>0;i--){
        if(x%i==0 && y%i==0){
            printf("the hcf of %d",i);
            break;
        }
    }

}
int main(){
    lcm();
    printf("\n");
    hcf();
    return 0;
}











