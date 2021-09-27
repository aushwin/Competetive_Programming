#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int m, n, k;
		cin >> m >> n >> k; //m dedaline , n episodess , k minutes
		if (n * k < m)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}
