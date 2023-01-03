#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main(){
  double sumx = 0;
  double count = 0;
  double sum = 0;
  string textline;
  ifstream source("score.txt");
  while(getline(source, textline))
  {
    sum += atof(textline.c_str());
    sumx += pow(atof(textline.c_str()),2);
    count ++;
  }
    cout << "Number of data = " << count;
    cout << setprecision(3);
    double mean,sd;
    mean = sum/count;
    sd =  sqrtl((sumx/count)-pow(mean,2));

  
    cout << "\nMean = " << mean;
    cout << "\nStandard deviation = " << sd;
}