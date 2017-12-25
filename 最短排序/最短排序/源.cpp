//没学过算法，第一次做不会。。
//交卷完了回来看了楼下的解析，惊呆了
//这不就直接调c++的排序函数之后和原函数比较了一下嘛..
//为啥这样就是最少呢。。求解
#include<stdio.h>
#include<algorithm>
using namespace std;
int main() {
	int a[100], b[100];
	int n;
	int result = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		b[i] = a[i];
	}
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		if (a[i] != b[i]) {
			result++;
		}
	}
	printf("%d\n", result);
	return 0;
}