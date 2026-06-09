#include<stdio.h>
void circle(){
    float r,area;
    printf("enter the radious of the circle\n");
    scanf("%f",&r);
    area=3.14*r*r;
    printf("the area of the circle is= %2f\n\n",area);

}
void squre(){
float side,area;
printf("enter the side of squre)\n");
scanf("%f",&side);
area=side*side;
printf("the area of the squre is=%2f\n\n",area);



}
void rectangle(){
    float length,wide,area;
    printf("enter the length and wide of the rectangle\n");
    scanf("%f%f",&length,&wide);
    area=length*wide;
    printf("the area of rectangle is=%2f\n\n",area);
}
int main(){
    circle();
    squre();
    rectangle();
return 0;
}