#include <iostream.h>
#include <conio.h>

main ()
{
  char cumle[255]="", kelime[255]="";
  int i=0, j=0;
  cout<<"Lutfen birkac kelimelik cumle giriniz:";
  cin.getline(cumle,255);
  while (cumle[i]!=NULL)
	   {
	   while (cumle[i]==char(32))
						i++;
	   while ((cumle[i]!=char(32))&& (cumle[i]!=NULL))
				 kelime[j++]=cumle[i++];
	   kelime[j]=NULL;
	   for (--j; j> -1; j--)
	   cout<<kelime[j];
	   j=0;
	   cout<<" ";
	   }
getch();
}

