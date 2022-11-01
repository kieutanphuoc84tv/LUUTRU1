#include<stdio.h>
int ktnt (int n);
int tongnt (int n);
int n;

// Xay dung ham main

int main()
{
  	do{
  		printf("\n Nhap gia tri cua so n:");
  		scanf("%d",&n);
 	  }while(n<=1 || n>20);
  
  	ktnt(n);
  	tongnt(n);
return 0;
}
  
// Xay dung ham ktnt

int ktnt (int n)
  {
  	int demktnt=0;
  		for(int i=2;i<=n;i++)
  	    {
  		  	if (n%i==0)
  		  		demktnt++;
  	    }
  		  	if (demktnt==1)
  		  		printf("\n Gia tri %d la so nguyen to",n);
  		  	else 
  		  		printf("\n Gia tri %d khong la so nguyen to",n);
return demktnt;  		  		
  }
 
// Xay dung ham tong nguyen to

int tongnt (int n)
{
  	int tong=0;
  		for(int j=2;j<=n;j++)
        {
          	if (ktnt(j)==1)
          		tong=tong+j;	
        }
		printf("\n Tong cac so nguyen to la %d",tong);
		
return 0;		
}  
