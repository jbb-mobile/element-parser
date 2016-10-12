#include "element.hpp"
#include <string>

using namespace std;

 Element::Element(int id, pair<double, double> coordinates, string name, string description){
 	m_id = id;
 	m_coordinates = coordinates;
 	m_name = name;
 	m_description = description;

 }

int Element::getId(){
	return m_id;
}

pair<double, double> Element::getCoordinates(){
	return m_coordinates;
}

string Element::getName(){
	return m_name;
}

string Element::getDescription(){
	return m_description;
}