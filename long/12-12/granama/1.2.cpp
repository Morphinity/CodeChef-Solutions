#include<iostream>
#include<string>
using namespace std;

int arr[26][2];

int main(){
  int t;
  string s1,s2;
  cin >> t;
  while(t--){
    cin >> s1 >> s2;
    for(unsigned int i = 0; i < s1.length(); i++)
      arr[s1[i] - 'a'][0]++;
    for(unsigned int i = 0; i < s2.length(); i++)
      arr[s2[i] - 'a'][1]++;
    bool flag = 1;
    for(int i=0; i<26; i++){
      if(arr[i][0] != arr[i][1]){
	if(arr[i][0] == 0 || arr[i][1] == 0){
	  flag = 1;
	  break;
	}
	else
	  flag = 0;
      }
    }
    if(flag == 1)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
    for(int i=0;i<26;i++)
      arr[i][0] = arr[i][1] = 0;
  }
  return 0;
}
