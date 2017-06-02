/*
//K�sz�tette:    Burian Sandor
//D�tum:         2017.03.31
//NEPTUN k�d:    AWXYHE
//mail:          burjansanyi@yahoo.com
//Feladat:       Egy kutya ki�ll�t�son n kateg�ri�ban m kutya vesz r�szt. Minden kutya minden
                 kateg�ri�ban egy 0 �s 10 k�z�tti pontsz�mot kap. Melyik az a kutya, amelyik a legt�bb
                 kateg�ri�ban indult? */

#include <iostream>
#include <string>
#include <vector>
#include "tetelek.h" // maxKiv; szamlalas;
#include "matrixmuveletek.h" //PrintMatrix, ReadMatrix, initMatrixConsole, FillMatrixRnd, MatrixTest
#include "egyeb.h" //menu, read_int
#include "feldolgozas.h" //feldolgozas

using namespace std;



int main()
{
    cout << "\n 1. beadando \n" << endl;
    cout << "Feladat: \n Egy kutya kiallitason n kategoriaban m kutya vesz reszt. \n Minden kutya minden kategoriaban egy 0 �s 10 kozotti pontszamot kap. \n Melyik az a kutya, amelyik a legtobb kategoriaban indult? \n \n";

    std::vector<std::vector<int> >v; //kutyak es pontszamaik matrixa
    int n; //kategoriak szama
    int m; //kutyak szama
    string filename = " ";

    int mod;
    do{
       //BEOLVASAS
       mod = menu();
       if(mod == 1)
       {
            cout<<"Adja meg a fajl nevet: ";
            cin>>filename;
            FillMatriFromFile(v,filename);
            //FillMatrixFromFile(filename, v);
       } else if(mod == 2)
       {
            initMatrixConsole(n,m);
            FillMatrixRnd(v,n,m);
       } else if(mod == 3)
       {
           initMatrixConsole(n,m);
           ReadMatrix(v,n,m);
       }

       //FELDOLGOZAS
        if(mod != 0) {cout<<feldolgozas(v)<<". sorszamu kutya indult a legtobb kategoriabann\n\n";}

    }while(mod>0);

    return 0;
}
