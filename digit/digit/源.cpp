#include <stdio.h>
int main() {
	int n = 12345;
	int a = n % 10;
	int b = n / 10 % 10;
	int c = n / 10 / 10 % 10;
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	return 0;
}