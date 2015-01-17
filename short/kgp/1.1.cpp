#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
  char D[100010];
  int t;
  char ch;
  scanf("%d",&t);
  cin.get();
  while(t--){
    int ct = 0;
    scanf("%c",&ch);
    while(ch!='\n'){
      D[ct++] = ch;
      scanf("%c",&ch);
    }
    int flag = 0;
    int i;
    for(int j=ct-2;j>=0;j--){
      ch = D[j+1];
      for(i = j; i>=0; i--){
	if(ch > D[i]){
	  char temp = D[i];
	  D[i] = ch;
	  D[j+1] = temp;
	  flag = 1;
	  break;
	}
      }
      if(flag == 1)
	break;
    }
    if(flag == 1){
      for(int i=0;i<ct;i++)
	printf("%c",D[i]);
      cout << endl;
    }
    else
      cout << -1 << endl;
  }
  return 0;
}
