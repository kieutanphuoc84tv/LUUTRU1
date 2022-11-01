#include <stdio.h>
#include <iostream>
#include <cassert>
using namespace std;

void nhapmang1c (int a[10], int n);
void xuatmang1c (int a[10], int n);
int n;

// Ham main

int main()
{
	int a[10], n;
		printf("\n Nhap so phan tu mang:");
		scanf("%d",&n);
		
	nhapmang1c (a, n);
	xuatmang1c (a, n);
return 0;
} 

// Nhap mang 1c

void nhapmang1c (int a[10], int n)
{
	for (int i=0; i<n; i++)
	{
		printf("\n Nhap phan tu thu a[%d]:",i);
		scanf("%d",&a[i]);
	}
}

// Xuat mang 1c

void xuatmang1c (int a[10], int n)
{
	printf("\n\n Cac phan tu co trong mang: ");
	for (int i=0; i<n; i++)
	{
		printf("%d; ", a[i]);
	}
}

// Gia tri lon nhat trong mang 

int max = maxElement(xuatmang1c,n);
    cout << "max= "<< max << endl;


