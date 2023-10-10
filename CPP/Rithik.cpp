#include <iostream>

class Person {
private:
    int age;

public:
    Person(int a) : age(a) {}

    // Compare age with another person
    bool isSameAge(const Person& other) const {
        return age == other.age;
    }
};

int main() {
    // Input ages for three persons
    int age1, age2, age3;
    std::cin >> age1 >> age2 >> age3;

    // Create instances of the Person class
    Person person1(age1);
    Person person2(age2);
    Person person3(age3);

    // Compare ages and print the result
    std::cout << "Person 1 is " << (person1.isSameAge(person2) ? "" : "not ") << "the same age as Person 2." << std::endl;
    std::cout << "Person 1 is " << (person1.isSameAge(person3) ? "" : "not ") << "the same age as Person 3." << std::endl;

    return 0;
}

