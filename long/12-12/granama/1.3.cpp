#include<stdio.h>
int arr[26][2];

int main(){
  int t;
  char c;
  scanf("%d",&t);
  scanf("%c",&c);
  while(t--){
    scanf("%c",&c);
    while(c!=' '){
      arr[c-'a'][0]++;
      scanf("%c",&c);
    }
    scanf("%c",&c);
    while(c != '\n'){
      arr[c-'a'][1]++;
      scanf("%c",&c);
    }
    int flag = 1;
    for(int i=0;i<26;i++)
      if(arr[i][0] != arr[i][1]){
	if(arr[i][0] == 0 || arr[i][1] == 0){
	  flag = 1;
	  break;
	}
	else
	  flag = 0;
      }
    if(flag == 1)
      printf("YES\n");
    else
      printf("NO\n");
    for(int i=0;i<26;i++)
      arr[i][0] = arr[i][1] = 0;
  }
  return 0;
}
