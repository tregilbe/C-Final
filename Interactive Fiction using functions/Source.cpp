#include <iostream>;
#include <string>;
#include "PlayerInfo.h"
#include "Story.h"

using namespace std;

int main()
{
	cout << "\n\n\t-----------Welcome to your Last Adventure-----------\t\n\n";

	// get the players name as a string
	string Name;
	Name = GetPlayerName();

	//Displaying the intro to the player
	DisplayIntroToUser(Name);

	//beginning the story	
	TheStoryBegins(Name);

	// The main event
	TheJourney(Name);

	// Get players amount of gold they take
	getGoldAmount();

	// Close the story
	Final(Name);
}