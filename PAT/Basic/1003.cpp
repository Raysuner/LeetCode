#include <iostream>
#include <string>
using namespace std;
string judge(const string &str)
{
   int K,J,I;
   int len = str.length();
   if(len < 3)
   {
     return "NO";
   }
   else
   {
     for(K = 0; K < len ; K++)
     {
       if(str[K] != 'P' && str[K] != 'A' && str[K] != 'T')
         return "NO";
       else
       {
         if(str[K] == 'P')
           I = K;
         else if(str[K] == 'T')
         {
           J = K;
         }
       }
     }
     if((len - J - 1) == I * (J - I - 1))
       return "YES";
     else
       return "NO";  
   }
}                              
int main()
{
  int n;
  cin >> n;
  string word;
  for(int i = 0; i < n; i++)
  {
    cin >> word;
    if(judge(word) == "YES")
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }    
  }      
  return 0;
    
}  
