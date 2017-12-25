#include <stdio.h>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
int main() {
	int n, a, w;
	vector<int> m;
	cin >> n;
	int maxN = -1;
	while (n--) {
		cin >> a;
		m.clear();
		while (a) {
			
			m.push_back(a % 10);
			a /= 10;
		}
		int num = 0;
		int j = 1;
		for (int i = 0; i < m.size(); i++) {
			for (int j = i + 1; j < m.size(); j++) {
				if (m[i] < m[j]) {
					int temp = m[i];
					m[i] = m[j];
					m[j] = temp;
				}
			}
		}
		
		for (int i = 0; i < m.size(); i++) {

			num += m[i]*j;
			
			j *= 10;
		}
		if (num > maxN) {
			maxN = num;
			
		}
	}
	printf("%d\n", maxN);
	return 0;
}
//   120%10= 0    021
//   120/10=12
//   12%10=2
//   12/10=1
//   1%10=1
//   1/10=0;