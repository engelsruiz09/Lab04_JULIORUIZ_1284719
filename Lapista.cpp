#include "Lapista.h"

void Lapista::createlapista() {
	for (int i = 0; i < 70; i++)
	{
		if (i == 69)
		{
			vechare[i] = -1;
			vectortoise[i] = -1;
		}
		else if (i==0)
		{
			vechare[i] = 1;
			vectortoise[i] = 1;
		}
		else
		{
			vechare[i] = 0;
			vectortoise[i] = 0;
		}
	}
}

void Lapista::imprimirpista(int p, int p2) {
	changeposhare(p);
	changepostortoise(p2);
}


void Lapista::changepostortoise(int p) {
	if ((3 < p || p == 3) && (p < 4 || p == 4)) {
		if (positiontortoise + 9 < 70) {
			vectortoise[positiontortoise - 1] = 0;
			positiontortoise += 9;
			vectortoise[positiontortoise - 1] = 1;
		}
		else {
			vectortoise[positiontortoise - 1] = 0;
			positiontortoise = 70;
			vectortoise[positiontortoise - 1] = 1;
		}
	}
	else if (p == 5) {
		if (positiontortoise - 12 > 0) {
			vectortoise[positiontortoise - 1] = 0;
			positiontortoise -= 12;
			vectortoise[positiontortoise - 1] = 1;
		}
		else {
			vectortoise[positiontortoise - 1] = 0;
			positiontortoise = 1;
			vectortoise[positiontortoise - 1] = 1;
		}
	}
	else if ((6 < p || p == 6) && (p < 8 || p == 8)) {
		vectortoise[positiontortoise - 1] = 0;
		positiontortoise += 1;
		vectortoise[positiontortoise - 1] = 1;
	}
	else if ((9 < p || p == 9) && (p < 10 || p == 10)) {
		if (positiontortoise - 2 > 0) {
			vectortoise[positiontortoise - 1] = 0;
			positiontortoise -= 2;
			vectortoise[positiontortoise - 1] = 1;
		}
		else {
			vectortoise[positiontortoise - 1] = 0;
			positiontortoise = 1;
			vectortoise[positiontortoise - 1] = 1;
		}
	}
}


Lapista::Lapista() {

}

Lapista::~Lapista() {

}