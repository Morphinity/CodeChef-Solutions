#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int n,c,q,l,r;
    scanf("%d%d%d",&n,&c,&q);
    int curr = c;
    while(q--){
      scanf("%d%d",&l,&r);
      if(curr >= l && curr <= r)
	curr = l+r-curr;
    }
    printf("%d\n",curr);
  }
  return 0;
}
