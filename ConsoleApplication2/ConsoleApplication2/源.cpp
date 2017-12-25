#include<iostream>
using namespace std;
int main()
{
	int n, num, p = 0, i, m, j = 1;
	while (cin >> n&&n>1)
	{
		if (p)
			cout << endl;
		cout << "Case " << j++ << "." << endl;
		num = 0; m = n;
		for (i = 2; i <= m; i++)
		{
			num = 0;
			/*if (n%i == 0)
			{
				num++;
				n = n / i;
				
				i = i - 1;
			}*/
			while (n%i == 0) {
				n = n / i;
				num++;
			}
			if (num != 0)
			{
				cout << i << " " << num << " ";
				
			}
		}
		cout << endl;
		p = 1;
	}
	return 0;
}