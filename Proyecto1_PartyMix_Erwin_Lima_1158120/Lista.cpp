#include "Lista.h"

void Lista::Add(String^ a, String^ n) {
	Nodo^ nuevo = gcnew Nodo();
	nuevo->artista = a;
	nuevo->nombre = n;
	if (IsEmpty()) {//Verifica si la estructura esta vacía
		head = nuevo;
		end = nuevo;
	}
	else {//Si la estructura no esta vacía, end apuntara al nuevo nodo
		end->sig = nuevo;
		end = nuevo;
	}
}

String^ Lista::GetNombre(int index) {//Recibe un indice
	if (index >= 0 && index < Count())//Verifica que el índice este en el rango correcto
	{
		Nodo^ temporal = head;
		int pos = 0;//Variable auxiliar

		while (pos < index)//Cuando pos sea igual a index sale del ciclo
		{
			temporal = temporal->sig;
			pos++;
		}

		return temporal->nombre;//Devuelve el valor deseado
	}
}

String^ Lista::GetArtista(int index) {
	if (index >= 0 && index < Count())
	{
		Nodo^ temporal = head;
		int pos = 0;

		while (pos < index)
		{
			temporal = temporal->sig;
			pos++;
		}

		return temporal->artista;
	}
}

void Lista::RemoveAtStart() {
	Nodo^ temporal = head;
	if (!IsEmpty())
	{
		head = head->sig;
		if (Count() == 1)
		{
			end = head;
		}
	}
}

void Lista::RemoveAtEnd() {
	Nodo^ temporal = end;
	if (!IsEmpty())
	{
		if (Count() == 1)
		{
			end = end->sig;
			head = end;
		}
		else {
			Nodo^ anterior = head;
			temporal = anterior->sig;
			while (temporal != end)
			{
				anterior = temporal;
				temporal = temporal->sig;
			}
			anterior->sig = temporal->sig;
			end = anterior;
		}
	}
}

void Lista::RemoveAt(int index) {
	Nodo^ temporal = head;
	if (!IsEmpty())
	{
		if (Count() == 1 || index == 0)
		{
			RemoveAtStart();
		}
		else {
			if (index >= Count())
			{
				RemoveAtEnd();
			}
			else {
				Nodo^ anterior = head;
				temporal = anterior->sig;
				int pos = 1;
				while (temporal != end && pos < index)
				{
					anterior = temporal;
					temporal = temporal->sig;
					pos++;
				}
				anterior->sig = temporal->sig;
			}
		}
	}
}

bool Lista::IsEmpty() {//Verifica si la lista esta vacía
	if (head == nullptr)
	{
		return true;//Si la cabeza apunta a null, la lista esta vacía
	}
	else {
		return false;
	}
}

int Lista::Count() {//Cuenta la cantidad de elementos en la lista
	int cantidad = 0;
	for (Nodo^ i = head; i != nullptr; i = i->sig)
	{
		cantidad++;
	}
	return cantidad;
}
