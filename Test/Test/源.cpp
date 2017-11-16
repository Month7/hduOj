#include <stdio.h>
int main() {
	int buy = 0;
	int money = 2;
	do {
		buy++;
		printf("buy=%d\n", buy);
		money--;
		if (money == 0)
			break;
	} while (buy);
	return 0;
}