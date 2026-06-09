#include <stdio.h>
int vivek(){
    int eggs;
    printf("is eggs available?\n");
    printf("enter 1 for yes and 0 for no and other for anything\n");
    scanf("%d", &eggs);
    if(eggs==1){
        printf("today cook eggs and rice");
    }
    else if(eggs==0) 
    {
        printf("today cook chicken and rice");
    }
    else{
        printf("today cook anything");
    }
}
    int main(){
        vivek();
        return 0;
    }
    

