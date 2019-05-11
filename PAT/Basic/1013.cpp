#include <vector>
#include <iostream>
const int maxsize = 1000001;
using namespace std;

void find_Prime(vector<int> &v,vector<int> &ve)
{
	for(int i = 2; i < maxsize; i++)
	{
		if(v[i] == 1)
		{
			ve.push_back(i);
			for(int j = 2 * i; j < maxsize; j += i)
			{
				v[j] = 0;
			}
		}
	}
}
int main()
{
	int N,M,count = 0;
	cin >> M >> N;
	vector<int> v(maxsize,1),ve(0);
	find_Prime(v,ve);
	for(int i = M - 1; i < N && i < int(ve.size()); i++)
	{
		count++;
		cout << ve[i];
		if(count % 10 != 0 && i != N - 1) 
			cout << " ";
		else
			cout << endl;
	}
	return 0;
}
