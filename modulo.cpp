#include <bits/stdc++.h>
using namespace std;
int modulo(int x){
  if(x >= 0){return x;}
  else{return -x;}
}
int main(){
  int n;
  cin>>n;
  cout<<modulo(n)<<"\n";
  return 0;
}
