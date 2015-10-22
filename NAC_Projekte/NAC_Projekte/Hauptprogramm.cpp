#include "Matrix.h"
#include "Vektor.h"
#include "iostream"
#include "Vektor2D.h"
void tausche(Vektor2D *a, Vektor2D *b);

using namespace std;

int main(int argc, char* argv[]) {

	/*Matrix m1;
	m1.ausgabe();

	Vektor v1;
	float betrag = v1.betrag();
	cout << betrag <<endl;

	Vektor2D vek(1, 2);
	vek.ausgabe();
	cout << "Betrag " << vek.betrag() << endl;

	Vektor2D vek2(2, 3);
	vek.addiere(vek2);

	vek.ausgabe();
	cout << "Betrag " << vek.betrag() << endl;*/


	/*Testprogramm*/
	/*cout << "Test:" << endl;

	Vektor2D a(3, 1), b(1, 2), c;
	c.addiere(a);
	c.ausgabe();

	b.addiere(c);
	b.ausgabe();

	b.betrag();
	cout << "Betrag der Summe: " << b.betrag() << endl;

	/*PU3*/
	/*cout << "----PU3----" << endl;
	Vektor2D* z = new Vektor2D(-3, 1);
	Vektor2D* w = new Vektor2D;
	a.addiere(*z);
	cout << "Vektor a: ";
	a.ausgabe();

	w->addiere(*z);
	cout << "Vektor w: ";
	(*w).ausgabe();

	w->addiere(b);
	cout << "Vektor w: ";
	w->ausgabe();

	Vektor2D u(1, 2);
	u.kopiereIn(w);
	u.kopiereIn(&a);

	w->ausgabe();
	a.ausgabe();

	cout << "z vor tausch ";
	z->ausgabe();
	cout << "a vor tausch ";
	a.ausgabe();

	tausche(z, &a);

	cout << "z nach tausch ";
	z->ausgabe();
	cout << "a nach tausch ";
	a.ausgabe();


	delete z;
	delete w;*/
	
	//PU4
	Vektor2D v(1, 2), w(3, 4);
	Matrix m;
	Matrix* mpointer;

	m = v;
	mpointer = &v;

	cout << "Ausgabe von M und über Mpointer" << endl;
	m.ausgabe();
	mpointer->ausgabe();

	v.addiere(w);
	cout << "Ausgabe von v nach Addieren" << endl;
	v.ausgabe();

	cout << "Ausgabe von M/Mpointer nach Add." << endl;
	m.ausgabe();
	mpointer->ausgabe();

	return 0;
}
