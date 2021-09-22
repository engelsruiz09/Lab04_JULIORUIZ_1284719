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
void Lapista::changeposhare(int p) {// este procedimiento si lo colocaba con la tortuga la tortuga se imprimia mas de una vez entonces tuve que cambiar el de la tortuga a la liebre y asi pero es practicamente lo mismo y asi fue que me corrio bien :( compasion ::((((
	if ((1 < p || p == 1) && (p < 5 || p == 5)) {
		vechare[positionhare - 1] = 0;
		positionhare += 3;
		vechare[positionhare - 1] = 1;
	}
	else if ((6 < p || p == 6) && (p < 7 || p == 7)) {
		if (positionhare - 6 > 0) {
			vechare[positionhare - 1] = 0;
			positionhare -= 6;
			vechare[positionhare - 1] = 1;
		}
		else {
			vechare[positionhare - 1] = 0;
			positionhare = 1;
			vechare[positionhare - 1] = 1;
		}
	}
	else if ((8 < p || p == 8) && (p < 10 || p == 10)) {
		vechare[positionhare - 1] = 0;
		positionhare += 1;
		vechare[positionhare - 1] = 1;
	}
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