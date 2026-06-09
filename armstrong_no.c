#include<stdio.h>
void method1(){
    int a,b,c,d,x,y;
    printf("enter a number\n");
    scanf("%d",&a);
    x=a%10;
    b=a/10;
    c=b%10;
    d=b/10;
    y=(x*x*x)+(c*c*c)+(d*d*d);
    if(a==y){
        printf("This is Armstrong Number");

    }
    else{
        printf("This is not an Armstrong Number");
    }

}
void method2(){
    int x,y,p,sum=0;
    printf("enter a number\n");
    scanf("%d",&x);
    y=x;
    while(y!=0){
        p=y%10;
        sum=sum+(p*p*p);
        y=y/10;

        
    }
    if (x==sum){
        printf("This is an Armstrong Number");
    }
    else{
        printf("This is not an Armstrong Number");

    }
    
    }
    void method3(){
        int x,y,p,s,i;
        for(i=1;i<=1000;i++){
            x=i;
            y=x;
            s=0;
            while(y!=0){
                p=y%10;
                s=s+(p*p*p);
                y=y/10;
            }
            if(x==s){
                printf("%d ",x);
            }
        }
        printf(":- Armstrong numbers between 1 and 1000 are:");
;
        

    }
    int main(){
        method1();
        printf("\n");
        method2();
        printf("\n");
        method3();
        return 0;
        
    }
