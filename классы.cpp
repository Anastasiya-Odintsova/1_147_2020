//Город(население, страна)
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

class City
{
public:
	City(string country, string name, int population)
	{
		this->country = country;
		this->name = name;
		this->SetPopulation(population);

	}
	//
	City (string name): City (name,"",0){}

	void Display()
	{
		cout << name << " " << country << " " << population << endl;
	}
	~City()
	{
		cout << "Destruction position" << endl;
	}
	void SetPopulation(int population)
	{
		if (population >= 5000 && population <= 3000000)
		{
			this->population = population;
		}
	}
	
private:
	int population=5000;
	string country;
	string name;
};

int main()
{
	City *my_loc = new City("Ivanovo", "Russia", 408952);
	my_loc->Display();
	City *my_Chernorechensky = new City("Chernorechensky", "Russia", 1000);
	my_Chernorechensky->Display();
	City* my_StPeterburg = new City("StPeterburg");
	my_StPeterburg->Display();
	return 0;

}