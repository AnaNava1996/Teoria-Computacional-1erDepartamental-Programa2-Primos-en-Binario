#include <stdio.h>
#include <stdlib.h>

//Ocurrencias de 0 y 1
//
int Binario(int);
int Cousin(int);
int u=0;
int c=0;

int main() {
		int op,n,m,k,r,p,i;

			for(i=2;i<1000;i++){
				if(Cousin(i)==1){
					u=0;
					c=0;
			for(p=0;p<=i;p++){
				Binario(p);}
			FILE *ar;
			ar=fopen("Ocurrencias.txt","a");
			fprintf(ar,"\n%d\t%d\t\t%d",i,u,c);
			fclose(ar);
			printf("\nOcurrencias de 1: %d\nOcurrencias de 0: %d",u,c);}}

	return 0;
}


int Cousin(int o){
	int w;
	int cont2=0;
	if(o==1){
		return 0;}
	else{
	for (w=1;w<o;w++){
		if(o%w==0){
			cont2++;}
	}
	if(cont2>1)
		return 0;
	else
		return 1;
}}


int Binario(int n){

	int i=0;
	int j;
	int a[10];

if(n==0){
	printf("\n\n0");
	c++;
}
else{
while(n>0){
	if(n%2==0){
		a[i]=0;
		c++;
		i++;}
	else{
		a[i]=1;
		i++;
		u++;
		}
	n=n/2;
}}

for(j=i-1;j>=0;j--){
printf("%d",a[j]);
}
printf(",");
}


