#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;

int main(){

  char str[300];
  while(scanf("%s",str)!=EOF){
    bool change = 0;
    while(1){
      change = 0;
      for(int i=0; i<strlen(str); i++){
	if(str[i] == 'N' && str[i+1] >= 'p' && str[i+1] <= 'z'){
	  str[i] = 'p';
	  str[i+1] = 1;
	  change = 1;
	}
	if((str[i] == 'C' || str[i] == 'D' || str[i] == 'E' || str[i] == 'I') && str[i+1] >= 'p' && str[i+1] <= 'z'){
	  int temp = i;
	  while(str[i+2] == 1)
	    i++;
	  if(str[i+2] >= 'p' && str[i+2] <= 'z'){
	    str[i+2] = 1;
	    str[temp]='p';
	    str[temp+1]=1;
	    change=1;
	  }
	}
      }
      if(!change)
	break;
    }
    bool flag = 0;
    if(str[0] >= 'p' && str[0] <= 'z');
    else  flag = 1;
    for(int i=1; i<strlen(str); i++)
      if(str[i]!=1){
	flag = 1;
	break;
      }
    if(flag == 1)
      cout << "NO" << endl;
    else
      cout << "YES" << endl;
  }
  return 0;
}
	  

	  
