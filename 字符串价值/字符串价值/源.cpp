#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
	map<char, int> m;
	map<char, int>::iterator it = m.begin();
	string s;
	int k;
	cin >> s;
	cin >> k;
	for (int i = 0; i < s.length(); i++) {
		char c = s[i];
		m[c]++;
	}
	int value = 0;
	while (k--) {
		int maxN = -1;
		char y;
		for (char x = 'a'; x != 'z'; x++) {
			if (m[x] > maxN) {
				y = x;
				maxN = m[x];
			}
		}
		m[y]--;
	}
	for (char x = 'a'; x != 'z'; x++) {
		if (m[x] > 0) {
			value += m[x] * m[x];
		}
	}
	printf("%d\n", value);
	return 0;
}