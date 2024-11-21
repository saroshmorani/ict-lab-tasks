#include <iostream>
#include <string>
using namespace std;

// Base class: Animal
class Animal {
private:
    string name;
    int age;

public:
    // Setter methods
    void setName(const string& animalName) {
        name = animalName;
    }
    void setAge(int animalAge) {
        age = animalAge;
    }

    // Getter methods
    string getName() const {
        return name;
    }
    int getAge() const {
        return age;
    }

    // Method to display animal info
    void displayInfo() const {
        cout << "Animal Name: " << name << endl;
        cout << "Age: " << age << " years" << endl;
    }
};

// Derived class: Mammal
class Mammal : public Animal {
public:
    void feedBaby() const {
        cout << "Feeding baby mammal." << endl;
    }
};

// Derived class: Bird
class Bird : public Animal {
public:
    void layEgg() const {
        cout << "Laying an egg." << endl;
    }
};

// Derived class: Reptile
class Reptile : public Animal {
public:
    void shedSkin() const {
        cout << "Shedding skin." << endl;
    }
};

int main() {
    Mammal mammal;
    Bird bird;
    Reptile reptile;

    string name;
    int age;

    // Input for Mammal
    cout << "Enter the name of the mammal: ";
    cin >> name;
    cout << "Enter the age of the mammal: ";
    cin >> age;
    mammal.setName(name);
    mammal.setAge(age);
    cout << endl;

    // Input for Bird
    cout << "Enter the name of the bird: ";
    cin >> name;
    cout << "Enter the age of the bird: ";
    cin >> age;
    bird.setName(name);
    bird.setAge(age);
    cout << endl;

    // Input for Reptile
    cout << "Enter the name of the reptile: ";
    cin >> name;
    cout << "Enter the age of the reptile: ";
    cin >> age;
    reptile.setName(name);
    reptile.setAge(age);
    cout << endl;

    // Display Mammal info
    cout << "Mammal Info:" << endl;
    mammal.displayInfo();
    mammal.feedBaby();
    cout << endl;

    // Display Bird info
    cout << "Bird Info:" << endl;
    bird.displayInfo();
    bird.layEgg();
    cout << endl;

    // Display Reptile info
    cout << "Reptile Info:" << endl;
    reptile.displayInfo();
    reptile.shedSkin();
    cout << endl;

    return 0;
}


