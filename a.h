#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <cmath>
using namespace std;
class Elo{
public:
   
   Elo(float C_Ra , float C_Rb , float C_K, float C_Sa);
   void countE();
   float NewRatingA();
   float NewRatingB();

private:

float Ra ,Rb , K;
float Ea , Eb;
float Sa , Sb;
};

