#include<bits/stdc++.h>
int maiorvalor(int[][5]);


 

int main(){
	
	int i,c,num[5][5],s;
	for(i=0;i<5;i++){
		for(c=0;c<5;c++){
			scanf("%d", &num[i][c]);
		}
	}
		s=maiorvalor(num);
		
	
		printf("%d\n",s);
	
	return 0;
	
		
}

int  maiorvalor(int a[][5]){

    int i,c=5,s,mai=100000;
    for(i=0; i<5; i++){
		c--;
		
        if(a[i][c]<mai){
        	mai=a[i][c];
        	s=a[i][c];
        	
		}
        
}
return s;
}
