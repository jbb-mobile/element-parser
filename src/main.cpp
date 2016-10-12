#include <iostream>
#include "element.hpp"

using namespace std;

int main(){

	Element *element = new Element(1, make_pair(-195.8, 178.7), "Lala", "Qualquer");

	cout << element->getId() << endl;
	cout << element->getCoordinates().first << " " << element->getCoordinates().second << endl;
	cout << element->getName() << endl;
	cout << element->getDescription() << endl;

	return 0;
}