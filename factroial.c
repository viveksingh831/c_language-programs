#include<stdio.h>
int fac(int n){
    if(n==1){
        return 1;
    }else{
        return n*fac(n-1);
    }
}
int sum(int a){

    if(a==1){
        return 1;
    }
    else{
        return a+sum(a-1);
    }
}

int main(){

 int n,i;
    long long fact=1;
printf("enter a number:\n");
scanf("%d",&n);
for(i=1;i<=n;i++){
    fact=fact*i;
}
printf("factorial of %d is %lld\n", n, fact);


int r,num,p,res;

printf("enter a number\n");
scanf("%d",&num);
r=fac(num);
printf("fac is %d\n",r);
printf("enter anumber\n");

scanf("%d",&p);
res=sum(p);
printf("sum is %d",res);
return 0;
}






