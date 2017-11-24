#include <stdio.h>
int main() {
	float sum = 0;
	float result;
	for (int i = 0; i < 12; i++) {
		float a;
		scanf("%f", &a);
		sum += a;
	}
	result = sum / 12;
	printf("$%.2f\n", result);
	return 0;
}