#include<bits/stdc++.h>
void maiorvalor(int);

int main(){

	int val1;
	scanf("%d", &val1);
	maiorvalor(val1);
	return 0;


}

void  maiorvalor(int v1){
	int i;
	double soma=0;
	for(i=1;i<=v1;i++){
		soma=soma+((pow(i,2)+1)/(i+3));

	}
	printf("%.2lf",soma);
}
