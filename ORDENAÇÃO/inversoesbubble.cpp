#include <bits/stdc++.h>
using namespace std;
int n, vetor[1010]; //n varia até 1010 pois a complexidade é O(n^2) e queremos que a restrição faça O(n^2) passar no tempo
int bubble_sort(){
	int ordenado = 0;
	int trocas = 0;
	while(ordenado == 0){
		ordenado = 1;
		for(int i = 1; i <= n-1; i++){
			if(vetor[i] > vetor[i+1]){
				swap(vetor[i],vetor[i+1]);
				trocas++;
				ordenado = 0;
			}
		}
	}
	return trocas;
}
int main(){
	cin>>n;
	for(int i = 1; i <= n; i++){cin>>vetor[i];}
	cout<<bubble_sort()<<"\n";
	return 0;
}
