#include<bits/stdc++.h>
int maiorvalor(int);
 

int main(){
	
	int val1,r;
	scanf("%d", &val1);
	r=maiorvalor(val1);
	printf("%d",r);
	return 0;
	
		
}

int  maiorvalor(int v1){
	int soma=0,i;
	for(i=1;i<=v1;i++){
			soma=soma+i;
			}
	return soma;
}
