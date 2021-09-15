#pragma once
class Lapista
{
public :
	int vechare[70];//vectores
	int vectortoise[70];
	int* punhare = &vechare[69];//punteros
	int* puntortoise = &vectortoise[69];
	int positionhare = 1;
	int positiontortoise = 1;
public :
	void createlapista();
	void imprimirpista(int p, int p2);//p de pista xd
	void changeposhare(int p);
	void changepostortoise(int p);
	//constructor y destructor
	Lapista();
	~Lapista();
};

