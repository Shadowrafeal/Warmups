#include<iostream>
using namespace std;
int main() {
	char input;
	int FireDragon = 0;
	int WaterDragon = 0;
	int DarkDragon = 0;
	int EarthDragon = 0;
	cout << "Hello young people of world today we will found out what dragon you are." << endl << endl << endl;
	cout << "Where would you want to live" << endl;
	cout << " S Seashore, 'V' Volcano, 'C' Cave 'M' Mountain)" << endl;
	cin >> input;
	if (input == 'S')
		WaterDragon += 2;
	else if (input == 'V')
		FireDragon += 2;
	else if (input == 'C')
		DarkDragon += 2;
	else if (input == 'M')
		EarthDragon += 2;

	cout << "What is your favorite color?" << endl;
	cout << " R Red , 'B' Blue, 'B'Black 'G' Green)" << endl;
	cin >> input;
	if (input == 'B')
		WaterDragon += 2;
	else if (input == 'R')
		FireDragon += 2;
	else if (input == 'B')
		DarkDragon += 2;
	else if (input == 'G')
		EarthDragon += 2;

	cout << "Still with me now to next question what is your favorite sport " << endl;
	cout << " F Football, 'S' Soccer, 'H' Hockey 'G' Golf)" << endl;
	cin >> input;

	if (input == 'F')
		WaterDragon += 1;
	else if (input == 'S')
		FireDragon += 1;
	else if (input == 'H')
		DarkDragon += 1;
	else if (input == 'G')
		EarthDragon += 2;

	cout << "What do you value " << endl;
	cout << " V Valor, 'W' Wisdom, 'K' Kindness 'P' Power)" << endl;
	cin >> input;

	if (input == 'K')
		WaterDragon += 1;
	else if (input == 'P')
		FireDragon += 1;
	else if (input == 'W')
		DarkDragon += 1;
	else if (input == 'V')
		EarthDragon += 2;

	cout << "What do you do on your free time? " << endl;
	cout << " R read, 'C' Clean, 'S' Sleep 'P' Play)" << endl;
	cin >> input;

	if (input == 'R')
		WaterDragon += 2;
	else if (input == 'P')
		FireDragon += 2;
	else if (input == 'S')
		DarkDragon += 2;
	else if (input == 'C')
		EarthDragon += 2;

	cout << "Half way there just hang on but our next question is how good of a person are you ? " << endl;
	cout << " N Not at all, 'A' Normal, 'P' Pretty nice 'S' Saint)" << endl;
	cin >> input;

	if (input == 'S')
		WaterDragon += 2;
	else if (input == 'A')
		FireDragon += 2;
	else if (input == 'N')
		DarkDragon += 2;
	else if (input == 'P')
		EarthDragon += 2;


	cout << "What is your personality? " << endl;
	cout << " S Playful and full of life, 'V' Quiet and Kind, 'C' Loud and Rude 'M' Wise Quiet)" << endl;
	cin >> input;

	if (input == 'V')
		WaterDragon += 2;
	else if (input == 'C')
		FireDragon += 2;
	else if (input == 'M')
		DarkDragon += 2;
	else if (input == 'S')
		EarthDragon += 2;

	cout << "What is your Favorite animal? " << endl;
	cout << " S Hawk, 'V' Wolf, 'C' Crow 'M' Lion)" << endl;
	cin >> input;

	if (input == 'V')
		WaterDragon += 2;
	else if (input == 'M')
		FireDragon += 2;
	else if (input == 'C')
		DarkDragon += 2;
	else if (input == 'S')
		EarthDragon += 1;

	cout << "How many wings do you want? " << endl;
	cout << " S None, 'V' Two, 'C' Four 'M' Six)" << endl;
	cin >> input;

	if (input == 'S')
		WaterDragon += 2;
	else if (input == 'V')
		FireDragon += 2;
	else if (input == 'M')
		DarkDragon += 2;
	else if (input == 'C')
		EarthDragon += 1;

	cout << "How bad was this quiz? " << endl;
	cout << " S Bad, 'V' Super Bad , 'C' Ok 'M' Amazing)" << endl;
	cin >> input;


	if (input == 'S')
		WaterDragon += 0;
	else if (input == 'V')
		FireDragon += 0;
	else if (input == 'M')
		DarkDragon += 0;
	else if (input == 'C')
		EarthDragon += 0;

	if ((WaterDragon > FireDragon) && (WaterDragon > DarkDragon) && (WaterDragon > EarthDragon))
		cout << "your a WaterDragon."<<endl;
	else if ((FireDragon > WaterDragon) && (FireDragon > DarkDragon) && (FireDragon > EarthDragon))
		cout << "your a FireDragon"<<endl;
	else if ((DarkDragon > WaterDragon) && (DarkDragon > FireDragon) && (DarkDragon > EarthDragon))
		cout << "your a DarkDragon" << endl;
	else if ((EarthDragon > WaterDragon) && (EarthDragon > FireDragon) && (EarthDragon > DarkDragon))
		cout << "your a EarthDragon" << endl;
	
}
