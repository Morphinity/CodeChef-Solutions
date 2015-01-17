#include<stdio.h>
using namespace std;

int main(){
  int t;
  long long sum;
  scanf("%d",&t);
  while(t--){
    sum = 0;
    long int m,n;
    scanf("%ld%ld",&m,&n);
    int l;
    int terms_ct = 1;
    long int q = n/m;
    int r = n%m;
    if(r == 0)
      sum = q*m*(m-1)/2;
    else{
      long int temp= m;
      long int ct = 0;
      while(terms_ct < temp){   // terminal condition check
	l = m/r;
	if(terms_ct+l < temp)
	  sum += q*(l*terms_ct + (l*(l-1))/2) + ct*l;
	else{
	  int a = temp - terms_ct;
	  sum += ct*(a) + q*(((a)*(a-1))/2 + terms_ct*(a));
	  break;
	}
	ct++;
	terms_ct += l;
	m = temp+m%r;
      }
    }
    printf("%lld\n",2*sum);
  }
  return 0;
}
