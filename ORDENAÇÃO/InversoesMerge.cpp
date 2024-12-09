#include <bits/stdc++.h>
using namespace std; //utilizei long long int apenas para não correr riscos de dar algum erro para n muito grande (ainda inteiro de 32 bits)
int vetor[100100], aux[100100];
long long int merge_sort(int ini, int fim){ //contagem de inversões usando merge sort, O(nlogn)
	if(ini==fim){return 0;}
	long long int inversoes = merge_sort(ini , (ini+fim)/2) + merge_sort((ini+fim)/2 + 1 , fim);
	int tam = 0;
	int j = (ini+fim)/2 + 1;
	for(int i = ini; i <= (ini+fim)/2; i++){
		while(j <= fim && vetor[j] < vetor[i]){
			aux[tam] = vetor[j];
			tam++;
			j++;
			inversoes += (ini+fim)/2 - i + 1;			
		}
		aux[tam] = vetor[i];
		tam++;
	}
	while(j<=fim){
		aux[tam] = vetor[j];
		j++;
		tam++;
	}
	for(int i = ini; i <= fim; i++) {vetor[i] = aux[i - ini];}
	return inversoes;
}
int main(){
	int n;
	cin>>n;
	for(int i = 1; i <= n; i++) {cin>>vetor[i];}
	cout<<merge_sort(1,n)<<endl;
	return 0;
}
