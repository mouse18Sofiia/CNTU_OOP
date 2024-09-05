#include <iostream>
#include "country.h"

using namespace std;

int main()
{
    Country Region;
    Region.setName("Sweden");
    Region.setCapital("Stockolm");
    Region.setPopulation(987661);

    cout << "Name Region: " << Region.getName() << endl;
    cout << "Capital Region: " << Region.getCapital() << endl;
    cout << "Population Region: " << Region.getPopulation() << endl;

    return 0;
}
