#include "tetelek.h"

using namespace std;

//Meghivas: maxKiv(rendezendo_vector, n, max, ind)
int maxKiv(const std::vector< std::vector<int> >& v)
{
    int n;
    n = v.size();
    //m = v[0].size();
/*
    cout<<"\n *** \n";
    cout<<"\nmaxKiv TEST\n"<<

    cout<<"kategoriak szama:"<<n;
    cout<<"\nkutyak szama: "<<m;

    cout<<"\n *** \n";*/

    int elsoElem = 1;
    int maximum = szamlalas(v[0]);;
    int maxTmp;
    int ind = 0;

    for(int i=1; i<n; ++i)
    {
        maxTmp = szamlalas(v[i]);
        if(maxTmp > maximum)
        {
               maximum = maxTmp;
               ind = i;
        }
    }
    return ind;
}

//SZAMLALAS
//Meghivas: szamlalas(szamlalando_vector, n, c)
int szamlalas(const std::vector<int>& w)
{
    int c = 0;
    int m = w.size();

    for(int i = 0; i<m; ++i)
    {
        if(w[i] != (-1))
        {
            ++c;
        }
    }
    return c;
}
