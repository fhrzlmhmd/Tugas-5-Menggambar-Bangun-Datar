//Program menggambar bangun datar dengan nested loop, dicompile dengan Dev-C++ (tidak diketahui apa bisa dicompile dengan Borland C++ dan Geany)
#include <iostream>
#include<conio.h>
using namespace std;

int main ()
{
    int menu,a,b,x,i,j,y=1;

menu:
printf ("\n====================================================");
printf ("\n             Menggambar Bangun Datar						 ");
printf ("\n====================================================\n");
printf ("\n(1) Kotak bolong	");
printf ("\n(2) Segitiga angka    ");
printf ("\n");
printf ("\nMasukkan pilihan Anda: ");
cin>>menu;
switch(menu)
{
	case 1:
	 printf("\nPanjang = ");
     cin>>a;
     printf("\nLebar = ");
     cin>>b;
     printf("\n");
	 for(i=1;i<=a;i++)
	 {
	 for(j=1;j<=b;j++)
	 {
	 if(i==1||i==a||j==1||j==b)
	 printf("*");
	 else
	 printf(" ");
	 }
	 printf("\n");
     }
	break;
    case 2:
      printf("\nX = ");
      cin>>x;
      {
      for(i=0;i<=x;i++)
      {
      for(j=0;j<=i;j++)
      {
      cout <<y<<" ";
      y++;
      }
      cout<<"\n";
      }  
      }
      break;
}
}
