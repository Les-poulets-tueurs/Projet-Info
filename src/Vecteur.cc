#include <iostream>
#include <cmath>
//#include <vector>
//#include <array>
//#include <string>
//#include <fstream>
//#include <iomanip>
//#include <limits>

#include <Vecteur.h>


using namespace std;


void Vect::augmente(double nwCoord){
	components.push_back(nwCoord);
}

void Vect::print(){
	cout << endl << "("
	for(size_t i(0);i<components.size();++i){
		cout << x;
		if(i<components.size()-1){
			cout << " , ";
		}
	}
	cout << ")";
}

bool Vect::compare(Vect v2){
	//dimTest
	for(size_t i(0);i<components.size();i++){
		if(components[i]!=v2.components[i]){
			return false;
		}
	}
	return true;
}

Vect Vect::add(Vect v2){
	//dimTest
	Vect out;
	for(size_t i(0);i<components.size();i++){
		out.components.push_back(components[i]+v2.components[i]);
	}
	return out;
}

Vect Vect::subtract(Vect v2){
	//dimTest
	return add(v2.opposite());
	
}

Vect Vect::opposite(){
	Vect out;
	for(auto x : components){
		out.components.push_back(-x)
	}
	return out;
}

Vect Vect::mult(double lambda){
	Vect out;
	for(auto x : components){
		out.components.push_back(lambda*x);
	}
}

double Vect::scalarProduct(Vect v2){
	//dimTest
	double out(0);
	for(size_t i(0);i<components.size();i++){
		out+=components[i]*v2.components[i];
	}
	return out;
}

Vect Vect::vectProduct(Vect v2){
	//dim==3
	//dimTest
	
	Vect out;
	for(size_t i(0);i<components.size();i++){
		out.components.push_back(components[(i+1)%3]*v2.components[(i+2)%3]-
									components[(i+2)%3]*v2.components[(i+1)%3]);
	}
	return out
}

double Vect::normSqr(){
	double out(0);
	for(auto x : components){
		out+=pow(x,2);
	}
	return out
}

double Vect::norm(){
	return sqrt(normSqr());
}

bool Vect::dimTest(Vect v2){
	if(components.size()==v2.components.size()){
		return true;
	}
	return false;
}

