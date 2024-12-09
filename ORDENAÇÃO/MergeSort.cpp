#include <bits/stdc++.h> //código feito por Kauan Henrique Franchini Ladeira na IDE do Usaco Guide
using namespace std;
int n, vetor[1100], aux[1100];
//implementação do merge sort, O(nlogn), não vou explicar o por que pois já expliquei no README
void merge_sort(int ini, int fim){
	if(ini==fim) return;
	merge_sort(ini,(ini+fim)/2);
	merge_sort((ini+fim)/2+1,fim);
	int tam = 0;
	int j = (ini+fim)/2+1;
	for(int i = ini; i <= (ini+fim)/2; i++){
		while(j <= fim && vetor[j] < vetor[i]){
			aux[tam] = vetor[j];
			tam++;
			j++;
		}
		aux[tam] = vetor[i];
		tam++;
	}
	while(j <= fim){
		aux[tam] = vetor[j];
		j++;
		tam++;
	}
	for(int i = ini; i <= fim; i++) {vetor[i] = aux[i-ini];}
}
int main(){
	cin>>n;
	for(int i = 1; i <= n; i++) {cin>>vetor[i];}
	merge_sort(1,n);
	for(int i = 1; i <= n; i++) {cout<<vetor[i]<<" ";}
	cout<<endl;
	return 0;
}
