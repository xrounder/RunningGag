#ifndef _Vektor
#define _Vektor
#include "Matrix.h"
class Vektor :
	public Matrix
{
public:
	Vektor();
	virtual ~Vektor();
	float betrag();
	int skalarprodukt(Vektor vek);
	float winkel(Vektor vek);
};
#endif

