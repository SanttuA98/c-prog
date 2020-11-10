#include<stdio.h>
int main(void)
{
float size,balance;
char fname[13],sname[13],gender,address[30],number[11];
int age;
 
printf("give name\n");
scanf("%s %s",fname,sname);
printf("give gender\n");
scanf(" %c",&gender);
printf("give age\n");
scanf("%d",&age);
printf("give shoe size\n");
scanf("%f",&size);
printf("give bank account balance\n");
scanf("%f",&balance);
printf("give address\n");
scanf("%s",&address);
printf("give phone number\n");
scanf("%s",number);

printf("Name:%s %s \n Gender:%c\n Address:%s\n Phone:%s\n Age:%d\n Bank balance:%.2f\n Shoe size:%.0f",fname,sname,gender,address,number,age,balance,size);

return 0;
}

