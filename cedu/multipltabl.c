#include<stdio.h>
int main(void)

{
int num;
int i;
printf("Give me number\n");
scanf("%d",&num);
printf("The multiplication table for %d is:\n",num);
for(i=0 ; i<10 ; i++)
{

printf("%2d * %d = %d\n",i,num,num * i);
}

return 0;
}
