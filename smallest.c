#include <stdio.h>
int main() {
    int n,i,num,smallest;
    printf("how many numbers do you want to enter? ");
    scanf("%d", &n);
    printf("enter %d numbers:\n ", n);
    for(i=0;i<n;i++) {
        scanf("%d", &num);
        if(i==0) {
            smallest = num;
        } else {
            if(num<smallest) {
                smallest = num;
            }
        }
        }
    
    printf("the smallest number is: %d", smallest);
    return 0;
}