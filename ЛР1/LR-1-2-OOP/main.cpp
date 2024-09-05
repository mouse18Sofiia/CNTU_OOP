#include <iostream>
#include "country.h"

using namespace std;

int main()
{
    Country Region;
    setName(Region, "Sweden");
    setCapital(Region, "Stockolm");
    setPopulation(Region, 987661);

    cout << "Name Region: " << getName(Region) << endl;
    cout << "Capital Region: " << getCapital(Region) << endl;
    cout << "Population Region: " << getPopulation(Region) << endl;

    return 0;
}
