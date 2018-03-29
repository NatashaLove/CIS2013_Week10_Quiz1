#include <iostream>
#include <string>
using namespace std;

int main () {

	string input= "x";
	//char even ="STAND";
	//char odd ="SIT";
	int b=0;
	
	cout << endl;
	cout<< "Hello! Enter a phrase containing letter 'b' :" << endl;
	cout << endl;
	
	getline (cin, input);
	cout<< endl;
	
	cout<< input;
	
	cout<< endl;
	cout <<endl;
	
	for (int i=0; i<=input.length(); i++) {

		if (input[i]=='b') {
			b++;
			
			if (b%2==0){
				
				cout << "STAND";
			}
			else if (b%2==1){
				
				cout << "SIT";
			}
		} else {
			cout << input[i];
		}
	}
	cout <<endl;

	// cout << "amount of 'b' is " << b << endl;
	// cout << input<< endl;
	
	return 0;
}