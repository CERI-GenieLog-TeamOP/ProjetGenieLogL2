#include "matricepleine.h"
using namespace std;

MatricePleine::MatricePleine()
{
    nbColonnes = 5;
    nbLignes = 5;

    val  = new int *[nbColonnes];
    for(int idx = 0 ; idx < nbColonnes ; idx++) val[idx] = new int [nbLignes];
}

MatricePleine::MatricePleine(int nbL, int nbC, int x)
{
    nbColonnes = nbC;
    nbLignes = nbL;

    val  = new int *[nbLignes];
    for(int iL = 0 ; iL < nbLignes ; iL++)
    {
        val[iL] = new int [nbColonnes];
        for(int iC=0;iC<nbColonnes;iC++) val[iL][iC]=x;
    }
}

MatricePleine * MatricePleine::prod(MatricePleine &b)
{
    if(nbColonnes != b.nbLignes)
    {
        cerr<<"Produit impossible"<<endl; //rmq: ce serait mieux de n'entrer dans la fonction que si cela est vérifié
        /*MatricePleine *m=new MatricePleine();
        return m;*/
        return NULL;
    }
    //if (b.identite()==true) return (this); //identité = opérateur nul
    MatricePleine *m=new MatricePleine(b.nbLignes,nbColonnes);
    int n=b.nbLignes; //nb d'éléments a multiplier pour chq produit
    int s=0;
    for (int i=0; i<nbLignes; i++)
    {
        for (int j=0; j<b.nbColonnes; j++)
        {
            for (int k=0;k<n;k++)
                {
                    s+=val[i][k]*b.val[k][j]; //cumule case par case
                }
            m->val[i][j]=s;
        }
    }
    return m;
}
