#include<bits/stdc++.h>
void maiorvalor(int []);


int fat[10];

int main()
{

    int num[10],i,c;
    for(i=0; i<10; i++)
    {
        scanf("%d", &num[i]);
    }
    maiorvalor(num);

    for(i=0; i<10; i++)
    {
        printf("%d\n",fat[i]);
    }

    return 0;


}

void  maiorvalor(int n[])
{

    int fato,i2,i1;
    for(i2=0; i2<10; i2++)
    {
        fato=1;
        for(i1 = n[i2]; i1 > 1; i1--)
        {
            fato = fato * i1;
        }

        fat[i2]=fato;

    }
}

