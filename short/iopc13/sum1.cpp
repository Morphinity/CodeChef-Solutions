#include<stdio.h>

long long gcd(long long a,long long b){
  if(b==0){
    return a;
  }
  return gcd(b,a%b);
}

int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    long long m,n;
    scanf("%lld%lld",&m,&n);
    long long temp = (n*(m-1))/2 + (gcd(m,n) - m)/2;
    printf("%lld\n",2*temp);
  }
  return 0;
}
