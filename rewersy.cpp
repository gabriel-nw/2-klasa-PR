#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
//u¿ycie znaku & przy argumencie funkcji mówi, ¿e argument przekazany jest przez referencje, tzn. funkcja dzia³a na oryginalnej zmiennej, nie na jej kopii.
//funkcja rewers zamienia i.ty znak w ci¹gu z n-i-1.wszym znakiem, np. pierwszy z ostatnim, drugi z drugim od koñca itd.
void rewers(string &tekst)
{
	for (int i = 0; i < tekst.length() / 2; i++)
		swap(tekst[i], tekst[tekst.length() - 1 - i]);
}
int rewers_liczby(int liczba)
{
	int rewers=0;
	while (liczba > 0)
	{
		rewers *= 10;
		rewers += liczba % 10;
		liczba /= 10;
	}
	return rewers;
}
int main()
{
	string tekst = "Gabriel";
	//wykonanie rewersu ci¹gu znaków wykorzystuj¹c funkcje reverse z biblioteki <algorithm>
	reverse(tekst.begin(), tekst.end());
	cout << tekst;//wypisuje rewers imienia Gabriel
	//wykonanie rewersu ci¹gu znaków wykorzystuj¹c napisan¹ przez nas funkcje rewers
	rewers(tekst);
	cout << tekst;//wypisuje rewers rewersu imienia Gabriel

	int liczba = 123;
	//wykonanie rewersu liczby wykorzystuj¹c napisan¹ przez nas funkcje rewers_liczby
	cout << rewers_liczby(liczba);
	////wykonanie rewersu liczby jako przekonwertowanej do zmiennej string (funkcja to_string()) wykorzystuj¹c funkcje reverse z biblioteki <algorithm>
	tekst = to_string(liczba);
	reverse(tekst.begin(), tekst.end());
	cout << tekst;
}

