#include "feldolgozas.h"

using namespace std;

//Meghivas: maxKiv(adat_matrix, kutya_ertekeles_darab_szamlalo_vector, n, m,)
int feldolgozas(std::vector< std::vector<int> >& t)
{
    int k=0; //kutya valaszto

    k = maxKiv(t);
    return k;
}
