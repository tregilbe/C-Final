#include "Character.h"
#include<string>
using namespace std;

Character::Character(string name, string age, int health) 
{
	SetName(name);
	SetHealth(health);
}