
#include <iostream>
using namespace std;

class Person {
private:
	char *name;
	int age;

public:

	Person() {cout <<"Pserson()"<<endl;}
	Person(char *name) 
	{
		cout <<"Pserson(char *)"<<endl;
		this->name = name;
	}

	Person(char *name, int age) 
	{
		cout <<"Pserson(char*, int)"<<endl;
		this->name = name;
		this->age = age;
	}
	
	Person(Person &p)
	{
		cout <<"Person(Person &p)"<<endl;
		this->name = p.name;
		this->age = p.age;
	}

	void setName(char *n)
	{
		name = n;
	}
	int setAge(int a)
	{
		if (a < 0 || a > 150)
		{
			age = 0;
			return -1;
		}
		age = a;
		return 0;
	}
	void printInfo(void)
	{
		//printf("name = %s, age = %d, work = %s\n", name, age, work); 
		cout<<"name = "<<name<<", age = "<<age<<endl;
	}
};

void test_func()
{
	Person per1("zhangsan", 16);
	Person per2(per1);

	per1.printInfo();
	per2.printInfo();
}

int main(int argc, char **argv)
{
	test_func();
	cout<<"before test_func()"<<endl;
	return 0;
}

