#include<bits/stdc++.h>
void salariov(float,float);
float salariot; 

int main(){
	
	float salariof,vendas;
	scanf("%f", &vendas);
	scanf("%f", &salariof);
	salariov(vendas,salariof);
	printf("%.2f\n",salariot);	
}

void salariov(float v,float sf){
	float comicao;
	comicao=0.15*v;
	salariot=comicao+sf;
}
