#include <cstdio>
using namespace std;

struct regintopesoa{
	char nome[50];
	int idade;
	double salario;
};

int main() {
	struct regintopesoa RP[10];
	int i;
	for(i=0;i<10;i++){
		scanf(" %[^\n]",&RP[i].nome);
		scanf("%d",&RP[i].idade);
		scanf("%lf",&RP[i].salario);
	}
	for(i=0;i<10;i++){
		printf("%s, %d, %.2lf\n",RP[i].nome,RP[i].idade,RP[i].salario);
	} 
	
	return 0;
}
