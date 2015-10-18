#include "Vektor2D.h"

Vektor2D::Vektor2D(int x, int y)
{
	m_Element[0] = x;
	m_Element[1] = y;

}

Vektor2D::Vektor2D()
{
}


Vektor2D::~Vektor2D()
{
}


void Vektor2D::addiere(Vektor2D v)
{
	m_Element[0] += v.m_Element[0];
	m_Element[1] += v.m_Element[1];

}


void Vektor2D::kopiereIn(Vektor2D* zielvar)
{
	*zielvar = *this;

}

void tausche(Vektor2D *a, Vektor2D *b)
{
	Vektor2D temp = *a;
	b->kopiereIn(a);
	temp.kopiereIn(b);

}