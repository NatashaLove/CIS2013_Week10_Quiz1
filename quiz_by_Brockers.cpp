#include <iostream>
#include <string>
using namespace std;

int main () {
int cnt;
string sentence;

cout << "Type your sentence: " <<endl;

getline(cin, sentence);

	for (int x=0; x<= sentence.length(); x++){
		
		if (sentence[x]=='b') {
			cnt++;
			if (cnt%2==1){
				cout << "SIT";
			}else {
				cout << "STAND";
			}
			
			//cout << "SOMETHING ELSE";
			
		} else {
			cout << sentence [x];
			
		}
		
		
		
	//cout << sentence[x];
	}

	return 0;
}