#include <iostream>
#include <string>

using namespace std;

string GetPlayerName()
{
	string Name;
	cout << "\n What is your Name? \n";
	getline(cin, Name);

	return Name;
}

string getGoldAmount()
{
	// set total gold to 1000
	int totalGold = 1000;

	// ask player how much they take
	string GoldForPlayer;
	cout << "\n How much do you take for yourself? \n";
	getline(cin, GoldForPlayer);



	// calculate whats left for rest of group
	// int goldForOthers = totalGold - GoldForPlayer;

	// then display results
	cout << "You took: " << GoldForPlayer << endl;
	// cout << "The group recieved: " << goldForOthers << endl;

	return GoldForPlayer;
}