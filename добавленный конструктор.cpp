#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Person
{
 public:
    string name;
    int age;
    double averageScore;
    Person(string n, int a, double b)
    {
        name = n;
        age = a;
        averageScore = b;
    }
    Person(string n, int a)
    {
        name = n;
        age = a;
        averageScore =5.5;
    }
    Person(string n)
    {
        name = n;
        age = 18;
        averageScore =4.8;

    }
    Person()
    {
        name = "Tom";
        age = 18;
        averageScore =3.7;

    }
    void move()
    {
        cout << name << " is moving" << endl;
    }
};
int main()
{
    Person sasha("Sasha", 15, 6.3);
    cout << "Name: " << sasha.name << " \tAge: " << sasha.age << " \taverageScore " << sasha.averageScore << endl;
    Person tom("Tom", 22);
    cout << "Name: " << tom.name << " \tAge: " << tom.age << " \taverageScore " << tom.averageScore << endl;
    Person sam("Sam");
    cout << "Name: " << sam.name << " \tAge: " << sam.age << " \taverageScore " << sam.averageScore << endl;
    Person bob = Person();
    cout << "Name: " << bob.name << " \tAge: " << bob.age << " \taverageScore " << bob.averageScore << endl;
    return 0;
}