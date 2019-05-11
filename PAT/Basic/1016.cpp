#include <iostream>
#include <string>
using namespace std;

int main()
{
	int d_a,d_b,count_a = 0, count_b = 0, sum_a = 0, sum_b = 0;
	string A,B;
	cin >> A >> d_a >> B >> d_b;
	for(size_t i = 0; i < A.size(); i++)
	{
		if(d_a == A[i] - '0')
			count_a++;
	}
	for(size_t i = 0; i < B.size(); i++)
	{
		if(d_b == B[i] - '0')
			count_b++;
	}
	for(int i = 0; i < count_a; i++)
	{
		sum_a = sum_a * 10 + d_a;
	}
	for(int i = 0; i < count_b; i++)
	{
		sum_b = sum_b * 10 + d_b;
	}		
	cout << sum_a + sum_b << endl;			
	return 0;
}	 	
	
