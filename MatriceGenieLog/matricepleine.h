#include <iostream>

using namespace std;


class MatricePleine
{
    int nbLignes, nbColonnes;
    int **val;

  public:
    MatricePleine();
    MatricePleine(int nbL, int nbC, int x=0);

    MatricePleine * prod(MatricePleine &b);
};
