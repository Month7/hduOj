#include"iostream"
using namespace std;
int main()
{
	double v, d;
	while (cin >> v >> d)
	{
		int l = v / d;    
		if (l != v / d) l++; 

		double sum = 0;
		int t = 0;   
		int i = 1;
		while (sum<l) 
		{
			sum += i;
			t++;
			i++;
		}
		cout << t + l - 1 << endl;
	}
	return 0;
}