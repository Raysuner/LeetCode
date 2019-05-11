#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	string N;
	vector<int> ve;
	int a[100000],count = 0;
	a[0] = a[1] = 0;
	cin >> N;
	int n = stoi(N);
	for(int i = 2; i <= n; i++)
		{
			a[i] = i;
		}	
	if(n >= 5 && n < 100000)
	{
		
		for(int i = 2; i < sqrt(double(n)); i++)
		{
			if(a[i])
			{
				for(int j = 2 * i; j <= n; j = j + i)
				{
					a[j] = 0;
				}
			}
		}
		for(int k = 2; k <= n; k++)
		{
			if(a[k])
			{
				ve.push_back(a[k]);
			}
		}
		for(auto it = ve.begin() + 1; it < ve.end(); it++)
		{
			if(*(it) - *(it - 1) == 2)
			{
				count++;
			}
		}
		
	}
	cout << count << endl;
	return 0;
}					
			
