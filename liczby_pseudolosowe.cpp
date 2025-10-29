#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
int main()
{
    //szybki przyk³ad wype³nienia tablicy wektorowej o rozmiarze n liczbami pseudolosowymi z zakresu [a,b]
    srand(time(NULL));
    int a, b, n,x;
    vector<int> tablica;
    cout << "Podaj rozmiar tablicy oraz zakres [a,b] losowanych liczb: ";
    cin >> n>> a >> b;
    for (int i = 0; i < n; i++)
    {
        x = rand() % (b - a + 1) + a;
        tablica.push_back(x);
        cout << tablica[i] << " ";
    }


}
