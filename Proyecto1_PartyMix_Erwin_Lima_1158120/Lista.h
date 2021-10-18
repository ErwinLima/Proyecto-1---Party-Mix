#pragma once
#include "Nodo.h"

ref class Lista
{
public:
	Nodo^ head;
	Nodo^ end;	
	
	void Add(String^ a, String^ n);
	int Count();
	String^ GetNombre(int index);
	String^ GetArtista(int index);
	void RemoveAtStart();
	void RemoveAtEnd();
	void RemoveAt(int index);
	bool IsEmpty();
};

