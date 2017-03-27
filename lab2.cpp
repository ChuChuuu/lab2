#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include "a.h"
using namespace std;
/*class Elo{
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
 */
int main(){
     float M_K ,M_Ra,M_Rb,M_Sa;
     
     ifstream infile("file.in");
     if(!infile){
       cerr << "failing opening"<<endl;
       exit(1);
     }
     ofstream outfile("file.out");
     if(!outfile){
       cerr << "failing writing" <<endl;
       exit(1);
     }
     infile >> M_K >> M_Ra >> M_Rb;
     outfile << M_Ra << "\t" << M_Rb << endl;
     float NRa,NRb;
     while(infile >> M_Sa){     
     Elo a(M_Ra,M_Rb,M_K,M_Sa);
     a.countE();
     NRa = a.NewRatingA();
     NRb = a.NewRatingB();
     //a.print();
     outfile << fixed <<setprecision(0) << NRa <<"\t"<< NRb <<endl;
     M_Ra = NRa;
     M_Rb = NRb;
     }
return 0;


   

}
