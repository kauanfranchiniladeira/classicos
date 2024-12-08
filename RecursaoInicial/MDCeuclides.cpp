#include <bits/stdc++.h>
using namespace std;
int mdc(int x , int y){
  if(x < y){swap(x,y);}
  if(x%y == 0){return y;}
  return mdc(y , x%y);
}
int main(){
  int m,n;
  cin>>m>>n;
  cout<<mdc(m,n)<<"\n";
  return 0;
}
