#include <vector>
#include <iostream>
#include "recogniser.h"
#include "tabel.h"
using namespace std;
int k;

void ver()
{
  
}

void exam()
{
  if (0<=k<=50)
  {
    cout << "MARK 3";
  }
  else
  {
    if (k<=60)
    {
      cout << "MARK 4";
    }
    else
    {
      if (k<=100)
      {
        cout << "MARK 5";
      }
      else cout << "ERROR";
     }
   }
}

int main()
{
  Recognizer t;
  vector<vector<int>> data;

  t.load("5.jpg");
  data = t.recognise();

  cout<< "test testOfRecogniserCreation - OK"<<endl;
  Tabel a;
  a.loadnames("list.txt");
  a.updatePresense(data);  
}
