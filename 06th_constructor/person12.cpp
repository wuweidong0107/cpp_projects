
#include <iostream>
#include <string.h>

using namespace std;

class Person {
private:
	char *name;
	int age;

public:

	Person()
	{
		cout <<"Pserson()"<<endl;
		this->name = NULL;
		this->age = 0;
	}
	Person(char *name) 
	{
		cout <<"Pserson(char *)"<<endl;
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
	}

	Person(char *name, int age) 
	{
		cout <<"Pserson(char*, int)"<<endl;
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->age = age;
	}
	
	~Person()
	{
		cout << "~Person()"<<endl;
		if (this->name) {
			cout << "deleting: name = "<<name<<endl;
			delete this->name;
		}
	}

	void printInfo(void)
	{
		cout<<"name = "<<name<<", age = "<<age<<endl;
	}
};

void test_func()
{
	Person per("zhangsan", 16);
	Person *per2 = new Person("lisi", 18);

	per.printInfo();
	per2->printInfo();
}

int main(int argc, char **argv)
{
	test_func();
	cout<<"before test_func"<<endl;
	return 0;
}
