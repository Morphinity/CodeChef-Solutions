#include<iostream>
#include<cstring>
#include<stdio.h>
#include<vector>
#include<cmath>
using namespace std;

vector<bool> prime(10000001);
vector<int> pos(10000001);
void init(){
  int ct = 0;
  prime[1] = 1;
  for(int i=2; i<=10000; i++){
    if(!prime[i]){
      pos[i] = ct+1;
      ct++;
      for(int j = i*i; j<=10000000; j += i)
	prime[j] = 1;
    }
  }
}

int main(){
  init();
  //cout << "done" << endl;
  int t;
  int n;
  cin >> t;
  while(t--){
    scanf("%d",&n);
    if(!prime[n])
      cout << pos[n] << endl;
    else
      cout << -1 << endl;
  }

  return 0;
}
