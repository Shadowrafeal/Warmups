#include<iostream>
using namespace std;
int main() {
	char input;
	cout << "how many cookies do you want"<<endl;
		cin >> input;
		if (input <= 5)
			cout << "Are you they sure?"<<endl;
		if (input <= 10)
			cout << "cool here are your cookies." << endl;
		if (input >= 10)
			cout << "that two much dude."<<endl;

	
	

}