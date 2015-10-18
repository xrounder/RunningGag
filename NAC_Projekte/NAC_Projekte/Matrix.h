#ifndef _Matrix
#define _Matrix
class Matrix
{
public:
	Matrix();
	virtual ~Matrix();
protected:
	int m_Zeilen;
	int m_Spalten;
	float m_Element[2];
public:
	void ausgabe();
};
#endif

