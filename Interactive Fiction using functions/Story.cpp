#include <iostream>
#include <string>

using namespace std;

void DisplayIntroToUser(string Name)
{
	cout << "\n\n\t\t Welcome " << Name << ", to your last Adventure. \n\n";

	// Explain the situation to the player
	cout << "\n\nYou are joined by three others on this journey to avenge the death of your sister.";
	cout << "\nThe oldest member is the barbarian Rorik. Where he lacks in brains, he makes up for in strength";
	cout << "\nThen there is the bard, Mack, who known for his goofy personality, Rorik. He is always there to lighten the mood and buff you in a fight.";
	cout << "\nAnd finally, the youngest is the rogue, Ahleah. With a broken mind with only shattered memories, she looks up to you and will follow you through everything.";
	return;
}