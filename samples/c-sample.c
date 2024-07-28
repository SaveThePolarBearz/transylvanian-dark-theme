#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// This file is to demonstrate the colors of a theme for C

// Enums
typedef enum {
    Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
} Days;

// Struct
typedef struct {
    int x;
    int y;
} Point;

// Function to print Point as a string
void printPoint(Point* p) {
    printf("(%d, %d)\n", p->x, p->y);
}

// Custom Class equivalent in C (struct with function pointers)
typedef struct {
    char firstName[50];
    char lastName[50];
    int age;
} Person;

// Function to initialize a Person
void initPerson(Person* person, const char* firstName, const char* lastName, int age) {
    strncpy(person->firstName, firstName, sizeof(person->firstName) - 1);
    strncpy(person->lastName, lastName, sizeof(person->lastName) - 1);
    person->age = age;
}

// Function to print a greeting
void greet(Person* person) {
    printf("Hello, my name is %s %s.\n", person->firstName, person->lastName);
}

// Function to compare ages
bool isOlderThan(Person* p1, Person* p2) {
    return p1->age > p2->age;
}

// Static method equivalent
Person* createPerson(const char* firstName, const char* lastName, int age) {
    Person* newPerson = (Person*)malloc(sizeof(Person));
    if (newPerson != NULL) {
        initPerson(newPerson, firstName, lastName, age);
    }
    return newPerson;
}

// Main function
int main() {
    // Variables of various types
    int myInt = 5;
    float myFloat = 5.5f;
    double myDouble = 10.5;
    bool myBool = true;
    char myChar = 'A';
    char myString[] = "Hello, World!";
    void* myObject = NULL;  // Generic object type in C
    const char* myConstString = "Implicitly Typed Variable";  // Using const char* for string literals

    // Array
    int myArray[] = { 1, 2, 3, 4, 5 };

    // Enum
    Days today = Wednesday;

    // Struct
    Point myPoint = { 10, 20 };
    printPoint(&myPoint);

    // Custom Class equivalent
    Person person1;
    initPerson(&person1, "John", "Doe", 30);

    Person person2;
    initPerson(&person2, "Jane", "Smith", 25);

    // Statements
    if (myBool) {
        printf("Boolean is true\n");
    } else {
        printf("Boolean is false\n");
    }

    // Switch statement
    switch (today) {
        case Sunday:
        case Saturday:
            printf("It's the weekend!\n");
            break;
        default:
            printf("It's a weekday.\n");
            break;
    }

    // Loops
    for (int i = 0; i < sizeof(myArray) / sizeof(myArray[0]); i++) {
        printf("%d\n", myArray[i]);
    }

    const char* myList[] = { "One", "Two", "Three" };
    for (int i = 0; i < sizeof(myList) / sizeof(myList[0]); i++) {
        printf("%s\n", myList[i]);
    }

    // Type information
    printf("Type of myInt is: int\n");

    // Custom Class methods
    greet(&person1);
    greet(&person2);

    // Overloaded operators equivalent
    if (isOlderThan(&person1, &person2)) {
        printf("%s is older than %s\n", person1.firstName, person2.firstName);
    } else {
        printf("%s is younger than %s\n", person1.firstName, person2.firstName);
    }

    // Creating an instance using a static method equivalent
    Person* person3 = createPerson("Sam", "Williams", 40);
    if (person3 != NULL) {
        greet(person3);
        free(person3);  // Clean up dynamically allocated memory
    }

    return 0;
}
