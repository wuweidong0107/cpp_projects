
#include <stdio.h>

class Person {
public:
	const char *name;
	int age;
	const char *work;

	Person(const char *n, int a, const char *w) 
	{
		name = n;
		age = a;
		work = w;
	}

	void printInfo(void)
	{
		printf("name = %s, age = %d, work = %s\n", name, age, work); 
	}
};

int main(int argc, char **argv)
{

	Person p1("zhangsan", 10, "teacher");
	Person p2("lisi", 16, "worker");
	p1.printInfo();
	p2.printInfo();
	
	return 0;
}

