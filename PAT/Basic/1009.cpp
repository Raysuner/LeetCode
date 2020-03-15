#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string s = " ",ss = "";
	string str;
	vector<string> ve(0);
	getline(cin,str);
	for(int i = 0; i < static_cast<int>(str.size()); i++)
	{
		if(str[i] == ' ')
		{
			ve.push_back(ss);
			ss = "";
		}
		else
		{
			s[0] = str[i];
			ss += s;
		}
	}
	ve.push_back(ss);
	vector<string> S(ve.size()," ");
	for(int i = 0; i < static_cast<int>(ve.size()); i++)
	{
		S[i] = ve[static_cast<int>(ve.size()) - 1 - i];
	}
	for(int i = 0; i < static_cast<int>(ve.size()) - 1; i++)
	{
		cout << S[i] << " ";
	}
	cout << S[static_cast<int>(ve.size()) - 1] << endl;
	return 0;
}
