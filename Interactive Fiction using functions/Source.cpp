#include <iostream>;
#include <string>;
#include "PlayerInfo.h"
#include "Story.h"
#include "Character.h"

using namespace std;

// I moved the bulk of the story back to the main source file,
// this way I can use the Characters I made properly, i.e. proper dialogue
void TheStoryBegins(string Name, Character Barbarian);
void TheJourney(string Name, Character Rogue, Character Bard, Character Barbarian, Character Dragon, Character Voice, string* p_Name);
void Final(string Name, Character Rogue, Character Bard, Character Barbarian, Character Dragon);

int main()
{
	// Display the programs name
	cout << "\n\n\t\t---------------Story Teller 300-----------------------\t\n\n" << endl;

	// get the players name as a string
	string Name;
	Name = GetPlayerName();

	// Create a pointer out of the players name (ref)
	// This will be used in a creative way in the story, the pointer acting as a alien language to the player in game
	// This way it will be unique every playthrough, and it is a neat little easter egg
	string* p_Name = &Name;

	// Now greet the player by name and describe the program
	cout << "\nHello " << Name << "! And welcome to Story Teller 300!";
	cout << "\nThis program is meant to cure the sickness known as boredom!";
	cout << "\nYou will be following a DnD campaign, accompanied by three other adventures, in the journey to avenge your sister";

	// Display Journey title
	cout << "\n\n\t-----------Welcome to the Adventure for the Crystal Dragon-----------\t\n\n" << endl;

	// Create story characters
	Character Rogue("Ahleah", "16 years old", 100);
	Character Bard("Mack", "21 years old", 100);
	Character Barbarian("Rorik", "30 years old", 100);
	Character Dragon("Crystal Dragon", "5,000 years old", 100);
	Character Voice("???", "*&#$% years old", 9999);

	//Displaying the intro to the player
	DisplayIntroToUser(Name);

	//beginning the story	
	TheStoryBegins(Name, Barbarian);

	// The main event
	TheJourney(Name, Rogue, Bard, Barbarian, Dragon, Voice, p_Name);

	// Get players amount of gold they take
	getGoldAmount();

	// Close the story
	Final(Name, Rogue, Bard, Barbarian, Dragon);
}

void TheStoryBegins(string Name, Character Barbarian)
{
	// I did not wanna turn in the same story as before, so I added a few more details to make it more immersive
	cout << "\n\n You awake at your camp, laying near a fire. You sit up and look around the camp and the forest around you.";
	cout << "\nRorik is already awake polishing his axe, the others lay around the fire asleep.";
	cout << "\nYou lie back down and begin to day dream, the memories filling your head.";
	cout << "\nThe last thing you remember is watching your sister be absorbed by the crystal dragon you now hunt.";
	cout << "\nHer body melting into the crystal heart, her dragonborn powers filling the void of the empty pink crystal awakening the beast.";
	cout << "\nYou jerk out of it when you hear Roriks voice...\n\n";

	// I wanted the dialogue to stand out, so each time it wil be seperated and pop out of the text
	Barbarian.Talk("Guys it's time to get up. Today we take down the beast and avenge our fallen sister.");

	cout << "\n\nAs you rise and gather your gear, the others join you, everyone else is hopeful, but you can't shake this feeling in your stomach.";
	cout << "\nThat night your sister died repeated over and over in your head.";

	return;
}

void TheJourney(string Name, Character Rogue, Character Bard, Character Barbarian, Character Dragon, Character Voice, string* p_Name)
{
	cout << "\nYou lead the group with the map in your hands, a walk through the woods to the nest of the crystal dragon, the last place you saw your sister.";
	cout << "\nAs the group gets closer you start to space out, the memories of your family your head as you-\n\n";

	Rogue.Talk("Watch out!");

	cout << "\n\nYour head jolts up as you drop the map reaching for your daggers.";
	cout << "\nYou hear something else, you dodge quickly to the right and barely escape a giant pink crystal shard aimed at your head, which instead disintegrates the map.";
	cout << "\nYour attention is brought to the giant dragon above you as the group spreads out...\n\n";
	
	Dragon.Talk("Well well well, look who it is, back for more? I enjoyed devouring your sisters power, it seems now is the best time to try them out!");
	
	cout << "\n\nThe crystal beast begins to charge his attack, your eyes fill with rage after hearing him speak of her, you yell as you transform into your griffen form.";
	cout << "\nYour wings spread and you feel your strength grow, your talons glowing with the enchantments of your daggers. The dragon then screeches as he seens out crystal shards, you manage to dodge them, but your group was not as fourtunate.";
	cout << "\nThe shards fly out and pin every other member in your group...\n\n";

	// I know this kind of seems stupid and lazy, but beforehand I had a battle sequence. However since all of my previous code was deleted, I already had to rewrite all of this, I apologise.
	Bard.Talk("This is all up to you now! We got your back, don't let her down!");

	cout << "\n\nYou keep your eyes focused on the demon as you charge, leaping into the air and spinning like a drill, aiming for the heart in the crystal.";
	cout << "\nAs you hit your target everything goes black, and the feeling of hitting the ground knocks you out cold...\n\n";

	// I use an infinte for loop to make the player feel trapped
	// I also feel this is a creative way to use this, where as before I also had loops in a fighting sequence
	for (;; )
	{
		cout << "\n\nYou awake in a foggy forest that seems to go on forever, you slowly stand up with what strength you have left...";
		cout << "\nYou look around until you here an ominous voice...\n\n";

		Voice.Talk("Another has fallen under the Dragons spell.... if you wish to live, answer this....\n");
		Voice.Talk("Who is the young one who looks up to you?\n");
		// Get user input so they can answer
		string input;
		getline(cin, input);
		if (input == "Ahleah")
			Voice.Talk("You have answered correctly.... you are the only lucky one....\n\n");
			break;
	}

	cout << "\n\nYou open your eyes to your group around you, healing you and trying to wake you. 'You did it!' they all cheered out, the pile of crystal dust confirmed it, you had avenged her as promised.";
	cout << "\nYou look around and see a strange glowing coin.";
	cout << "\nYou pick it up and spin it in your hands, it glows pink and seems to be made of some sort of crystal.";
	// I use the pointer here as I explained up above.
	cout << "\nOn the back of the coin it reads: " << p_Name;
	cout << "\nYou put the strange alien coin in your pocket and go to the rest of the group.";
	cout << "\n\n\tYour also noticed a large pile of gold, 1000 coins to be exact. The group says to take as much as you want for doing the fighting.";
	cout << "\nHow much do you take for youself? (The rest will be given out to your group)";

	return;
}

void Final(string Name, Character Rogue, Character Bard, Character Barbarian, Character Dragon)
{
	cout << "\nAs the group leaves the nest, everyone cheers and talks about celebrating at the tavern.";
	cout << "\nHowever, you decide to stay in the back of the group and stare into the broken crystal heart, remembering your last moments with your sister.";
	cout << "\nAs the group got closer to the tavern, you cheered  up and joined the group in cheering, but once the group got to the front of the tavern they all fell silent.";
	cout << "\nYou pushed your way to the front of the group in confusion to see what was the matter.";
	cout << "\nBut once you got to the front, the entire town could hear the crystal heart hit the group and shatter into pieces.";
	cout << "\nA familiar figure stood at the door and looked at you,'It's been a while " << Name << ", how have you been sister?";

	return;
}