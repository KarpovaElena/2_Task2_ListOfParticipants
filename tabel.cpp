#include <iostream>
#include "tabel.h"
using namespace std;



Tabel::Tabel()
{
}

void Tabel::loadnames(string fnames){
	std::ifstream fle;
	fle.open(fnames, std::ios_base::in);
	if (!fle.is_open()) throw - 1;
	std::string st;
	while (!fle.eof()) {
		char a;
		fle.get(a);
		if (a == ';' || a == ',') {
			names.push_back(st);
			st = "";
			continue;
		}
		if (a == '\n' || a == '\r') continue;
		st += a;
	}

}
  
void Tabel::updatePresense(vector<vector<int>> tp){
	presents = tp;
}

string Tabel::getName(int pos){
	return (pos< names.size()) ?  names[pos] : "";
}

int Tabel::getNameNumber(){
	return names.size();
}
  
int Tabel::getLessonsNumber(){
	if(presents.empty()) return -1;
	return presents[0].size();
}
	
int Tabel::isStudentPresent(int pos, int daynum){
	return presents[pos][daynum];

}


