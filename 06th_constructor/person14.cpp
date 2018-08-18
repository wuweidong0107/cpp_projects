
#include <iostream>
#include <string.h>

using namespace std;

class Person {
private:
	char *name;
	int age;

public:

	Person(char *name, int age) 
	{
		cout <<"Pserson(char*, int)"<<endl;
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->age = age;
	}
	
	Person(Person &p)
	{
		cout <<"Person(Person &p)"<<endl;
		this->name = new char[strlen(p.name) + 1];
		strcpy(this->name, p.name);
		this->age = p.age;
	}

	/* 
	Person(Person &p)
	{
		cout <<"Person(Person &p)"<<endl;
		this->name = p.name;
		this->age = p.age;
	}
	*/
	
	~Person()
	{
		cout << "~Person()"<<endl;
		if (this->name) {
			cout << "\tdeleting: name = "<<name<<endl;
			delete this->name;
		}
	}

	void printInfo(void)
	{
		cout<<"name = "<<name<<", age = "<<age<<endl;
	}
};

int main(int argc, char **argv)
{
	Person *per1 = new Person("zhangsan", 16);
	Person per2(*per1);

	per1->printInfo();
	delete per1;
	per2.printInfo();

	return 0;
}

