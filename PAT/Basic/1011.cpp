#include <iostream>

using namespace std;

int main()
{
	long long A,B,C;
	int N;
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		cin >> A >> B >> C;
		if(A + B > C)
			cout << "Case #" << i + 1 << ": true" << endl;
		else
			cout << "Case #" << i + 1<< ": false" << endl;
	}
	return 0;
}
