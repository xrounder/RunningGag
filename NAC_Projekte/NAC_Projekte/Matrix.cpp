#include "Matrix.h"
#include <iostream>



Matrix::Matrix()

	:m_Zeilen(2),
	m_Spalten(1)

{

	for (int i = 0; i < m_Zeilen*m_Spalten; i++) {

		m_Element[i] = 0;
	}
	std::cout << "Standardkonstruktor von Matrix wurde aufgerufen" << std::endl;
}


Matrix::~Matrix()
{
	std::cout << "Matrix ";
	ausgabe(); 
	std::cout << " wird zerstoert" << std::endl;
}


void Matrix::ausgabe()
{
	for (int i = 0; i < m_Zeilen*m_Spalten; i++) {

		std::cout << m_Element[i] << " " ;
	}
	std::cout << std::endl;
}
