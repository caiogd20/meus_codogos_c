#include <cstdio>
using namespace std;

struct regintopesoa{
	char endereco[50],email[50];  
	int ic,ca;
};

int main() {
	struct regintopesoa RP[5];
	int i;
	double x;
	float  tarifabasica = 15.78; 
	for(i=0;i<5;i++){
		scanf("%d",&RP[i].ic);
		scanf(" %[^\n]",&RP[i].endereco);
		scanf(" %[^\n]",&RP[i].email);
		scanf("%d",&RP[i].ca);
		
	}
	for(i=0;i<5;i++){
		if ((RP[i].ca >= 1) && (RP[i].ca <= 5))
			x = 1.34 + tarifabasica;
		if((RP[i].ca >= 6) && (RP[i].ca <= 10))
			x = 3.40 + tarifabasica;
		if((RP[i].ca >= 10) && (RP[i].ca<= 15))
			x = 6.94 + tarifabasica;
		if(RP[i].ca > 15)
			x = 10.50 + tarifabasica;
	
		printf("%.2lf\n",x);
		tarifabasica = 15.78;
	} 
	
	return 0;
}
