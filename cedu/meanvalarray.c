#include<stdio.h>
int main(void)
{
int array[10];
int i, value, sum = 0;
float average;
printf("Enter 10 numbers\n");

for(i = 0; i < 10; ++i) {
         scanf("%d",&value);
        array[i] = value;
        sum = sum + value;
}
average = (float)sum/10;
printf("\nThe mean value of numbers [ ");
for(i = 0; i < 10 - 1; i++)
    printf("%d, ", array[i]);

printf("%d ] is %.1f\n",array[9], average);

return 0;
}

