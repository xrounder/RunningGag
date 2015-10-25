#include "Matrix.h"
#include <iostream>
#include <clocale>

int Matrix::counter = 0;

Matrix::Matrix()

	:m_Zeilen(2),
	m_Spalten(1)

{
	std::setlocale(LC_ALL, "german");
	for (int i = 0; i < m_Zeilen*m_Spalten; i++) {

		m_Element[i] = 0;
	}
	std::cout << "Standardkonstruktor von Matrix wurde aufgerufen" << std::endl;
	counter++;
}


Matrix::~Matrix()
{
	
	std::cout << "Matrix ";
	ausgabe(); 
	std::cout << " wird zerstört" << std::endl;
	counter--;
}


void Matrix::ausgabe()
{
	for (int i = 0; i < m_Zeilen*m_Spalten; i++) {

		std::cout << m_Element[i] << " " ;
	}
	std::cout << std::endl;
}

int Matrix::getCounter()
{
	return counter;
}
