#include <iostream>
#include <string>
#include <vector>
using namespace std;

  int main()
  {
  // On declare les tableaux et les variable
  vector<string> Module;
  vector<int> Note;
  double Moy(0);
  string val1;
  int i,val2,N;
  
  cout << "Quelle est le nombre de modules ?" << endl;
  cin >> N ; // On introduit le nombre de modules = nbr de cases.

  for (i=0; i<N; i++)
  {
      cout << "Entrer le nom et la note du module: "<< endl;
      cin >> val1>>val2;
      Module.push_back(val1);
      Note.push_back(val2);
      Moy += Note[i]; // On additionne toutes les notes.
  }
  Moy /= Note.size(); // On calcul la moyenne.
  cout << "Votre moyenne est: " << Moy << endl; // Affichage
          return 0;
}
