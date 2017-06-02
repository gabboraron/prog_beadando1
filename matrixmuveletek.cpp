#include "matrixmuveletek.h"
#include "egyeb.h"
#include <vector>
#include <iostream>

#include <string>
#include <sstream>

#include <fstream>
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

bool kategoriakEsKutyak(int n) {return n>0;}
bool kutyaPont(int n) {return ((n>-2) && (n<11));}
//MATRIXBEOLVASAS KONZOLROL
void initMatrixConsole(int& n, int& m)
{
    n =read_int("\nAdja meg a kategoriak szamat: ","\n0-nal nagyobb egesz szamot kerek!",kategoriakEsKutyak);
    m =read_int("Adja meg a kutyak szamat: ","\n0-nal nagyobb egesz szamot kerek!",kategoriakEsKutyak);
}

void ReadMatrix(vector<vector<int> >& t,const int& n,const int& m)
{
    cout <<"\n \nAdja meg a kutyak pontszamait:\n -ahol a kutya nem ert el pontot ott -1 a pontszam, \n -egyebkent egy 0 es 10 koze eso ertek! \n"<<endl;
    t.resize(n);
    for(int i=0; i<n; ++i){
        t[i].resize(m);
        for(int j=0;j<m; ++j){
            t[i][j] = read_int("\nAdjon meg a kutya altal a kategoriaban elert pontszamot: ","\n FIGYELEM: A pontszam -1 es 10 koze eso egesz szam lehet!",kutyaPont);
        }
    }

    MatrixTest(t, n, m);
}

//TESZELES
void MatrixTest(std::vector< std::vector<int> >& t, const int& n, const int& m)
{
    cout<<"\n \n **** Megadott adatok **** \n \n"<<endl;
    cout <<"\nMegadott ertekek: \n"<< "  kategoriak szama: " << n<<"\n"<< "  kutyak szama: " << m<<"\n"<<endl;
    for(int i=0; i<n; ++i){
        cout<<i<<". kutya pontszamai: ";
        for(int j=0;j<m; ++j){
            cout << t[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n \n *************** \n \n";
}

bool pozitiv(int n){return n>0;}
bool also_hatar(int n){return n>-2;}
bool felso_hatar(int n){return n<11;}
//Mátrix véletlen értékekkel való feltöltése
void FillMatrixRnd(std::vector< std::vector<int> >& x, const int& n, const int& m)
{
    x.resize(m);
    for(int i=0; i<m; ++i)
        x[i].resize(n);
    int ah,fh;
    do{
        cout<<"Milyen intervallumbol legyenek a veletlen szamok?\n";
        ah=read_int("Also hatar:" ,"-2 nel nagyobb egesz szamot kerek!",also_hatar);
        fh=read_int("Felso hatar: ","11nel kisebb egesz szamot kerek!",felso_hatar);
        if(ah>=fh) cout<<"Helytelen intervallum!\n";
    }while(ah>=fh);
    srand(time(NULL)); //Véletlenszám generátor ininicializálása
    int d=fh-ah+1;
    for(int i=0; i<m; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            x[i][j]=rand()%d+ah; //Véletlen számok elõállítása az ah..fh intervallumból
        }
    }
    MatrixTest(x, n, m);
    return;
}

//Matrix beolvasas fajlbol

//copyright: Gregorics Tibor
void FillMatriFromFile(std::vector< std::vector<int> >& t, std::string& filename)
{
    cout<<"\nfile name: "<<filename<<"\n";
    std::ifstream f(filename.c_str());
    if(f.fail()){
        cout << "Nincs meg a fajl!\n";
        exit(1);
    }

    cout<<"\n A file tartalma: \n";

    string str;
    getline(f,str);
    while( !f.fail()){
        istringstream is(str);
        vector<int> x;
        int n;
        is >> n;

        while(!is.fail()){
            x.push_back(n);
            cout<<n<<" ";
            is >> n;
        }
        cout<<endl;
        t.push_back(x);
        getline(f,str);
    }
}
/*

void FillMatrixFromFile(const string& fnev,vector< vector<int> >& x) throw (FileError)
{
    ifstream f;
    f.open(fnev.c_str());
    if(f.fail()) throw OpenError;
    int m,n;
    f>>m>>n;
    if(m<0 || n<0) throw RangeError;
    x.resize(m);
    for(int i=0; i<m; ++i)
    {
        x[i].resize(n);
        for(int j=0; j<n; ++j)
        {
            f>>x[i][j];
            if(f.fail()) throw DataError;
        }
    }
    f.close();
}
*/
