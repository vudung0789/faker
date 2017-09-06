#include <stdio.h>
#include <ctype.h>
#include <conio.h>
//tinh tông
int plus(int a,int b){
	int c;
	c = a + b ;
}
//tinh hieu
int minus(int a,int b){
	int c;
	c = a - b;
}
//tinh tich
int multi(int a,int b){
	int c;
	c = a * b;
}
//tinh thuong
int division (int a, int b) {
    float c;
    c = a / b;
}

int nhap(a,b){
	printf("nhap 2 gia tri a, b");
	scanf("%i%i",&a,&b);
	return 0;
}
int main(){
	int x;
	int a,b,i;
	float c;
			while(i<=10){
				printf("1 : phep tinh tong \n");
				printf("2 : phep tinh tong \n");
				printf("3 : phep tinh tong \n");
				printf("4 : phep tinh tong \n");
					printf("nhap phep tinh can lam ");
					scanf("%i",&x);
				switch(x){
   					case 1 :
   						nhap(a,b);
      					plus(a,b);
      					printf("Sum : %i",c);
      					break;
   					case 2 :
   						(a,b);
   	    				minus(a,b);
   	    				printf(" : %i",c);
						break; 
   					case 3 :
   						nhap(a,b);
      					multi(a,b);
      						printf(" : %i",c);
      					break;
   					case 4 :
   						nhap(a,b);
      					division(a,b);
      						printf(" : %i",c);
      					break;
   }
   printf("\n");
}
}


