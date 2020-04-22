#include "Person.h"
#include <string>
#include <iostream>
using namespace std;

void Person::SetName(string name) 
{
    Name = name;
}

string Person::GetName()
{
    return Name;
}

void Person::SetHealth(int health)
{
    Health = health;
}

int Person::GetHealth()
{
    return Health;
}

void Person::Talk(string stuffToSay)
{
    cout << endl << Name << " says: " << stuffToSay << endl;
}

void Person::Walk(int numberOfSteps)
{
    cout << "\n" << Name << "takes " << numberOfSteps << " steps" << endl;
}