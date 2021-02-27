#include <iostream>
#include <cmath>
using namespace std;
int puissance(int X, int Y)
{
 int P=1;
 for(int i=1;i<=Y;i++)
 {
 P=P*X;
 }
 return P;
}
int main()
{
 int resultat,X,Y;
 cout << "X = ";
 cin>>X;
 cout << "Y = ";
 cin>>Y;
 resultat=puissance(X,Y);
 cout << "X^Y= " << resultat << endl;
 return 0;
}
