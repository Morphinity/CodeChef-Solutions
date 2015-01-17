#include<iostream>
#include<fstream>
using namespace std;

const long int MOD = 1000000007;
const int MAX = 100005;
long long ans[MAX];
long long lcmarr[MAX];

long long gcd(long long a,long long b){
  if(b==0)
    return a;
  return gcd(b,a%b);
}

long long lcm(long long a,long long b){
  return (a/gcd(a,b))*b;
}

void process(){
  for(int i=1; i<MAX; i++)
    ans[i] = 1;
  lcmarr[1] = 1;
  for(int i=2;i<MAX; i++)
    lcmarr[i] = lcm(lcmarr[i-1],i);
  /*
  for(int i=2;i<MAX; i++){
    ans[i] = lcmarr[i+1]/(i+1);
    ans[i] %= MOD;
  }
  */
}

int main(){
  int t,n;
  ofstream out("data1");
  process();
  for(int i=1; i<=MAX; i++)
    out << lcmarr[i] << endl;
  return 0;
}
