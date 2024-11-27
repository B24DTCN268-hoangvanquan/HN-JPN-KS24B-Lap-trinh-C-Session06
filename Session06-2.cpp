#include<stdio.h>
int main(){
	printf("Nhâp vào 5 so nguyên:\n");
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
	printf("Sô luong sô le: %d so",soLe);
	printf("\nSô luong sô chan: %d so",soChan);
	return 0;
}
