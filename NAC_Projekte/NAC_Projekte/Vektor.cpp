#define _USE_MATH_DEFINES
#include "Vektor.h"
#include <math.h>
#include <iostream>
#include "Vektor2D.h"
#include "limits"

Vektor::Vektor()
{
	std::cout << "Standardkonstruktor von Vektor aufgerufen" << std::endl;
}


Vektor::~Vektor()
{
}


float Vektor::betrag()
{
	float betrag = 0;
	Vektor* self= new Vektor;
	self = this;
	betrag = skalarprodukt(*self);
	
	return sqrt(betrag);
}

int Vektor::skalarprodukt(Vektor vek) {

	if (sizeof(m_Element) == sizeof(vek.m_Element)) {
		int produkt = 0;
		for (int i = 0; i < m_Zeilen; i++)
		{
			produkt += m_Element[i] * vek.m_Element[i];

		}
		return produkt;
	}
	else {
		return std::numeric_limits<float>::quiet_NaN();
	}
	
}

float Vektor::winkel(Vektor vek) {

	if (sizeof(m_Element) == sizeof(vek.m_Element)) {
		float winkel = 0;

		winkel = acosf(skalarprodukt(vek)/(betrag()*vek.betrag()));
		return winkel*(360/(2*M_PI));
	}
	else {
		return std::numeric_limits<float>::quiet_NaN();
	}
}


