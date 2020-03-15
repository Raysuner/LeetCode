#include <iostream>
#include <string>
using namespace std;
int main()
{
  string n;
  cin >> n;
  if(n.size() != 0)
  {
    if(n.size() == 3)
  	{
    for(int i = 0; i < n[0] - '0' ; i++)
    {
      cout << "B";
    }
    for(int i = 0; i < n[1] - '0' ; i++)
    {
      cout << "S";
    }
    for(int i = 1 ; i <= n[2] - '0' ; i++)
    {
      cout << i;
    }
  }
  if(n.size() == 2)
  {
    for(int i = 0; i < n[0] - '0' ; i++)
    {
      cout << "S";
    }        
    for(int i = 1 ; i <= n[1] - '0' ; i++)
    {
      cout << i;
    }
  }
  if(n.size() == 1)
  {
    for(int i = 1 ; i <= n[0] - '0' ; i++)
    {
      cout << i;
    }
  }
  }
  return 0;
}  
