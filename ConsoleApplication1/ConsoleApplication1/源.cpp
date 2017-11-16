#include <stdio.h>

int main() {
	int max(int a, int b);
	int a, b;
	while (true)
	{
		scanf("%d,fuck,,,%d", &a, &b);
		printf("%d\n", max(a, b));
	}
	
	return 0;
}
int max(int a, int b) {
	if (a >= b) {
		return a;
	}
	else {
		return b;
	}
}