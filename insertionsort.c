#include<stdio.h>

void insertionsort(int a[],int n){
    for(int i=1;i<n;i++){
        int curr=a[i];
        int prev=i-1;
        while(prev>=0 && a[prev]>curr){
            a[prev+1]=a[prev];
            prev--;

    }
        a[prev+1]=curr;
}
}
int main(){
    int i,n;
    printf("enter the number of elements in the array:-\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the %d elements \n",n);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]); 
} 

insertionsort(a,n);
printf("sorted array is:\n");
for(i=0;i<n;i++){
    printf("%d\n",a[i]);
}
printf("\n");
    return 0;
}  
