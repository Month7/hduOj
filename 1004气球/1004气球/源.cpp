#include <stdio.h>
#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
	int n;
	string s;
	map<string, int> flag;
	while (scanf("%d",&n)&&n) {
		flag.clear();
		while (n--) {
			cin >> s;
			if (flag.find(s) != flag.end()) {
				flag[s]++;
			}
			else {
				flag[s] = 1;
			}
		}
			map<string, int>::iterator max = flag.begin();
			for (map<string, int>::iterator it = flag.begin(); it != flag.end(); it++) {
				if (it->second >= max->second) {
					max = it;
				}
			}
			cout << max->first << endl;
		}
	return 0;
}