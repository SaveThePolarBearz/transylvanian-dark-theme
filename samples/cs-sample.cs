using System;
using System.Collections.Generic;


// this file is to demonstrate the colors of a theme for C#


namespace MyThemeTest
{
    // Enums
    enum Days { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday }

    // Struct
    struct Point(int x, int y)
	{
        public int X = x;
        public int Y = y;

		public override readonly string ToString() => $"({X}, {Y})";
    }

    // Custom Class
    class Person(string firstName, string lastName, int age)
	{
		public string FirstName { get; set; } = firstName;
		public string LastName { get; set; } = lastName;
		private int age = age;

		public int Age
        {
            get { return age; }
            set
            {
                if (value >= 0)
                {
                    age = value;
                }
            }
        }

        public override string ToString() => $"{FirstName} {LastName}, Age {Age}";

        // Overloaded operator
        public static bool operator >(Person p1, Person p2) => p1.Age > p2.Age;
        public static bool operator <(Person p1, Person p2) => p1.Age < p2.Age;

        // Method
        public void Greet() => Console.WriteLine($"Hello, my name is {FirstName} {LastName}.");

        // Static method
        public static Person CreatePerson(string firstName, string lastName, int age) => new Person(firstName, lastName, age);
    }

    class Program
    {
        // Labels
        static void Main(string[] args)
        {
			{
				{
					{

						// this is to test rainbow braces (requires other extensions)
					}
				}
			}
			List<List<List<int>>> rainbowList = new();
            // Variables of various types
            int myInt = 5;
            float myFloat = 5.5f;
            double myDouble = 10.5;
            bool myBool = true;
            char myChar = 'A';
            string myString = "Hello, World!";
            object myObject = new object();
            dynamic myDynamic = "Dynamic Variable";
            var myVar = "Implicitly Typed Variable";

            // Array
            int[] myArray = { 1, 2, 3, 4, 5 };

            // List
            List<string> myList = new List<string> { "One", "Two", "Three" };

            // Enum
            Days today = Days.Wednesday;

            // Struct
            Point myPoint = new Point(10, 20);

            // Custom Class
            Person person1 = new Person("John", "Doe", 30);
            Person person2 = new Person("Jane", "Smith", 25);

            // Statements
            if (myBool)
            {
                Console.WriteLine("Boolean is true");
            }
            else
            {
                Console.WriteLine("Boolean is false");
            }

            // Switch statement
            switch (today)
            {
                case Days.Sunday:
                case Days.Saturday:
                    Console.WriteLine("It's the weekend!");
                    break;
                default:
                    Console.WriteLine("It's a weekday.");
                    break;
            }

            // Loops
            for (int i = 0; i < myArray.Length; i++)
            {
				if (i == 7)
					continue;
					
                Console.WriteLine(myArray[i]);
            }

            foreach (var item in myList)
            {
                Console.WriteLine(item);
            }

            // Typeof statement
            Type myType = typeof(Person);
            Console.WriteLine($"Type of person1 is: {myType}");

            // Custom Class methods
            person1.Greet();
            person2.Greet();

            // Overloaded operators
            if (person1 > person2)
            {
                Console.WriteLine($"{person1.FirstName} is older than {person2.FirstName}");
            }
            else
            {
                Console.WriteLine($"{person1.FirstName} is younger than {person2.FirstName}");
            }

            // Creating an instance using a static method
            Person person3 = Person.CreatePerson("Sam", "Williams", 40);
            person3.Greet();
        }
    }
}