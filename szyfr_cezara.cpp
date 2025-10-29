#include <iostream>
#include <string>
using namespace std;

//SZYFR CEZARA
//funkcja szyfruj¹ca przesuwa ka¿dy znak o klucz w prawo
string f_szyfrujaca(string haslo, int klucz)
{
    string szyfr = haslo;

    for (int i = 0; i < szyfr.length(); i++)
    {
        //male litery
        if (szyfr[i] >= 'a' and szyfr[i] <= 'z')
            szyfr[i] = (szyfr[i]-'a' + klucz%26)%26 + 'a';
        //duze litery
        if (szyfr[i] >= 'A' and szyfr[i] <= 'Z')
            szyfr[i] = (szyfr[i] - 'A' + klucz % 26) % 26  + 'A';
    }
    return szyfr;
}
//funkcja deszyfruj¹ca przesuwa ka¿dy znak o klucz w lewo
string f_deszyfrujaca(string szyfr, int klucz)
{
    string haslo = szyfr;
    for (int i = 0; i < haslo.length(); i++)
    {
        //male litery
        if (haslo[i] >= 'a' and haslo[i] <= 'z')    
            haslo[i] = (haslo[i]-'a' - klucz%26+26)%26+'a';
        //duze litery
        if (haslo[i] >= 'A' and haslo[i] <= 'Z')
            haslo[i] = (haslo[i] - 'A' - klucz % 26+26) % 26 + 'A';
    }
    return haslo;
}
int main()
{
    //wskazówka: jeœli chcemy za pomoc¹ cin wprowadziæ ci¹g znaków oddzielonych spacjami jako jeden ci¹g, nale¿y u¿yæ komendy getline (cin, zmienna);, gdzie zmienna to nazwa zmiennej, do której chcemy przypisaæ wpisany z klawiatury ci¹g
    string inf_zaszyfrowana;
    inf_zaszyfrowana = "Yvgjb!Bwpmlmab zbwn!gl wrfgrf wnx mqebjvr.Vyr pvr gemron pravp, gra glyxb fvr qbjvr, Xgb pvr fgenpvy.Qmvf cvrxabfp gjn j pnyrw bmqbovr Jvqmr v bcvfhwr, ob grfxavr cb gbovr.";
    cout << inf_zaszyfrowana << endl;
    //wygenerowanie wszystkich mo¿liwych deszyfrów dla kluczy 1-25
    for (int i = 1; i <= 25; i++)
    cout << f_deszyfrujaca(inf_zaszyfrowana, i) << endl << endl;
    
}
