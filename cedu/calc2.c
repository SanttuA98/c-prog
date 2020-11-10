 #include <stdio.h>
 int main(void)
 {

 float height,widht;
 float perimeter,area;

 printf("give height\n");
 scanf("%f",&height);

 printf("give width\n");
 scanf("%f", &width);

 area = height*width;
 perimeter = 2*height+2*width;

 printf("A rectangle, which height is %.2f cm and width is %.2f cm\n  " ,height, width );
 printf("the perimeter is equal to %.2f cm \nthe area is equal to %.2f square cm",perimeter, area);
 return 0;
}
