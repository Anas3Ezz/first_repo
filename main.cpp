#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
    string name;
    int age;

public:
    Car(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
int main()
{
    Car c1 = Car("SAS", 5);
    cout << c1.name << endl;
}
