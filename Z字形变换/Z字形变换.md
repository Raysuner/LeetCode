### 解题思路：

- **题目理解**

  - 根据题意N字形的排列是按字符按行来进行排列，最后我们需要输出的是按行输出

  - 我们可以建立一个数组，长度是题目提供numRows，元素类型是字符串string，按照从上到下的顺序分别为 $s_1 $，$s_2$，...  ，$s_n$，每行中都打印

    

- **算法流程**

  - 按顺序遍历s，把s中的单个字符逐行存储
  - 
  - 

- 代码

  ```cpp
  #include <iostream>
  #include <string>
  using namespace std;
  
  string convert(string s, int numbers){
      if(s.size() < 2)
  		return s;
      string rows[numbers];
      int index = 0, flag = -1;
      for(auto c : s){
  		rows[index] += c;	
  		if(index == 0 || index == numbers - 1){
  	    	flag = -flag;
  		}
  		index += flag;
      }
      string res;
      for(int i = 0; i < numbers; ++i){
  		res += rows[i];
      }
      return res;
  }
  
  int main(){
      string str;
      int nums;
      cin >> str;
      cin >> nums;
      string s = convert(str, nums);
      for(auto c : s){
  		cout << c;
      }
      cout << endl;
      return 0;
  }
  ```

  