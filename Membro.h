#pragma once
#include "colecao.h"
#include <string>
using namespace std;

class Projeto;
class Membro {
public:
	Membro(int i, string n);
	bool associarProjeto(Projeto *p);
	void print()const;


};
