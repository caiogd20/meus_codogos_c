#include <cstdio>
using namespace std;

struct regintoaluno{
	char nome[50];
	int matricula;
	double notafinal;
};

int main() {
	struct regintoaluno RL[10];
	int i,nl=0;
	float soman=0,media,x;
	for(i=0;i<10;i++){
		scanf("%d",&RL[i].matricula);
		scanf(" %[^\n]",&RL[i].nome);
		scanf("%lf",&RL[i].notafinal);
		soman=soman+RL[i].notafinal;
	}
	for(i=0;i<10;i++){
		if(RL[i].nome[0]=='L');
			nl++;
		
	}
	printf("%d\n",nl);
	x=(float)nl/2;
	x=x*100;
	printf("%.0f%\n",x);
	media=soman/10;
	printf("%.2f\n",media);
	for(i=0;i<10;i++){
		if(RL[i].notafinal>=6.0)
			printf("%s, %.2lf",RL[i].nome,RL[i].notafinal);
		
	} 
		return 0;
}
