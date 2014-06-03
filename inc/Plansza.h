#ifndef PLANSZA_H
#define PLANSZA_H

#include "Pionek.h"
#include "Bialy_pionek.h"



class Plansza
{
public:
	int **plansza;

	Plansza();
	int Wczytaj_x();
	int Wczytaj_y();
	int Lokalizuj(Bialy_pionek Biale[12], int x, int y);
	void Wypisz_pionki(Bialy_pionek Biale[12]);

	// po co tutaj argument funkcji? usunąłem
	void Pokaz_plansze();

	char Konwertuj(int numer);
};


#endif
