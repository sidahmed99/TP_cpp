#include <iostream>
#include <string>
using namespace std;
void affichage()
{
 cout<<"Taper 0 pour somme"<<endl;
 cout<<"Taper 1 pour soustraction"<<endl;
 cout<<"Taper 2 pour multiplication"<<endl;
 cout<<"Taper 3 pour division"<<endl;
 cout<<"Taper 4 pour modulo"<<endl;
}
int main()
{
 int refaire(1);
 int x(0), y(0);
 double resultat(0);
 int choix(0);
 do {
 affichage();
 cin>>choix;
 cout<<"Donner la valeur de x : ";
 cin>>x;
 cout<<"Donner la valeur de y : ";
 cin>>y;
 switch(choix)
 {
 case 0: resultat = x+y;
 break;
 case 1: resultat = x-y;
 break;
 case 2: resultat = x*y;
 break;
 case 3: resultat = x/y;
 break;
 case 4: resultat = x%y;
 break;
 }
 cout<<"Le resultat est = "<<resultat<<endl;
 cout<<"Taper 1 pour refaire."<<endl;
 cin>>refaire;
 }while (refaire==1);
 return 0;
}
