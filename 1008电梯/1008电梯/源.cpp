#include <stdio.h>
int main() {
	int n;
	int array[101];
	while (scanf("%d", &n)&&n) {
		int totalTime = 0;
		int now = 0;
		int newNow = 0;
		for (int i = 0; i<n; i++) {
			scanf("%d", &array[i]);
			if (array[i] > now) {
				totalTime += (array[i] - now) * 6;
				now = array[i];
			}
			if (array[i] < now) {
				totalTime += (now - array[i]) * 4;
				now = array[i];
			}
		}
		totalTime += 5 * n;
		if(n!=0)
		printf("%d\n", totalTime);
	}
	return 0;
}