#include <bits/stdc++.h>
using namespace std;
int n, vetor[1010];
//implementação do bubble sort feita por mim, o código tem complexidade O(n^2) pois, no bubble sort, sempre percorremos os n elementos do vetor, n vezes, sendo O(n*n) = O(n^2)
//neste algoritmo, diferentemente do selection sort, preferi implementar a função, mas não há nenhum motivo específico
void bubble_sort(){
  int ordenado = 0; //poderia definir ordenado como bool também e atribuir false, mas preferi deixar assim
  while(ordenado == 0){
    ordenado = 1;
    for(int i = 1; i <= n-1; i++){
      if(vetor[i] > vetor[i+1]){
        swap(vetor[i],vetor[i+1]);
        ordenado = 0;
      }
    }
  }
}
int main(){
  cin>>n;
  for(int i = 1; i <= n; i++){cin>>vetor[i];}
  bubble_sort();
  for(int i = 1; i <= n; i++){cout<<vetor[i]<<" ";}
  cout<<"\n";
  return 0;
}
