#include "egyeb.h"

using namespace std;

//Feladat: 	Megadott feltételt kielégítõ egész számot olvas be.
//Bemenõ adatok:string msg	    - kiírandó üzenet
//		string err    	- kiírandó hibaüzenet
//              bool valid(int)- ellenõrzõ függvény
//Kimenõ adatok:int n (visszatérési érték)  - beolvasott egész szám: visszatérési érték
//Tevékenység:	Billentyûzetrõl olvas be egy a valid() feltételnek megfelelõ
//		        egész számot.
//Copyright:    Gregorics Tibor
int read_int(const string &msg, const string &err, bool valid(int))
{
    int n;
    bool hiba;
    do{
        cout << msg;
        cin >> n;
        if((hiba=cin.fail())) cin.clear();
        string tmp=""; getline(cin, tmp);
        hiba = hiba || tmp.size()!=0 || !valid(n);
        if(hiba) cout << err << endl;
    }while(hiba);

    return n;
}

//bool nulla_harom(int&);
bool nulla_harom(int n) {return n>=0 && n<=3;}

int menu()
{
    cout<<"\nValassz a kovetkezok kozul:\n\n";
    cout<<"1. Feltoltes szoveges fajlbol\n";
    cout<<"2. Feltoltes veletlen ertekekkel\n";
    cout<<"3. Feltoltes kezzel\n";
    cout<<"0. kilepes\n";
    int v=read_int("\nMit valasztasz:","\n0 .. 3 kozotti egesz szamot kerek",nulla_harom);
    return v;
}

