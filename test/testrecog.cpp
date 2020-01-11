#include <vector>
#include <iostream>
#include <fstream>
#include "recogniser.h"
#include "tabel.h"

using namespace std;

void testOfRecogniserCreation()
{	
  ofstream file;
  Recognizer recog;
  vector<vector<int>> data;
  Tabel tbl;
  tbl.loadnames("list_of_surnames_1.txt");
  recog.load("table_1.jpg");
  data = recog.recognise();
  if (!data.empty())
   {
    tbl.updatePresense(data);
    file.open("test_1.txt", ofstream::out | ofstream::trunc);
    // ofstream::out открытие потока вывода
    // ofstream::trunc обуславливает уничтожение содержимого файла с заданным именем и усечение дли­ны файла до нуля.
	for (int j = 0; j < tbl.getNameNumber(); ++j)
	  {
	   file << j << ". "<<tbl.getName(j)<<" ";
	     for (int k = 0; k < tbl.getLessonsNumber(); ++k)
	       {
	        if (tbl.isStudentPresent(j,k) == 1) file << "+|";
	        else file << " |";
	       }
	   file << "\n";
	  }
	file.close();
   }
  cout<< "test testOfRecogniserCreation - OK"<<endl;
}
 
int main()
{
  testOfRecogniserCreation();
}
