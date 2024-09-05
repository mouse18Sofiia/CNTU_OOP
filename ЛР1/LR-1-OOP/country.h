#ifndef COUNTRY_H
#define COUNTRY_H

#include <string>

using namespace std;

class Country {
public:
    Country();

    void setName(string newName);
    string getName();

    void setCapital(string newCapital);
    string getCapital();

    void setPopulation(int newPopulation);
    int getPopulation();

private:
    string name;
    string capital;
    int population;
};

#endif // COUNTRY_H
