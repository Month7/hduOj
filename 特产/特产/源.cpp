#include <stdio.h>
int main() {
	int T, N, M;
	scanf("%d", &T);
	while (T--) {
		scanf("%d %d", &N, &M);
		int res = M - N;
		printf("%d\n", res);
	}
	return 0;
}