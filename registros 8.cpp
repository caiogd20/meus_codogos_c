#include <cstdio>
using namespace std;

struct livros{
	char doacao, obra[50], altor[50], editora[50];
	int cod, area;
	
};

int main() {
	struct livros exa[1500], hum[1500], bio[1500];
	int i, op, e=0, h=0, b=0, c, cd;
	bool flag = false;
	do{
		printf("1- cadasrar\n");
		printf("2- consultar\n");
		printf("3- sair\n");
		scanf("%d", &op);
		switch(op){
			case 1:
				printf("codigo de area:1 Exatas; 2  Hmanas; 3 Biologicas ");
				scanf("%d", &c);
				if(c==1){
					exa[e].area=c;
					printf("Codigo de catlogacao:\n");
					scanf("%d", &exa[e].cod);
					printf("doacao: (s/n)\n");
					scanf("%s", &exa[e].doacao);
					printf("obra:\n");
					scanf(" %[^\n]", &exa[e].obra);
					printf("altor:\n");
					scanf(" %[^\n]", &exa[e].altor);
					printf("editora:\n");
					scanf(" %[^\n]", &exa[e].editora);
					e++;
				} 
				else if(c==2){
					hum[e].area=c;
					printf("Codigo de catlogacao:\n");
					scanf("%d", &hum[e].cod);
					printf("doacao: (s/n)\n");
					scanf("%s", &hum[e].doacao);
					printf("obra:\n");
					scanf(" %[^\n]", &hum[e].obra);
					printf("altor:\n");
					scanf(" %[^\n]", &hum[e].altor);
					printf("editora:\n");
					scanf(" %[^\n]", &hum[e].editora);
					h++;
				}
				else if(c==3){
					bio[e].area=c;
					printf("Codigo de catlogacao:\n");
					scanf("%d", &bio[e].cod);
					printf("doacao: (s/n)\n");
					scanf("%s", &bio[e].doacao);
					printf("obra:\n");
					scanf(" %[^\n]", &bio[e].obra);
					printf("altor:\n");
					scanf(" %[^\n]", &bio[e].altor);
					printf("editora:\n");
					scanf(" %[^\n]", &bio[e].editora);
					b++;
				}
			break;
			case 2:
				printf("codigo de area:1 Exatas; 2  Hmanas; 3 Biologicas ");
				scanf("%d", &c);
				printf("Codigo de catlogacao:\n");
				scanf("%d", &  cd);
				flag=false;
				if(c==1){
					for(i=0;i<e;i++){
						if(cd==exa[i].cod){
							printf("Codigo de catlogacao:%d\n",exa[i].cod);
							printf("doacao:%c\n",exa[i].doacao);
							printf("obra:%s\n",exa[i].obra);
							printf("altor:%s\n",exa[i].altor);
							printf("editora:%s\n",exa[i].editora);
							flag=true;
						}
					}
					if(flag==false){
						printf("codigode catalogacao nao encontrado na area de axatas");
					}
				}
				else if(c==2){
					for(i=0;i<h;i++){
						if(cd==hum[i].cod){
							printf("Codigo de catlogacao:%d\n",hum[i].cod);
							printf("doacao:%c\n",hum[i].doacao);
							printf("obra:%s\n",hum[i].obra);
							printf("altor:%s\n",hum[i].altor);
							printf("editora:%s\n",hum[i].editora);
							flag=true;
						}
					}
					if(flag==false){
						printf("codigode catalogacao nao encontrado na area de humanas");
					}
				}
				else if(c==3){
					for(i=0;i<b;i++){
						if(cd==bio[i].cod){
							printf("Codigo de catlogacao:%d\n",bio[i].cod);
							printf("doacao:%c\n",bio[i].doacao);
							printf("obra:%s\n",bio[i].obra);
							printf("altor:%s\n",bio[i].altor);
							printf("editora:%s\n",bio[i].editora);
							flag=true;
						}
					}
					if(flag==false){
						printf("codigode catalogacao nao encontrado na area de biologicas");
					}
				}
				break
				
		}
	}while(op!=3);
		return 0;
}
