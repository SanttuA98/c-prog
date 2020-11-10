#include<stdio.h>
int main(void)
{
int a,b;

printf("Give number 1\n");
scanf("%d",&a);
printf("Give number 2\n");
scanf("%d",&b);
if(a > b)
printf("User did input numbers %d and %d and the bigger one is %d",a,b,a);
else
printf("User did input numbers %d and %d and the bigger one is %d",a,b,b);



return 0;
}
