#include<bits/stdc++.h>

int main(){
int i,i2,c=0,c2=0,t;
char x[100];
scanf("%d",&t);
int leds[t];
for(i=0;i<t;i++){
	leds[i]=0;
	
}
for(i=0;i<t;i++){
	scanf(" %[^\n]",x);
	c=strlen(x);
	for(i2=0;i2<c;i2++){
		if(x[i2]=='0')
			c2=c2+6;
		if(x[i2]=='1')
			c2=c2+2;
		if(x[i2]=='2')
			c2=c2+5;
		if(x[i2]=='3')
			c2=c2+5;
		if(x[i2]=='4')
			c2=c2+4;
		if(x[i2]=='5')
			c2=c2+5;
		if(x[i2]=='6')
			c2=c2+6;
		if(x[i2]=='7')
			c2=c2+3;
		if(x[i2]=='8')
			c2=c2+7;
		if(x[i2]=='9')
			c2=c2+6;
}
		printf("%d leds\n",c2);
		c2=0;									
	
	}
	
return 0;
}
