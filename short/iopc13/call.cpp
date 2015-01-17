#include<stdio.h>

int arr[100000];
int u;
bool check(int x,int y){
  int curr = x;
  while(curr!=u && curr!=y)
    curr = arr[curr];
  if(curr == y)
    return true;
  return false;
}


int main(){
  int n,q,x,y;
  scanf("%d%d%d",&n,&q,&u);
  for(int i=0; i<n-1; i++){
    scanf("%d%d",&x,&y);
    arr[y] = x;
  }
  while(q--){
    scanf("%d%d",&x,&y);
    if(check(x,y))
      printf("1\n");
    else if(check(y,x))
      printf("-1\n");1
    else
      printf("0\n");
  }
  return 0;
}
