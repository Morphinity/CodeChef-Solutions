#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<fstream>
using namespace std;
 
#define LL long long
#define MOD 1000000007LL
#define MAXN 100005
 
int N;
LL ans[MAXN];
LL val[MAXN];
 
LL powerMod(LL a,LL e)
{
    LL ret = 1;
    while(e){
        if(e & 1){
            ret *= a;
            ret %= MOD;
        }
        a *= a;
        a %= MOD;
        e = e>>1;
    }
    return ret;
}
 
LL gcd(LL a,LL b)
{
    if(b > a) return gcd(b,a);
    if(b == 0) return a;
    return gcd(b,a%b);
}
 
LL lcm(LL a,LL b)
{
    return (a/gcd(a,b))*b;
}
 
void preprocess()
{
    for(int i=0;i<MAXN;i++) val[i] = 1;
    for(int i=1;i<MAXN;i++){
        for(int j=2*i;j<MAXN;j+=i){
            val[j] = lcm(i,val[j]);
        }
    }
    ans[1] = 2;
    for(int i=2;i<MAXN-1;i++){
        ans[i] = ans[i-1] * ((i+1)/val[i+1]);
        ans[i] %= MOD;
    }
    /*
    for(int i=1;i<MAXN;i++){
        ans[i] *= powerMod(i+1,MOD-2);
        ans[i] %= MOD;
    }
    */
}
/*
LL ncr(int n,int r)
{
    return (fact[n]*((inv[r]*inv[n-r])%MOD))%MOD;
}*/
/*
int main()
{
    preprocess();
    //printf("done\n");
    int cases;
    scanf("%d", &cases);
    while(cases--){
        scanf("%d", &N);
        printf("%lld\n", ans[N]);
    }
    return 0;
}
*/
int main(){
  ofstream out("data2");
  preprocess();
  for(int i=1; i<=MAXN; i++)
    out << ans[i] << endl;
  return 0;
}
