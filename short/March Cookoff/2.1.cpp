#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

const long long MOD = 1000000007;
const long long inv = 280000002;

long long exp(long long base,long long n){
  bool flag = 1;
  long long z = 1;
  while(n>0){
    if(n%2==1)
      z = (z*base)%MOD;      
    n = n>>1;
    base = (base*base)%MOD;
  }
  return z;
}

int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    long int n;
    scanf("%ld",&n);
    long long ans;
    if(n%2 == 0){
      ans = exp(26,n/2)-1;
      ans = (ans*inv)%MOD;
      ans *= 52;
      ans %= MOD;
    }
    else{
      ans = exp(26,n/2) - 1;
      ans = (ans*inv)%MOD;
      ans *= 52;
      ans %= MOD;
      ans += exp(26,n/2+1);
      ans = ans%MOD;
    }
    printf("%lld\n",ans);
  }
  return 0;
}
