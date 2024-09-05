#ifndef COUNTRY_H
#define COUNTRY_H

#include <string>

using namespace std;

struct Country {
    string name = "\0";
    string capital = "\0";
    int population = -1;
};

void setName(Country &country, const string &newName);
string getName(const Country &country);

void setCapital(Country &country, const string &newCountry);
string getCapital(const Country &country);

void setPopulation(Country &country, int newPopulation);
int getPopulation(const Country &country);

#endif // COUNTRY_H
