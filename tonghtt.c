#include<stdio.h>

int main(){
 	int a,b, tong = 0 ,hieu = 0,tich = 0;
 	float thuong;
 	
 	printf("nhap gia tri cua a,b");
 	scanf("%i%i",&a,&b);
 	tong = a + b;
 	hieu = a - b;
 	tich = a*b;
 	thuong = a/b;
 	printf("tong cua a va b là %i \n",tong);
 	printf("hieu cua a va b la %i \n",hieu);
 	printf("tich cua a va b la %i \n",tich);
 	
 	if(a!=0)
	printf("thuong cua a va b la : %f \n",thuong);
	
	return 0;
}
