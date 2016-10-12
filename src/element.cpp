#include "element.hpp"
#include <string>

using namespace std;

 Element::Element(int id, pair<double, double> coordinates, string name, string description){
 	this->id = id;
 	this->coordinates = coordinates;
 	this->name = name;
 	this->description = description;

 }

int Element::getId(){
	return id;
}

pair<double, double> Element::getCoordinates(){
	return coordinates;
}

string Element::getName(){
	return name;
}

string Element::getDescription(){
	return description;
}
