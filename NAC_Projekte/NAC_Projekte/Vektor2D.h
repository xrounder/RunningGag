#ifndef _Vektor2D
#define _Vektor2D
#include "Vektor.h"
class Vektor2D :
	public Vektor
{
public:
	Vektor2D();
	Vektor2D(int x, int y);
	void addiere(Vektor2D v);
	void kopiereIn(Vektor2D* zielvar);
	virtual ~Vektor2D();
};
#endif

