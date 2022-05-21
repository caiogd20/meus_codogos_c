#include<bits/stdc++.h>


struct regintopesoa{
	char endereco[50],email[50],comsumo[10];
	int ic,ca,pv;
};

int main() {
	struct regintopesoa RP[5];
	int i,i2,nv=0;
	float  tarifabasica = 15.78,x;
	char c1[10]="verde",c2[10]="amarelo",c3[10]="laranja",c4[10]="vervelho";
	for(i=0;i<5;i++){
		scanf("%d",&RP[i].ic);
		scanf(" %[^\n]",&RP[i].endereco);
		scanf(" %[^\n]",&RP[i].email);
		scanf("%d",&RP[i].ca);

	}
	for(i=0;i<5;i++){
		if ((RP[i].ca >= 1) && (RP[i].ca <= 5)){
				strcpy(RP[i].comsumo,c1);
		}
		else if((RP[i].ca >= 6) && (RP[i].ca <= 10)){
			strcpy(RP[i].comsumo,c2);
			}
		else if((RP[i].ca >= 10) && (RP[i].ca<= 15)){
			strcpy(RP[i].comsumo,c3);
			}
		else{
            printf("%d\n",RP[i].ic);
			strcpy(RP[i].comsumo,c4);
			nv++;
			}
		}
		x= (float)nv/5;
		x=x*100;
    printf("%.0f%\n",x);
	return 0;
}

