#include<bits/stdc++.h>
void ordena();

int vet[10];
int main(void){
	
	int n,i;
	
	

	for(i=0;i<10;i++){
	
		scanf("%d",&vet[i]);
		
	}
	ordena();
	for(i=0;i<10;i++){
		
		printf("\n%d\n",vet[i]);
	
}
	return 0;
}
void ordena(){          
 
        int i, j, aux;
 
            for( i=0; i<10; i++ ){
                 for( j=i+1; j<10; j++ ){
                      if( vet[i] > vet[j] ){
                          aux = vet[i];
                          vet[i] = vet[j];
                          vet[j] = aux;
                      }
                 }
            }
            
    }
