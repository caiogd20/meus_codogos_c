#include<bits/stdc++.h>
void maiorvalor(void);

struct alunos{
	char nome[50];
	int nota;
};


 struct alunos a[10];
	int i;
int main(){
	
	int c,s;
	for(i=0;i<10;i++){
		scanf(" %[^\n]", &a[i].nome);
		scanf("%d", &a[i].nota);
	}
		maiorvalor();
		
	
		
	
	return 0;
	
		
}

void  maiorvalor(void){
	int s=0;
	float m;
	for(i=0;i<10;i++){
		s=s+a[i].nota;
	}
	
	m=(float)s/3;
	printf("a nedia da sala e: %.2f\n",m);
	for(i=0;i<10;i++){
		if(a[i].nota<6){
			printf("%s\n",a[i].nome);
		}
	}

}
