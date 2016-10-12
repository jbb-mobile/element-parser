#ifndef ELEMENT_HPP
#define ELEMENT_HPP

#include <string>

using namespace std;

class Element{

private:
	int id;
	pair<double, double> coordinates;
	string name;
	string description;

public:
	Element(int id, pair<double, double> coordinates, string name, string description);

	int getId();
	pair<double, double> getCoordinates();
	string getName();
	string getDescription();
};

#endif
