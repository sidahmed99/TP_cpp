#include <iostream>
 using namespace std;
  int main()
  {
        //Declaration des variables a,b,c,d,g
        int a,b,c,d ;
        float g;
        // Presentation du programme.
        cout << "Realisation de quelques operations elementaires \n";
        // Saisie des donnees.
        cout << "Donner la valeur de l'entier a:";
        cin >> a;
        cout << "Donner la valeur de l'entier b:";
        cin >> b;
        // Le calcul des operations.
        c=a*b;
        d=a/b;
        g=a%b;
        // Affichage des resultats.
        cout << "Les resultats obtenus sont :" << endl;
        cout << "c=" << c << endl;
        cout << "d=" << d << endl;
        cout << "g=" << g << endl;
        return 0;
  }
