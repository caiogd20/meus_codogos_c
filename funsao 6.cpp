#include<bits/stdc++.h>
void maiorvalor(void);
void menorvalor(void);

 int val[5];

int main(){
	
	int i;
	for(i=0;i<5;i++){
		scanf("%d", &val[i]);
	}
	
	maiorvalor();
	menorvalor();
	return 0;
	
		
}

void  maiorvalor(void){
	int mv=0,i;
	for(i=0;i<5;i++){
		if(val[i]>mv){
			mv=val[i];
		}

	}
	printf("Maior = %d\n",mv);
}
void  menorvalor(void){
	int mv=1000,i;
	for(i=0;i<5;i++){
		if(val[i]<mv){
			mv=val[i];
		}

	}
	printf("Menor = %d\n",mv);
}
