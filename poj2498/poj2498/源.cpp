#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[6] = { 7 , 3, 9 ,7 , 3, 9 };
	int b[7] = { 9 ,7, 3, 9, 7, 3, 9 };
	while (n--) {
		string s;
		int index;
		int sum = 0;
		int k, guess;
		cin >> s;
		if (s.length() == 6) {
			for (int i = 0; i < s.length(); i++) {
				if (s[i] != '?') {
					sum += (s[i] - '0')*a[i];
				}
				else if (s[i] == '?') {
					index = i;
				}
			}
			k = (10 - sum % 10);
			while (k%a[index] != 0) {
				k += 10;
			}
			guess = k / a[index];
			s[index] = (guess+'0');
			cout << s << endl;
			
		}
		if (s.length() == 7) {
			for (int i = 0; i < s.length(); i++) {
				if (s[i] != '?') {
					sum += (s[i] - '0')*b[i];
				}
				else if (s[i] == '?') {
					index = i;
				}
			}
			k = (10 - sum % 10);
			while (k%b[index] != 0) {
				k += 10;
			}
			guess = k / b[index];
			s[index] = (guess + '0');
			cout << s << endl;
			/*printf("%d\n", guess);*/
		}
		
	}
	
	return 0;
}
/*
	1 3 ? 0 2 7 2
	9 7 3 9 7 3 9
	9+21+0+14+21+18
	3 3 5 6 7 8
    7 3 9 7 3 9
	21 +3? +45 +42+21+72=201+3*?
	
*/