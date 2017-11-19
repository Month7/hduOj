#include <stdio.h>
int main() {
	int flag = 168;
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a < flag) {
		printf("CRASH %d\n", a);
	}
	if (b < flag) {
		printf("CRASH %d\n", b);
	}
	if (c < flag) {
		printf("CRASH %d\n", c);
	}
	else {
		printf("NO CARSH\n");
	}
	return 0;
}