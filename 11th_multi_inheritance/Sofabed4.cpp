#include <iostream>
#include <string.h>
#include <unistd.h>

using namespace std;

class Furniture {
private:
	int weight;
public:
	Furniture(int weight) { cout<<"Furniture construct: "<<weight<<endl; this->weight = weight; }
	void setWeight(int weight) { cout<<"Furniture setWeight"<<endl; this->weight = weight; }
	int getWeight(void) const { cout<<"Furniture getWeight"<<endl; return weight; }
};

class Sofa : virtual public Furniture {
private:
	int a;
public:
	Sofa(int weight) : Furniture(weight) { cout<<"Sofa construct"<<endl; }
	void watchTV(void) { cout<<"watch TV"<<endl; }
};

class Bed : virtual public Furniture {
private:
	int b;
public:
	Bed(int weight) : Furniture(weight) { cout<<"Bed construct"<<endl; }
	void sleep(void) { cout<<"sleep"<<endl; }
};

class Sofabed : public Sofa, public Bed {
private:
	int c;
public:
	Sofabed(int weight) : Furniture(weight), Sofa(weight), Bed(weight) { cout<<"Sofabed construct: "<<endl; }
};

int main(int argc, char **argv)
{
	Sofabed s(50);
	s.watchTV();
	s.sleep();

	s.setWeight(100);	
	return 0;
}


