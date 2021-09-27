#pragma once
using namespace System;

ref class Node
{
	String^ artista;
	String^ name;
	Node* ant;
	Node* sig;

	Node();
	~Node();
};

