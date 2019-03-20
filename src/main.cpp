#include <iostream>
#include <string>
#include "rdna.hpp"

using namespace std;

int main()
{
    int seed = -1, n = -1;
    string bases = "";


    cout<<"Welcome to the DNA generator,Please enter a seed"<< endl; 
    cin>>seed;
    cout << "The letter bases to be used (e.g. TGAC) "<< endl; 
    cin>>bases;
    cout << "the length of the DNA sequence to be generated>>> "<< endl;  

    cin>>n;//read the three inputs

    cout <<"\n\nOutput:\n\t"<<randDNA(seed,bases,n)<<endl; //print output  
}

