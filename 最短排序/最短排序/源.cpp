//ûѧ���㷨����һ�������ᡣ��
//�������˻�������¥�µĽ�����������
//�ⲻ��ֱ�ӵ�c++��������֮���ԭ�����Ƚ���һ����..
//Ϊɶ�������������ء������
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