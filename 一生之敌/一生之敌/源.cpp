#include <stdio.h>
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
const int maxn = 1400000 + 10;
ULL f[maxn];
void init()
{
	for (int i = 0; i<maxn; i++)
	{
		f[i] = 4ull * i * i * i + 2ull * i;
	}
}

int main()
{
	init();
	int t;
	scanf("%d", &t);
	while (t--)
	{
		ULL n; scanf("%llu", &n);
		LL ans = lower_bound(f, f + maxn, n) - f;
		printf("%llu\n", f[ans]);
	}
}
