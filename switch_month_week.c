#include<stdio.h>
int main(){
int main,choice;
    printf("1:-for months:\n");
    printf("2:- for weeks\n");
    printf("enter your choice:\n");
    scanf("%d,",&main);
    switch(main){
        case 1:
        printf("enter he month number (1-12)\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf(" you slect january");
            break;
            case 2:
            printf("you slect february");
            break;
            case 3:
            printf("you slect march");
            break;
            case 4:
            printf("you slect april");
            break;
            case 5:
            printf("you slect may");
            break;
            case 6:
            printf("you slect june");
            break;
            case 7:
            printf("you slect  july");
            break;
            case 8:
            printf("you slect august");
            break;
            case 9:
            printf("you slect september");
            break;
            case 10:
            printf("you slect october");
            break;
                case 11:
                printf("you slect november");
                break;
                case 12:
                printf("you slect december");
                break;
                default:
                printf("invalid month number");

        }
        break;
        case 2:
        printf("enter the week number (1-7)\n");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("you slect sundy");
            break;
            case 2:
            printf("you slect monday");
            break;
            case 3:
            printf("you slect tuesday");
            break;
            case 4:
            printf("you slect wesnesday");
            break;
            case 5:
            printf("you slect thursday");
            break;
            case 6:
            printf("you slect friday");
            break;
            case 7:
            printf("you slect saturday");
            break;
            default:
            printf("invalid week number");



        }
        break;
        default:
        printf("invalid choice");
        return 0;
        


    }
}
        

    
    
    











    
