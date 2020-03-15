#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
bool cmp(int a,int b)
{
  return a > b;
}
int main()
{
  int k;
  cin >> k;
  int a[k];
  vector<int> ve,v;
  for(int i = 0 ; i < k ; i++)
  {
    cin >> a[i];
  }
  for(int i = 0 ; i < k ; i++)
  {
    int n = a[i];
    while(n != 1)
    {
      if(n % 2 == 0)
        {
            n = n / 2;
          }
      else
      {
        n = (3 * n + 1) / 2;
      }
      ve.push_back(n);
    }
  }
  for(auto it = 0 ; it < k ; it++)
  {
    int count = 0;
    for(auto it1 = ve.begin() ; it1 != ve.end() ; it1++)
    {
      if(a[it] != *it1)
      {
        count++;
        continue;
      }
    }
    if(count == ve.size())
    {
      v.push_back(a[it]);
    }
  }
  if(v.size() != 0)
  {
    sort(v.begin() , v.end() , cmp);
    for(auto i = v.begin() ; i != v.end() -1 ; i++)
    {
      cout << *i << " ";
    }
    cout << *(v.end() - 1) ;
  }
  return 0;
}
