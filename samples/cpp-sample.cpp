#include <iostream>
#include <vector>
#include <string>

// This file is to demonstrate the colors of a theme for C++

namespace MyThemeTest
{
    // Enums
    enum Days { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

    // Struct
    struct Point {
        int x;
        int y;

        Point(int x, int y) : x(x), y(y) {}

        std::string ToString() const {
            return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
        }
    };

    // Custom Class
    class Person {
    private:
        std::string firstName;
        std::string lastName;
        int age;

    public:
        Person(std::string firstName, std::string lastName, int age) 
            : firstName(firstName), lastName(lastName), age(age) {}

        std::string getFirstName() const { return firstName; }
        void setFirstName(const std::string& firstName) { this->firstName = firstName; }

        std::string getLastName() const { return lastName; }
        void setLastName(const std::string& lastName) { this->lastName = lastName; }

        int getAge() const { return age; }
        void setAge(int age) {
            if (age >= 0) {
                this->age = age;
            }
        }

        std::string ToString() const {
            return firstName + " " + lastName + ", Age " + std::to_string(age);
        }

        // Overloaded operators
        bool operator>(const Person& other) const { return this->age > other.age; }
        bool operator<(const Person& other) const { return this->age < other.age; }

        // Method
        void Greet() const {
            std::cout << "Hello, my name is " << firstName << " " << lastName << "." << std::endl;
        }

        // Static method
        static Person CreatePerson(const std::string& firstName, const std::string& lastName, int age) {
            return Person(firstName, lastName, age);
        }
    };

    // Main function
    int main() {
        // Variables of various types
        int myInt = 5;
        float myFloat = 5.5f;
        double myDouble = 10.5;
        bool myBool = true;
        char myChar = 'A';
        std::string myString = "Hello, World!";
        auto myAuto = "Implicitly Typed Variable";

        // Array
        int myArray[] = { 1, 2, 3, 4, 5 };

        // Vector
        std::vector<std::string> myVector = { "One", "Two", "Three" };

        // Enum
        Days today = Days::Wednesday;

        // Struct
        Point myPoint(10, 20);

        // Custom Class
        Person person1("John", "Doe", 30);
        Person person2("Jane", "Smith", 25);

        // Statements
        if (myBool) {
            std::cout << "Boolean is true" << std::endl;
        } else {
            std::cout << "Boolean is false" << std::endl;
        }

        // Switch statement
        switch (today) {
            case Days::Sunday:
            case Days::Saturday:
                std::cout << "It's the weekend!" << std::endl;
                break;
            default:
                std::cout << "It's a weekday." << std::endl;
                break;
        }

        // Loops
        for (int i = 0; i < sizeof(myArray) / sizeof(myArray[0]); ++i) {
			if (i == 7)
				continue;
            
			std::cout << myArray[i] << std::endl;
        }

        for (const auto& item : myVector) {
            std::cout << item << std::endl;
        }

        // Typeid statement
        std::cout << "Type of person1 is: " << typeid(person1).name() << std::endl;

        // Custom Class methods
        person1.Greet();
        person2.Greet();

        // Overloaded operators
        if (person1 > person2) {
            std::cout << person1.getFirstName() << " is older than " << person2.getFirstName() << std::endl;
        } else {
            std::cout << person1.getFirstName() << " is younger than " << person2.getFirstName() << std::endl;
        }

        // Creating an instance using a static method
        Person person3 = Person::CreatePerson("Sam", "Williams", 40);
        person3.Greet();

        return 0;
    }
}
