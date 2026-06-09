#include<stdio.h>
int main(){
    int x[5][5],y[5][5],z[5][5],i,j,row,col;
    printf("addition of two matrix\n");
    printf("enter the row\n");
    scanf("%d",&row);
        printf("enter the col \n ");
        scanf("%d",&col);
        printf("enter the frist matrix\n");
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                scanf("%d",&x[i][j]);

            }
            printf("\n");
        }

        printf("enter the secound matrix\n");
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                scanf("%d",&y[i][j]);
            
            }
            printf("\n");

        }
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                z[i][j]=x[i][j]+y[i][j];

            }
        }
        printf("the addition of two matrix is \n");
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                printf("%d",z[i][j]);
            }
                printf("\n");
                
            }
            return 0;
            


}
