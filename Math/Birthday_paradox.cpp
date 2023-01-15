// C++ program to approximate number of people in Birthday Paradox
// problem
#include <cmath>
#include <iostream>
using namespace std;

// Returns approximate number of people for a given probability
int find(double p)
{
	return ceil(sqrt(2*365*log(1/(1-p))));
    //CPP. ceil(x) : Returns the smallest integer that is greater than or equal to x (i.e : rounds up the nearest integer).
}

int main()
{
cout << find(0.50);// pass the percentage 50%== 23
}
