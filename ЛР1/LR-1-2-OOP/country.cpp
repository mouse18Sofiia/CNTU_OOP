#include "country.h"
void setName(Country &country, const string &newName)
{
    country.name = newName;
}

string getName(const Country &country)
{
    return country.name;
}

void setCapital(Country &country, const string &newCapital)
{
    country.capital = newCapital;
}

string getCapital(const Country &country)
{
    return country.capital;
}

void setPopulation(Country &country, int newPopulation)
{
    country.population = newPopulation;
}

int getPopulation(const Country &country)
{
    return country.population;
}
