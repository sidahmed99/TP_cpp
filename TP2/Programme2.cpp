#include <iostream>
using namespace std;
  int main()
  {
    int const N(5); // Declaration de la taille du tableau.
    int Table[5]; //Declaration du tableau.
    Table[0]=2; //Remplissage de la 1er case.
    Table[1]=0; //Remplissage de la 2eme case.
    Table[2]=3; //Remplissage de la 3eme case.
    Table[3]=7; //Remplissage de la 4eme case.
    Table[4]=-1; //Remplissage de la 5eme case.
    int valMin=Table[0]; // Declaration de la variable de la valeur min.
    int valMax=Table[0]; // Declaration la variable de la valeur max.

    cout << "les valeurs du tableau sont:\n";
for (int i(0) ; i<N ; i++)
{
    cout << Table[i] << endl; // Affichage du tableau.
}
cout << "\n";
   for (int i(0); i<N ; i++)  // Pour tous i de 0 jusqua N
   {
       if (Table[i]<valMin) // On compare entre deux case,
        valMin=Table[i];    // et on enregistre la valeur minimum.
   }

   for (int i(0); i<N ; i++)
   {
       if (Table[i]>valMax)
        valMax=Table[i];
   }
   cout << "La valeur min: " << valMin << endl; //affichage
   cout << "La valeur max: " << valMax << endl; //affichage
          return 0;
}
/*j’ai beau essayer de trie le tableau en valeurs croissantes ou décroissantes, mais je crois c’est impossible sans utiliser de fonction :(
J’ai même essayé la fonction échange mais ça n’a pas marché, vous pouvez nous montrer monsieur comment le faire? S’il vous plaît. */ 
