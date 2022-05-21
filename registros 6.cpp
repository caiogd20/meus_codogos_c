#include<bits/stdc++.h>


struct regintopesoa{
	char nome[50],telefone[50],comsumo[10];
	int dc,mc;
};

int main() {
	struct regintopesoa RP[40];
	int i,i2,nv=0;
	double x;
	float  tarifabasica = 15.78;
	for(i=0;i<2;i++){

        scanf(" %[^\n]",&RP[i].nome);
        scanf(" %[^\n]",&RP[i].telefone);
		scanf("%d",&RP[i].dc);
		scanf("%d",&RP[i].mc);

	}
	for(i=0; i<40; i++){
        if(RP[i].mc==1){
            printf("1- Janeiro\n");
            printf("Nome: %s;dia: %d\n", RP[i].nome, RP[i].dc);
        }
    }

	for(i=0; i<40; i++){
        if(RP[i].mc==2){
            printf("2- fevereiro\n");
            printf("Nome: %s;dia: %d\n", RP[i].nome, RP[i].dc);
		}
	}
	for(i=0; i<40; i++){
        if(RP[i].mc==3){
            printf("3- marco\n");
            printf("Nome: %s;dia: %d\n", RP[i].nome, RP[i].dc);
		}
	}
    for(i=0; i<40; i++){
        if(RP[i].mc==4){
            printf("4- abril\n");
            printf("Nome: %s;dia: %d\n", RP[i].nome, RP[i].dc);
		}
	}
	for(i=0; i<40; i++){
        if(RP[i].mc==5){
            printf("5- maio\n");
            printf("Nome: %s;dia: %d\n", RP[i].nome, RP[i].dc);
		}
	}
	for(i=0; i<40; i++){
        if(RP[i].mc==6){
            printf("6- jonho\n");
            printf("Nome: %s;dia: %d\n", RP[i].nome, RP[i].dc);
		}
	}
	for(i=0; i<40; i++){
        if(RP[i].mc==7){
            printf("7- jolho\n");
            printf("Nome: %s;dia: %d\n", RP[i].nome, RP[i].dc);
		}
	}
	for(i=0; i<40; i++){
        if(RP[i].mc==8){
            printf("8- agosto\n");
            printf("Nome: %s;dia: %d\n", RP[i].nome, RP[i].dc);
		}
	}
	for(i=0; i<40; i++){
        if(RP[i].mc==9){
            printf("9- setembro\n");
            printf("Nome: %s;dia: %d\n", RP[i].nome, RP[i].dc);
		}
	}
	for(i=0; i<40; i++){
        if(RP[i].mc==10){
            printf("10- octubro\n");
            printf("Nome: %s;dia: %d\n", RP[i].nome, RP[i].dc);
		}
	}
	for(i=0; i<40; i++){
        if(RP[i].mc==11){
            printf("11- novembro\n");
            printf("Nome: %s;dia: %d\n", RP[i].nome, RP[i].dc);
		}
	}
	for(i=0; i<40; i++){
        if(RP[i].mc==12){
            printf("12- dezembro\n");
            printf("Nome: %s;dia: %d\n", RP[i].nome, RP[i].dc);
		}
	}


	return 0;
}
