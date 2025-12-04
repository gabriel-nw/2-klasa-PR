//4.12.2025
//GNW
//Algorytm Kadane'a - wyznaczanie podci¹gu spójnego o najwiêkszej sumie dla n losowych liczb z przedzialu [-100,100]
#include <iostream>
#include <vector>
#include <ctime>
int main()
{
    srand(time(NULL));
    int x, n, suma=0, najw_suma=INT_MIN, pocz=0, pocz_najw, dl_najw=-1;
    vector<int> ciag;
    cin >> n;
    cout << "CIAG: " << endl;
    for (int i = 0; i < n; i++)
    {
        x = rand() % 201 -100;
        ciag.push_back(x);
        cout << x << endl;
    }
    for (int i = 0; i < n; i++)
    {
        if (suma + ciag[i] < ciag[i])
        {
            suma = ciag[i];
            pocz = i;
        }
        else
        {
            suma += ciag[i];
        }

        if (suma > najw_suma)
        {
            najw_suma = suma;
            pocz_najw = pocz;
            dl_najw = i - pocz + 1;
        }
    }
    cout << "Najwieksza suma = " << najw_suma << endl;
    cout << "Ciag o najwiekszej sumie: ";
    for (int i = 0; i < dl_najw; i++)
    {
        cout << ciag[pocz_najw + i] << " ";
    }
}
