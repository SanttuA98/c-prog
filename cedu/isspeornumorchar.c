#include <stdio.h>

int main(void) {
	char a;
	printf("Give me a letter: ");
	scanf("%c", &a);

	if(a >= 'A' && a <= 'Z')
		printf("Letter %c is a Capital letter\n", a);
	else if (a >= 'a' && a <= 'z')
		printf("Letter %c is a small letter\n", a);
	else if (a >= '0' && a <= '9')
		printf("It's a number\n");
	else
		printf("It's a special character");

	return 0;
}