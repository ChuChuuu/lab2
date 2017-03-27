//#include <iostream>
//#include <cmath>
//#include <iomanip>
//#include <fstream>
//#include <cstdlib>
#include "a.h"
//using namespace std;


Elo :: Elo(float C_Ra,float C_Rb,float C_K,float C_Sa){
    Ra = C_Ra;
    Rb = C_Rb;
    K = C_K;
    Sa = C_Sa;
    Sb = 1-C_Sa;
}

void Elo :: countE(){
     Ea = 1 / (1+pow(10,(Rb - Ra)/400));
     Eb = 1 / (1+pow(10,(Ra - Rb)/400));
 return ;
}

float Elo :: NewRatingA(){
      return (Ra + K*(Sa-Ea));
}

float Elo :: NewRatingB(){
      return (Rb + K*(Sb-Eb));
}
