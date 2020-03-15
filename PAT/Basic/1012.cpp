#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
  int N;
  scanf("%d",&N);
  int a[N],A1 = 0,A2 = 0,A3 = 0,A5 = 0;
  float A4 = 0;
  vector<int> v[5];
  for(int i = 0; i < N; i++)
  {
    scanf("%d",&a[i]);
    if(a[i] < 0 && a[i] == 0)
    {
      exit(-1);
    }
    v[a[i] % 5].push_back(a[i]);
  }
  for(int j = 0; j < 5; j++)
  {
    for(unsigned int i = 0; i < v[j].size(); i++)
    {
      if(j == 0)
      {
        if(v[j][i] % 2 == 0)
        {
          A1 += v[j][i];  
        }
      }
      if(j == 1)
      {
        if(i % 2 == 0)
        {
          A2 += v[j][i];
        }
        else
        {
          A2 -= v[j][i];
        }
      }
      if(j == 2)
      {
        A3 = v[j].size();
      }
      if(j == 3)
      {
        A4 += v[j][i];
        if(v[j].size() - 1 == i)
        {
          A4 /= int(v[j].size());
        }
      }
      if(j == 4)
      {
        if(A5 < v[j][i])
          A5 = v[j][i];
      }
    }
  }
  for(int j = 0; j < 5; j++)
  {
    if(j == 0)
    {
      if(A1 == 0)
      {
        printf("N ");
      }
      else
        printf("%d ",A1);
    }
    if(j == 1)
    {
      if(v[j].size() > 0)
      {
        printf("%d ",A2);
      }
      else
        printf("N ");
    }
    if(j == 2)
    {
      if(v[j].size() > 0)
        printf("%d ",A3);
      else
        printf("N ");
    }
      
    if(j == 3)
    {
      if(v[j].size() > 0)
        printf("%.1f ",A4);
      else
        printf("N ");
    }

    if(j == 4)
    {
      if(v[j].size() > 0)
        printf("%d\n",A5);
      else
        printf("N\n");
    }
  }
  return 0;
}  
