#include <bits/stdc++.h>
using namespace std;
#define INF 2000000000
int n, menor, ind_menor, vetor[1010], lista[1010]; //valor máximo de n é 1000 neste exemplo, o que não ta muito fora da realidade num exercício desse
//implementação do selection sort, algoritmo de ordenação de O(n^2), pois no pior caso, que é quando o vetor ta em ordem decrescente, para cada impressão percorremos os n elementos do vetor, e fazemos isso sempre n vezes, sendo O(n*n) = O(n^2)
//neste código, feito por mim, implemento já o selection sort dentro da main, e não crio uma função void para fazer isso, mas é totalmente possível criar essa função void
int main(){
  cin>>n;
  for(int i = 1; i <= n; i++){cin>>vetor[i];}
  for(int i = 1; i <= n; i++){
    menor =  INF;
    for(int j = 1; j <= n; j++){
      if(lista[j] == 0 && vetor[j] < menor){
        menor = vetor[j];
        ind_menor = j;
      }
    }
    cout<<menor<<" ";
    lista[ind_menor] = 1;
  }
  cout<<"\n";
  return 0;
}
