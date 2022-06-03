#include "Triangle.h"
#include "Rectangle.h"
#include "Polygon.h"
#include "Pentagon.h"

int main() {
	Pentagon f3;
	//f3.inputPe();
	f3.set_name("Pentagon");
	f3.lengthPe();
	f3.squarePe();
	f3.perimeterPe();
	f3.isopPe();

	cout << "--------------------------------------------------" << endl;
	Polygon f2;
	//f2.inputPo();
	f2.set_name("Polygon");
	f2.lengthPo();
	f2.perimeterPo();
	f2.squarePo();
	f2.isopPo();

	cout << "--------------------------------------------------" << endl;

	Triangle f;
	//f.inputT();
	f.set_name("Triangle");
	f.lengthT();
	f.perimeterT();
	f.squareT();
	f.isopT();

	cout << "--------------------------------------------------"<<endl;

	Rectangle f1;
	//f1.inputR();
	f1.set_name("Rectangle");
	f1.lengthR();
	f1.perimeterR();
	f1.squareR();
	f1.isopR();

	

	

}