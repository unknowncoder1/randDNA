#include <iostream>
#include <string>
#include <cstdlib> 
#include <random>


using namespace std;


string randDNA(int seed, string bases, int n) {
	mt19937 DNA(seed);

	int min = 0;
	int max = bases.size() - 1;
	uniform_int_distribution <> uniform(min, max);
	int index = 0;
	string result = "";
	for (int x = 0; x < n; x++) {
		index = uniform(DNA);
		result = result + bases[index];
	}
	return result;
}
