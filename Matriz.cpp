#include <cstdio>
using namespace std;

int main() {
    int p,k;
    scanf("%d", &p);
    scanf("%d", &k);
    int l,x=0,c,c2=1,mat[k][p];
    for(l=0;l<k;l++){
        for(c=0;c<p;c++){
            scanf("%d", &mat[l][c]);
        }
    }
     
    for(c=0;c<p;c++){
        for(l=0;l<k;l++){
            if(mat[l][c]==1)
            x++;
        }
        printf("Princesa %d: %d voto(s)\n",c2,x);
        c2++;
        x=0;
    }
	return 0;
}
