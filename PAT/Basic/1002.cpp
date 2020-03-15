#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
  int sum=0;
  vector<int> ve;
  string str[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
  string n;
  cin>>n;
  for(auto s : n)
  {
    sum += s - '0';
  }
  if(sum == 0)
  {
    cout << "ling";
  }
  else  
  {
    while(sum != 0)
    {
      int m;
      m = sum % 10;
      ve.push_back(m);
      sum = sum / 10;
    }  
  }
  for(auto it=ve.rbegin();it!=ve.rend()-1;it++)
  {
    cout << str[(*it)] << " ";
  }
  cout << str[ve[0]] << endl;  
  return 0;
}        
