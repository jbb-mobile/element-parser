#include "element.hpp"

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main(){

	vector<Element> elements;
	ifstream elements_table;

	elements_table.open("doc/tabela_elementostrilha.txt");

	if(elements_table.is_open()){

		//elements_table.seekg (5);

	//	while(not elements_table.eof()){

		for(int j=0; j<4; ++j){
			string test[4];
			double a, b;

			for(int i=0; i<4; ++i){
				elements_table.seekg (1, elements_table.cur); // To remove tab space in line

				getline(elements_table, test[i]);

				if(i == 1 and test[i] != ""){
					stringstream ss;
					ss << test[i];
					string la, lb;
					ss >> a >> la >> b >> lb;
				}
			}
			int id = test[0][0]-'0';
			elements.push_back(*new Element(id, make_pair(a, b), test[2], test[3]));
		}

		elements_table.close();
	} else{
		cout << "Unable to open elements table." << endl;
	}

	for (Element element : elements){
		cout << element.getId() << endl;
		cout << element.getCoordinates().first << " " << element.getCoordinates().second << endl;
		cout << element.getName() << endl;
		cout << element.getDescription() << endl;
	}

	return 0;
}
