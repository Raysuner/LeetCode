#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
struct Student
{
  string name,ID;
  int score;
};  
int main()
{
  int n,max_score = 0,min_score = 100,min_pos,max_pos;
  cin >> n;
  struct Student stu[n];
  for(int i = 0; i < n; i++)
  {
    cin>>stu[i].name>>stu[i].ID>>stu[i].score;
    if(stu[i].score > max_score)
    {
      max_score = stu[i].score;
      max_pos = i;
    }  
    if(stu[i].score  < min_score)
    {
      min_score = stu[i].score;
      min_pos = i;
    }  
  }  
  cout << stu[max_pos].name << " " << stu[max_pos].ID << endl;
  cout << stu[min_pos].name << " " << stu[min_pos].ID << endl;
  return 0;
}    
