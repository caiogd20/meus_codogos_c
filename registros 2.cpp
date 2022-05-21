#include <cstdio>
using namespace std;

struct regintopesoa{
	char nome[50];
	int idade;
	double salario;
};

int main() {
	struct regintopesoa RP[10];
	int i,somai=0,maiori=0,maiorip,menori=100,menorip;
	float mediai=0;
	for(i=0;i<10;i++){
		scanf(" %[^\n]",&RP[i].nome);
		scanf("%d",&RP[i].idade);
		scanf("%lf",&RP[i].salario);
	}
	for(i=0;i<10;i++){
		somai=somai+RP[i].idade;
	} 
	mediai=(float)somai/10;
	printf("%.2f\n",mediai);
	for(i=0;i<10;i++){
		if(maiori<RP[i].idade){
			maiori=RP[i].idade;
			maiorip=i;
		}
	} 
	printf("%s\n",RP[maiorip].nome);
	for(i=0;i<10;i++){
		if(menori>RP[i].idade){
			menori=RP[i].idade;
			menorip=i;
		}
	} 
	printf("%s",RP[menorip].nome);
	
	return 0;
}
