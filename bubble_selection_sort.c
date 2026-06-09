#include<stdio.h>
void Bubblesort(){
    int i,j,n,temp,a[100];
    printf("enter the number of elements:-\n");
    scanf("%d",&n);
    printf("enter the %d  elements:-\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp; 
            }
            }
        }
        printf("after the sorting:-\n");
        for(i=0;i<n;i++){
        printf("%d ",a[i]);
        }
    }
    void selectionsort(){
        int i,j,n,temp,min,a[100];
        printf("enter the number of elements:-\n"); 
        scanf("%d",&n);
        printf("enter the %d elements:-\n",n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++){
           for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            }
           }
        printf("after the sorting\n");
        for(i=0;i<n;i++){
            printf("%d ",a[i]);
        }
    }
int main(){
    Bubblesort();
    printf("\n");
    selectionsort(); 
    return 0;
}





 





