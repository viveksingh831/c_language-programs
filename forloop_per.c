#include<stdio.h>
int main(){
    int i;
    float  a[5],sum=0,per;
    printf("enter five numbers:\n");

    for(i=0;i<5;i++){
    
        scanf("%f",&a[i]);

    }
    for(i=0;i<5;i++){

    sum=sum+a[i];
}
    per=sum/500*100;
    printf("Percentage is %f" ,per);
        return 0;


}