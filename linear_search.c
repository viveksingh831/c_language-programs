#include<stdio.h>
void linear_search(int a[], int search, int r){
    int i,k=0;
    for(i=0;i<r;i++){
        if(a[i]==search){
            printf("👉🏻number found at position %d✌️\n",i+1);
            k++;
            break;
        }
    }

if(k==0){
    printf(":- number is not found 😩\n");
}
printf("\n\n");
}




void binary_search(int a[], int search, int r){
    int i,m,l=0;
    while(l<=r){
        m=(l+r)/2;
        if(a[m]==search){
            printf("number is found at position %d💕✌️\n",m+1);
            break;
        }
        else if(a[m]>search){
            r=m-1;
        }
        else{
            l=m+1;
        }

        }
        if(l>r){
            printf("number is not found😭\n");
        }

        }



    

int main(){
    int a[100],i,r,n,search,l=0;
    printf("👉🏻enter the range of the array for linear search:-\n");
    scanf("%d",&r);
    printf("👉🏻enter the %d number:-\n",r);
    for(i=0;i<r;i++){
        scanf("%d",&a[i]);
    
    }
    printf("👉🏻enter the number that you want to search:-\n");
    scanf("%d",&search);
    linear_search(a,search,r);




    printf("👉🏻enter the range of the array for binary search:-\n");
    scanf("%d",&r);
    
    printf("👉🏻enter the %d number:-\n",r);
    n=r-1;
    for(i=0;i<r;i++){
        scanf("%d",&a[i]);

    }
    printf("👉🏻enter the number that you want to search:-\n");
    scanf("%d",&search);

    binary_search(a,search,n);
   
    return 0;
}