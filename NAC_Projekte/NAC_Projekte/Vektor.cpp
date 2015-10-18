#include "Vektor.h"
#include <math.h>
#include <iostream>
#include "Vektor2D.h"


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
	for (int i = 0; i < m_Zeilen*m_Spalten; i++) {

		betrag += m_Element[i] * m_Element[i];
	}
	return sqrt(betrag);
}


