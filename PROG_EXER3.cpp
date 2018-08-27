// Bag of rice
#include <iostream>
using namespace std;


int main ()
{
	int ton = 2205;
	float amount_rice;
	float bags;
	
	cout << "Enter the amount of rice in a bag (pounds):";
	cin >> amount_rice;
	
	bags = ton / amount_rice;
	
	cout << "You need only " << bags << "number of bag to store one metric ton of rice";
	
	
	return 0 ;
	
}
	
