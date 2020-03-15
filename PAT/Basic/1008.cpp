#include <iostream>
using namespace std;

int main()
{
	int N,M,temp = 0;
	cin >> N >> M;
	int a[N];
	cout << "输入数组a的值" << endl;
	for(int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	if(N >=  0 && N <= 100 && M >= 0)
	{
		for(int i = 0; i <=  M; i++)
		{
			temp = a[N - 1];
			for(int j = N - 1; j > 0; j--)
			{
				a[j] = a[j - 1];
			}
			a[0] = temp;
		}
		for(int i = 1; i < N; i++)
		{
			cout << a[i] << " ";
		}
		cout << a[0] << endl;
	}
	return 0;
}
