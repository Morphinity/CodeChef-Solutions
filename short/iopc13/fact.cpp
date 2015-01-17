#include<stdio.h>

const long int l = 1000000007;

long int gcd(long int a,long int b){
  if(b==0)
    return a;
  return gcd(b,a%b);
}

long int lcm(long int a,long int b){
  long long t = (a/gcd(a,b))*b;
  if(t>=l)
    t %= l;
  return t;
}

int main(){
  int t;
  int n;
  scanf("%d",&t);
  while(t--){
    scanf("%d",&n);
    long int ans = 1;
    long int prev = 1;
    long long temp;
    for(int i=1; i<=n/2; i++){
      temp = ((n-i+1)*prev)/(i);
      if(temp >= l)
	temp %= l;
      if(temp%ans!=0 && ans%temp!=0)
	ans = lcm(ans,temp);
      else
	ans = temp > ans ? temp : ans;;
      prev = temp;
    }
    printf("%ld\n",ans);
  }
  return 0;
}
