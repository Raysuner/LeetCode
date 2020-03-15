#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int N,maxpos,num,score,max = 0;
	cin >> N;
	int a[N];
	memset(a,0,sizeof(a));
	for(int i = 0; i < N; i++)
	{
		cin >> num >> score;
		a[num - 1] += score;
	}
	for(int i = 0; i < N; i++)
	{
		if(max < a[i])
		{
			max = a[i];
			maxpos = i;
		}
	}		
	cout << maxpos + 1 << " " << a[maxpos] << endl;		
	return 0;
}	
		

