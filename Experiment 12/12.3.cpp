 #include <iostream>
 #include <vector>
#include <algorithm>
 #include <string>
 using namespace std;

struct Person {
    string name;
    int age;
    Person(string n, int a) : name(n), age(a) {}
};

int main() { 
vector<Person> people = {
        Person("Alice", 30),
        Person("Bob", 25),
        Person("Charlie", 35),
        Person("David", 28)
    };
    
    // Use lambda for sorting by age
    sort(people.begin(), people.end(), [](const Person &a, const Person &b) {
        return a.age < b.age;
    });
    
    cout << "Sorted records by age : \n";
    for (auto &p : people) {
        cout << p.name << " " << p.age << "\n";
    }
    
    int search_age = 28;
    int found_index = -1;
    
    for (int i = 0; i < people.size(); i++) {
        if (people[i].age == search_age) {
            found_index = i;
            break;
        }
    }
    
    if (found_index != -1) {
        cout << "Person with age " << search_age << " found." << endl;
    } else {
        cout << "Person with age " << search_age << " not found." << endl;
    }
    
    return 0;
}