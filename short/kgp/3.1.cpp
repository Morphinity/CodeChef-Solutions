#include<iostream>
#include<algorithm>
using namespace std;

int n,k;

int proc(int* arr,int left,int right){
  int mid = (left + right)/2;
  if(mid == left)
    return 1;
  else{
    int t1 = proc(arr,left,mid);
    int t2 = proc(arr,mid+1,right);
    
    int t = 1;
    int temp = k;
    int i=mid+1;
    int j = mid;
    int flag = 0;
    int cre;
    while(i < right){
      if(flag == 0){
	while(arr[i+1] == arr[i]){
	  i++;
	  t++;
	}
      }
      if(flag == 1){
	
      if(flag == 1){
	if(t*(arr[i]-arr[j]) <= temp){

      while(temp > 0 && j>=left){
	if(temp >= arr[i] - arr[j]){
	  t++;
	  temp -= (arr[i] - arr[j]);
	}
	else
	  break;
	j--;
      }
      if(temp <= 0)
	break;
      i++;
	   j++;
      flag = 1;
    }
    
    

int main(){
  cin >> n  >> k;

  int arr[n];
  for(int i=0; i<n; i++)
    cin >> arr[i];

  sort(a+0,a+n);

  cout << proc(a,l,r) << endl;
  return 0;
}
