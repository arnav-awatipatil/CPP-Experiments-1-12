#include <iostream>
#include <string>
using namespace std;

class city {
public:
    string city_name;
    int population;

    void accept() {
        cout << "Enter name of the city: ";
        cin >> city_name;
        cout << "Enter population: ";
        cin >> population;
    }

    void display() { 
        cout << "City having highest population: " << city_name << endl;
        cout << "Population: " << population << endl;
    }
};

int main() {
    city a[5]; 
    int max=0;

    for (int i = 0; i < 5; i++) {
        a[i].accept();
    }

    for (int i = 1; i < 5; i++) {
        if (a[i].population > a[max].population) {
            max = i;
        }
    }

    a[max].display();

    return 0;
}