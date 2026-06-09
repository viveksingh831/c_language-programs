/*#include<stdio.h>
int main(){
    int i;
    for(i=1;i<256;i++){
        printf("%d = %c\n",i,i);

    }
}
*/
/*#include<stdio.h>

   struct book{
    int b_id;
    float b_price;
    
   };
   int main(){
struct book b1,b2;
b1.b_id= 1;
b1.b_price=123.5;

b2.b_id= 2;
b2.b_price=81.50;



printf("book1 details:%d %f\n",b1.b_id,b1.b_price);
printf("book2 details:%d %f\n",b2.b_id,b2.b_price);

return 0;



}
*/
/*#include<stdio.h>
int a=-6;
int main(){
    printf("%d%d%d%d%d",++a,a--,--a,++a,a++);
    return 0;
}*/

// strings and palindrome
/*#include <stdio.h>
#include <string.h>

int main(){
    char a[10];
int i,l;
    printf("enter a string\n");
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l/2;i++){
        if(a[i]!=a[l-1-i]){
            printf("this is not palindrome");
            break;
        }
    }
    if(i==l/2){
        printf("this is palindrome");

    }
    return 0;

}
    */
  /*/ #include<stdio.h>
   #include<string.h>
   int main(){
    char a[11],t;
    int i,l;
    puts("enter a string");
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l/2;i++){
        t=a[i];
        a[i]=a[l-1-i];
        a[l-1-i]=t;
    }
    printf("reverse string is %s",a);
    return 0;


    }*/
#include <stdio.h>
#include <string.h>

char *strrev(char *s) {
    size_t i, j;
    char tmp;
    if (!s) return NULL;
    j = strlen(s);
    if (j == 0) return s;
    for (i = 0; i < j / 2; i++) {
        tmp = s[i];
        s[i] = s[j - 1 - i];
        s[j - 1 - i] = tmp;
    }
    return s;
}

int main(void) {
    char a[] = "vivek";

    strrev(a);
    puts(a);

    return 0;
}






   
    
    











