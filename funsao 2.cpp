#include<bits/stdc++.h>
void maiorvalor(int,int,int);
 

int main(){
	
	int val1,val2,val3;
	scanf("%d", &val1);
	scanf("%d", &val2);
	scanf("%d", &val3);
	maiorvalor(val1,val2,val3);
		
}

void  maiorvalor(int v1,int v2,int v3){

	int mv=0,AB,BC;
	AB=(v1+v2+abs(v1-v2))/2;
	if(AB>mv){
		mv=AB;
	}
	BC=(AB+v2+abs(AB-v2))/2;
	if(BC>mv){
		mv=BC;
	}
	printf("%d eh o maior\n",mv);
}
