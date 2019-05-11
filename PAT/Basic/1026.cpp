#include <cstdio>
#include <iostream>
using namespace std;
const int CLK_TCK = 100;
struct Time
{
	int hour,min,sec;
};	
int main()
{
	int c1,c2;
	struct Time time; 
	cin >> c1 >> c2;
	time.sec = ((c2 - c1) + 50) / CLK_TCK;
	time.hour = time.sec / 3600.0;
	time.min = (time.sec % 3600) / 60;
	time.sec = time.sec % 60;
	printf("%02d:%02d:%02d\n",time.hour,time.min,time.sec);
	return 0;
}	
		
	
