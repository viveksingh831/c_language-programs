#include<stdio.h>
#include<stdlib.h>

void fun1(int argc,char *argv[]){
    int i;
    for(i=1;i<argc;i++){
        printf("%s \n",argv[i]);

    }
}
void fun2(int argc,char *argv[]){
    int i,sum=0;
    for(i=1;i<argc;i++){
        sum+=atoi(argv[i]);
    }
    printf("sum:%d \n",sum);

}
void fun3(int argc,char *argv[]){
    int i,mul=1;
    for(i=1;i<argc;i++){
        mul*=atoi(argv[i]);

    }
    printf("mul:%d \n",mul);
   
}
int main(int argc,char *argv[]){
    fun1(argc,argv);
    fun2(argc,argv);
    fun3(argc,argv);
    return 0;
} 
       