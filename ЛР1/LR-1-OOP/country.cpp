#include "country.h"

Country::Country() {}

void Country::setName(string newName)
{
    name = newName;
}

string Country::getName()
{
    return name;
}

void Country::setCapital(string newCapital)
{
    capital = newCapital;
}

string Country::getCapital()
{
    return capital;
}

void Country::setPopulation(int newPopulation)
{
    population = newPopulation;
}

int Country::getPopulation()
{
    return population;
}
