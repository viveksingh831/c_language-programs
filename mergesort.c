#include <stdio.h>
void merge(int a[], int st, int mid, int end){
    int temp[end-st+1];
    int i=st,j=mid+1,k=0;
    while(i<=mid &&j<=end){
        if(a[i]<a[j]){
            temp[k++]=a[i];
            i++;
        }
        else{
            temp[k++]=a[j];
            j++;
        }
    }
    while(i<=mid){
        temp[k++]=a[i];
        i++;
    }
    while(j<=end){
        temp[k++]=a[j];
        j++;
    }

        
    
    for(int idx=0;idx<k;idx++){
        a[st+idx]=temp[idx];
    }
    

}

void mergesort(int a[],int st,int end){
    if(st<end){
        int mid=st+(end-st)/2;
        mergesort(a,st,mid);
        mergesort(a,mid+1,end);
        merge(a,st,mid,end);
    }
}



int main(){
    int i,a[]={38,27,43,3,9,82,10};
    //printf("enter the number of elements in the array:-\n");
    //scanf("%d",&n);
//int a[n];
// printf("enter the %d elements \n",n);
//for(i=0;i<n;i++){
  // scanf("%d",&a[i]);   
    int n=sizeof(a)/sizeof(a[0]);// 

    mergesort(a,0,n-1);
    printf("the sorted array is:-\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}