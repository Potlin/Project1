#include<iostream>
using namespace std;
class nn
{
public:
	int n;
	int na();
};
int nn :: na()
{
	int b = 1;
	for (int i = 1; i <= n; i++)
	{
		b *= i;
	}
	return b;
};
int main()
{
	nn a;
	a.n = 5;
	cout << a.na() << endl;
	return 0;
}
