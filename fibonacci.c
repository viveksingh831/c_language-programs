#include<stdio.h>       
 int main(){
int n,a=-1,b=1,c,i;
printf("enter the number of terms:\n");
scanf("%d",&n);
printf("the fibonacci series is:\n");
for(i=0;i<n;i++){
c=a+b;
printf("%d\n",c);
    a=b;
    b=c;
}






 }     