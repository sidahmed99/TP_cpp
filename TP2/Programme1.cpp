#include <iostream>
 using namespace std;
  int main()
  {
    int const N(6); // Declaration de la taille du tableau.
    int Table[6]; //Declaration du tableau.
    Table[0]=-5; //Remplissage de la 1er case.
    Table[1]=0; //Remplissage de la 2eme case.
    Table[2]=3; //Remplissage de la 3eme case.
    Table[3]=7; //Remplissage de la 4eme case.
    Table[4]=0; //Remplissage de la 5eme case.
    Table[5]=0; //Remplissage de la 6eme case.

    // Declaration  des variables.
    int i,S,Ipos,IC,P;
    double MOY;
    S=0;
    Ipos=0;
    IC=0;
    P=1;

cout << "les valeurs du tableau sont:\n";
for (i=0 ; i<N ; i++)
{
    cout << Table[i] << endl; // Affichage du tableau.
}
cout << "\n";

for (i=0 ; i<N ; i++)
    {
        if (Table[i]>0)
        {
            S=S+Table[i]; // Calcul de la somme de tous les elements strictement positifs (Pour calculer la moyenne).
            Ipos=Ipos+1; // Calcul du nombre de ces elements.
            P=P*Table[i]; // Calcul du produit.
        }
        else
        {
            if (Table[i]==0)
                IC=IC+1; // Calcul du nombre d'elements nuls.
        }
    }
MOY=S/Ipos; // Calcul de la moyenne.

    //Maintenant on affiche la Moyenne, le produit, le nombre d'elements positifs et nuls.
    cout<< "La Moyenne est: "<< MOY << endl;
    cout<< "Le Produit est: "<< P << endl;
    cout<< "Le nombre d'elements positifs: "<< Ipos << endl;
    cout<< "Le nombre d'elements nuls: "<< IC << endl;

        return 0;
  }
