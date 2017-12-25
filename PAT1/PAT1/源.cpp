#include <stdio.h>
int main() {
	int a[4] = { 1,2,3,4 };
	int *ptr = (int *)(&a + 1);
	printf("%p\n", a);
	printf("%p\n", &a+1);
	printf("%p\n", &a);
	printf("%p\n", &a[4]);
	printf("%p\n", &a);
	printf("%p\n", ptr);
	printf("%d\n", *(ptr - 2));
	return 0;
}