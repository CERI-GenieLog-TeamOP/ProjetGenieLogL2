#include "matricepleine.h"

using namespace std;

int main()
{
    MatricePleine m1(500,1000,1);
    MatricePleine m2(1000,500,2);
    MatricePleine *m3=m1.prod(m2);


    return 0;
}
