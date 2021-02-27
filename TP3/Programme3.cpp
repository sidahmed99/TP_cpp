#include <iostream>
#include <fstream>
using namespace std;
int main()
{
 FILE *index;
 index=fopen("fichier.txt", "w");
 fputs("Nom: AZZOUNE\n", index);
 fputs("Prénom: Sidahmed\n", index);
 fputs("Matricule: 171731096791", index);
 fclose(index);
 return 0;
}
