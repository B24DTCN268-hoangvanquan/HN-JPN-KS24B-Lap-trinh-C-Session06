#include<stdio.h>
int main(){
	printf("Nh�p v�o 5 so nguy�n:\n");
	int a,b,c,d,e;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	int soChan = 0,soLe = 0;

	if(a%2!=0){
		soLe++;
	}else{
		soChan++;
	}
	
	if(b%2!=0){
		soLe++;
	}else{
		soChan++;
	}
	
	if(c%2!=0){
		soLe++;
	}else{
		soChan++;
	}
	
	if(d%2!=0){
		soLe++;
	}else{
		soChan++;
	}
	
	if(e%2!=0){
		soLe++;
	}else{
		soChan++;
	}
	printf("S� luong s� le: %d so",soLe);
	printf("\nS� luong s� chan: %d so",soChan);
	return 0;
}
