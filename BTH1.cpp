#include <stdio.h>
long tinhgiaithua (int n);
int n;

// Xay dung ham in ra man hinh chuoi Hello World

void hello()
{
    printf("Hello World");
}
int main()
{  
   hello(); 
   
   tinhgiaithua(n);
   
return 0;
   
}

// Xay dung ham tinh giai thua cua mot so nguyen duong (vong lap)
 
long tinhgiaithua (int n)
{
	int giaithua=1;
	
	do{
		printf("\n\n\n Nhap so nguyen duong n de tinh giai thua:");
		scanf("%d",&n);
	}while(n<0 || n>666 );
	
	for(int i=1; i<=n;i++)
		giaithua=giaithua*i;
		printf("\n Giai thua cua %d = %d",n,giaithua);
return 0;	
}

