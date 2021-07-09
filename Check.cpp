#include "Check.h"

Check::Check(Buy b)
	:Buy(b)
{
}

void Check::print() const&
{
	ofstream file(this->getName() + ".txt");
	if (file.is_open())
	{
		file << "Product: " << this->getName()<<endl;
		file << "Cost: " << this->getCost()<<endl;
		file << "Weight: " << this->getWeight()<<endl<<endl;
		file << "Amount: " << this->getAmount() << endl;
		file << "Total price: " << this->calcTotalCost() << endl;
		file << "Total weight: " << this->calcTotalWeight() << endl;
		
	}
	file.close();
	cout << "Check is ready" << endl;

}
