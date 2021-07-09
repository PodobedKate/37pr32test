#include "Product.h"
#include "Buy.h"
#include "Check.h"

int main()
{
	Product a;
	Product b("Potatoes",1500,30);
	a.showInfo();
	b.showInfo();
	cout << "==========================\n";
	Buy b1;
	Buy b2(b,3);
	b1.show();
	b2.show();
	cout << "==========================\n";
	Check c1(b1);
	Check c2(b2);
	c1.print();
	c2.print();
}