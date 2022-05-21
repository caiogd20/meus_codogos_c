#include <bits/stdc++.h>
using namespace std;
#define MAX 3
int pilha1[MAX],pilha2[MAX],ordenacao_lista[MAX];



void ordenacao_InsertionSort(int v[]){
int i, j;
int aux;
	for (i = 1; i < MAX; i++){
	aux = v[i];
	j = i- 1;
		while ((j>=0) && (aux < v[j])){
		v[j+1] = v[j];
		j--;
		}
		v[j+1] = aux;
	}
}


int troca_de_pilha(int y1){
	for(int cont=0;cont<MAX;cont++){
		ordenacao_lista[cont]=pilha1[y1];
		y1--;
		
	}
	ordenacao_InsertionSort(ordenacao_lista);
	
	
	for(int cont=0;cont<MAX;cont++){
		pilha2[cont]=ordenacao_lista[cont];
		y1++;
	}
	
}

int inserir(int *x1,int *y1){// *y1=posicao da pilha // *x1 valor //
	if(*y1<MAX){
		cout<<"informacao salvo!!!\n";
		pilha1[*y1]=*x1;
	}else{
		cout<<"Pilha Cheia\n";
	}	
}

int imprimir(int ycopia){
	
	
	if(pilha2[0]==NULL){
	printf("Valor do topo %d\n",pilha1[ycopia]);
	for(int cont=0;cont<MAX;cont++){
		printf("Valor salvo na posicao %d = %d\n",ycopia,pilha1[ycopia]);
	ycopia--;	
	}
	}else{
		cout<<"\n";
		printf("Valor do topo %d\n",pilha2[ycopia]);
		for(int cont=0;cont<MAX;cont++){
			cout<<"Depois da alteracao\n";
		printf("Valor salvo na posicao %d = %d\n",ycopia,pilha2[ycopia]);
	ycopia--;	
	}
	}
}

int main() {
	int x,y=0,*yp,*xp;
	yp=&y;
	xp=&y;
	cout<<"Digite o 3 valores para adicionar na pilha:\n";
	for(int cont=0;cont<MAX;cont++){
		printf("Digite um valor para a posicao %d = ",cont);
		scanf("%d",&x);
		inserir(&x,&y);
		y++;
	}
	y--;
	imprimir(y);
	troca_de_pilha(y);
	
	imprimir(y);
	//imprimir();
	
    return 0;
}
