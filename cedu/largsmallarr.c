#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
int a;
int i,array[20];
int big, small;
for(i=0;i<20;i++){
a=rand()%80 -40;
array[i]=a;
}
printf("Array of size 20 filled with random numbers (between -40 ... 40) is:\n");
for(i=0;i<20;i++)
printf("%d,",array[i]);

big=array[0];

for(i=1;i<20;i++){
	if(big < array[i]){
		big = array[i];
	}
}
printf("\nThe largest number is: %d", big);

small=array[0];

for(i=1;i<20;i++){
	if(small > array[i]){
		small=array[i];
	}
}
printf("\nThe smallest number is: %d", small);
return 0;
}

