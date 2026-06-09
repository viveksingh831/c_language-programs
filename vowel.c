#include<stdio.h>
int main(){
char ch;
printf("enter any one letter\n");
scanf (" %c", &ch);
if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
    printf("%c is a vowel letter",ch);
}
else
{
    printf("%c is a consonant letter",ch);
}
return 0;
}
