#include<stdio.h>
int main(){
    int n[8],a[10][8];
    int i,j;
    printf("enter 8 number that is you want to print table\n");
    for(j=0;j<8;j++){
    scanf("%d",&n[j]);
    }
for(i=0;i<10;i++){
    for(j=0;j<8;j++){
        a[i][j]=n[j]*(i+1);
    }
}
printf("👉🏻see your table:--\n");
for(i=0;i<10;i++){
    for(j=0;j<8;j++){
        printf("💕%d\t",a[i][j]);
    }
    printf("\n");
}
return 0;


}