//Napisz program, który wczyta dwie liczby ca³kowite a i b reprezentujace ulamek a/b
//A nastêpnie wypisze ten ulamek w najprostszej postaci
#include <iostream>
using namespace std;
int NWD_r(int a, int b)
{
    if (a % b == 0)
        return b;
    else
        NWD_r(b, a % b);
}
int NWD(int a, int b)
{
    if (a < b)
        swap(a, b);
    while (a % b != 0)
    {
        int temporary=b;
        b = a % b;
        a = temporary;
    }
    return b;
}
void skroc_ulamek(int a, int b)
{
    int licznik=a/NWD(a,b), mianownik=b/NWD(a,b);
    cout << licznik << endl << "-" << endl << mianownik<<endl;
}
void oblicz(int l1, int m1, int l2, int m2, char dzialanie)//wykonuje dzialanie na dwoch liczbach
{
    int licznik, mianownik, nwd, nww;
    if (dzialanie == '+')
    {
        nww = m1 * m2 / NWD(m1, m2);//nowy mianownik
        mianownik = nww;
        licznik = (l1 * nww / m1) + (l2 * nww / m2);
        cout << licznik << endl << "-" << endl << mianownik << endl;
    }
    else if (dzialanie == '-')
    {
        nww = m1 * m2 / NWD(m1, m2);//nowy mianownik
        mianownik = nww;
        
        licznik = (l1 * nww / m1) - (l2 * nww / m2);
        cout << licznik << endl << "-" << endl << mianownik << endl;
    }
    else if (dzialanie == '*')
    {
        licznik = l1 * l2;
        mianownik = m1 * m2;   
        //skrocenie wyniku
        nwd = NWD(licznik, mianownik);
        licznik = licznik / nwd;
        mianownik = mianownik / nwd;
        
        cout << licznik << endl << "-" << endl << mianownik<<endl;
    }
    else if (dzialanie == '/')
    {
        licznik = l1 * m2;
        mianownik = m1 * l2;
        //skrocenie wyniku
        nwd = NWD(licznik, mianownik);
        licznik = licznik / nwd;
        mianownik = mianownik / nwd;

        cout << licznik << endl << "-" << endl << mianownik << endl;
    }
}
int main()
{
    //cout << NWD(282, 78)<<endl;
    //skroc_ulamek(3, 2);
    oblicz(1, 7, 2, 3, '+' );
    //3
    //-
    //2
}
