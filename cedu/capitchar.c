#include <stdio.h>

int main(void) {
	char a;
	printf("Give me a letter: ");
	scanf("%c", &a);

	if(a >= 'A' && a <= 'Z')
		printf("Letter %c is a Capital letter", a);
	else
		printf("Letter %c is not a Capital letter", a);

	return 0;
}