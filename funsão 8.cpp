#include<bits/stdc++.h>
int maiorvalor(int[],int[]);




int main(){

int i,quant,x[10],y[10];
for(i=0;i<10;i++){
scanf("%d", &x[i]);
}

quant=maiorvalor(x,y);
printf("%d\n",quant);

return 0;


}

int  maiorvalor(int vetx[],int vety[])
{
int i,y=0;
for(i=0;i<10;i++){


        if(vetx[i]>0){
        vety[y]=vetx[i];
        y++;
}


}
for(i=0;i<y;i++){
printf("Y[%d] = %d\n",i,vety[i]);
}
return y;
}

