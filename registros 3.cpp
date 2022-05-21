#include <cstdio>
using namespace std;

struct regintoaluno{
	char nome[50];
	int matricula;
	double nota1,nota2,notafinal;
};

int main() {
	struct regintoaluno RL[25];
	int i;
	float mediai=0;
	for(i=0;i<25;i++){
		scanf("%d",&RL[i].matricula);
		scanf(" %[^\n]",&RL[i].nome);
		scanf("%lf",&RL[i].nota1);
		scanf("%lf",&RL[i].nota2);
	}
	for(i=0;i<25;i++){
		RL[i].notafinal = RL[i].nota1 + RL[i].nota2; 
	}
	for(i=0;i<25;i++){
		printf("%d, %s, %.2lf, %.2lf, %.2lf,",RL[i].matricula,RL[i].nome,RL[i].nota1,RL[i].nota2,RL[i].notafinal);
		if(RL[i].notafinal>=6.0)
			printf(" Aprovado\n");
		else 
			printf(" Reprovado\n");
	} 
		return 0;
}
