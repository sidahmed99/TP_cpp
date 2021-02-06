//
// Nom du fichier : equation_second_ordre.cpp
// Fonction : Resolution d'une equation du second ordre
// Module : TP n°1 C++
// Binome : AZZOUNE Sidahmed
// Date de creation : 21/01/2021
//
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
// Declaration des variables
float si_a, si_b, si_c; // Les coefficient reels de l'equation
float si_X1, si_X2; // x1 et x2 sont les solutions de l'equation
// La solution unique sera stockee dans x1
float si_delta; // Le discriminant
// Presentation du programme
cout << "Recherche des solutions reelles d'une equation du second degre.";
cout << endl;
cout << "L'equation est : ax**2+bx+c = 0, avec a,b et c reels." << endl;
cout << endl;
// Saisie des donnees
cout << "Entrez la valeur de a : ";
cin >> si_a;
cout << "Entrez la valeur de b : ";
cin >> si_b;
cout << "Entrez la valeur de c : ";
cin >> si_c;
if (si_a == 0)
// On peut reprendre l'algorithme precedent
// ou considerer que l'utilisateur du programme a fait une erreur
cout << "Erreur ! Votre equation n'est pas du second ordre." << endl;
else
{
si_delta = si_b*si_b - 4*si_a*si_c;
if (si_delta < 0)
cout << "Aucune solution reelle." << endl;
else
if (si_delta == 0)
{
si_X1 = -si_b/(2*si_a);
cout << "Une seule solution X1= " << si_X1 << endl;
}
else // Cas ou delta > 0
{
si_X1 = (-si_b+sqrt(si_delta))/(2*si_a);
si_X2 = (-si_b-sqrt(si_delta))/(2*si_a);
cout << "Il y a deux solutions reelles." << endl;
cout << "Premiere solution X1= " << si_X1 << endl;
cout << "Deuxieme solution X2= " << si_X2 << endl;
}
}
return 0; // La valeur numerique 0 correspond a un succes de l'execution
}
