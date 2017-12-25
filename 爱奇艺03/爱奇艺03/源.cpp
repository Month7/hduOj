#include <stdio.h>
#include <string>
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
string translate(int m, int n) {
	char s[10000];
	sprintf(s, "%d", m);  //Êý×Ö×ª×Ö·û´®
	char newS[100];
	strcpy(newS, s);
	for (int i = 0; i < n-1; i++) {
		strcat(s,newS);
	}
	return s;
}
int main() {
	int x1, k1, x2, k2;
	scanf("%d %d %d %d", &x1, &k1, &x2, &k2);
	string s1 = translate(x1, k1);
	string s2 = translate(x2, k2);
	int lenA = s1.length();
	int lenB = s2.length();
	if (lenA > lenB) {
		printf("Greater\n");
	}
	if (lenA < lenB) {
		printf("Less\n");
	}
	if (lenA == lenB) {
		int flag = 1;
		for (int i = 0; i < lenA; i++) {
			if (s1[i] != s2[i]) {
				flag = 0;
				break;
			}
		}
		if (flag == 1) {
			printf("Equal\n");
		}
		if (flag == 0) {
			for (int i = 0; i < lenA; i++) {
				if (s1[i] > s2[i]) {
					printf("Greater\n");
					break;
				}
				if (s1[i] < s2[i]) {
					printf("Less\n");
					break;
				}
			}
		}	
	}
	return 0;
}