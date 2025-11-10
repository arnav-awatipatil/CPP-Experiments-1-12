#include<iostream>
using namespace std;

class City {
    int population;
    string name;

public:
    void acceptdata() {
        cout << "City Name: ";
        cin >> name;
        cout << "City Population: ";
        cin >> population;
    }

    void displaydata() {
        cout << "\nCity Name: " << name;
        cout << "\nCity Population: " << population << endl;
    }

    int getPopulation() {
        return population;
    }

    string getName() {
        return name;
    }
};

int main() {
    City c1, c2, c3, c4, c5;

    c1.acceptdata();
    c2.acceptdata();
    c3.acceptdata();
    c4.acceptdata();
    c5.acceptdata();

    c1.displaydata();
    c2.displaydata();
    c3.displaydata();
    c4.displaydata();
    c5.displaydata();

    
    City cities[5] = {c1, c2, c3, c4, c5};
    City maxCity = cities[0];

    for (int i = 1; i < 5; i++) {
        if (cities[i].getPopulation() > maxCity.getPopulation()) {
            maxCity = cities[i];
        }
    }

    cout << "\nCity with highest population: " << maxCity.getName()
         << " with " << maxCity.getPopulation() << " people." << endl;

    return 0;
}
