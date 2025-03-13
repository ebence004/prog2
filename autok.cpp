#include <iostream>

using namespace std;

int main() {

    struct autok {
        string rendszam;
        string marka;
        string tipus;
        short int evjarat;
    }autok[10];

    autok[0].rendszam = "ASD-123";
    autok[0].marka = "Opel";
    autok[0].tipus = "Vectra";
    autok[0].evjarat = 1988;

    autok[1].rendszam = "QWE-987";
    autok[1].marka = "Toyota";
    autok[1].tipus = "Prius";
    autok[1].evjarat = 1997;

    autok[2].rendszam = "FGH-567";
    autok[2].marka = "Ferrari";
    autok[2].tipus = "Enzo";
    autok[2].evjarat = 2002;

    autok[3].rendszam = "LLK-556";
    autok[3].marka = "Ford";
    autok[3].tipus = "Mondeo";
    autok[3].evjarat = 1993;

    string bekert_rendszam;
    int autok_szama = 4;

    cout << "Adjon meg egy rendszámot: ";
    cin >> bekert_rendszam;
    

    for (int i = 0; i < autok_szama; i++)
    {
        if (autok[i].rendszam == bekert_rendszam) {
            cout << "A bekért rendszámhoz tartozik egy" << " " << autok[i].evjarat <<" évjáratú "<<
            autok[i].marka << " " << autok[i].tipus << endl;
            break;
        }else{
            cout << "nincsen ilyen rendszámú autó" << endl;
            break;
        }
    }

    return 0;
}