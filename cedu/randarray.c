#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
int a;

int i,array[15];
for(i=0;i<15;i++){
a=rand()%80 -40;
array[i]=a;
}

printf("Array of size 15 filled with random numbers (between -40 ... 40) is:\n");
for(i=0;i<15;i++)
printf("%d,",array[i]);

return 0;
}

