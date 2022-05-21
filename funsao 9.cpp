#include<bits/stdc++.h>
int maiorvalor(int[][4]);


 

int main(){
	
	int i,c,num[4][4],s;
	for(i=0;i<4;i++){
		for(c=0;c<4;c++){
			scanf("%d", &num[i][c]);
		}
	}
		s=maiorvalor(num);
		
	
		printf("%d\n",s);
	
	return 0;
	
		
}

int  maiorvalor(int a[][4]){

    int c,i,s;
    for(i=0; i<4; i++){
        for(c=0;c<4;c++){
        	s=s+a[i][c];
}
}
return s;
}
