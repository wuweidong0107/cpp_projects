#include <iostream>
#include <string.h>
#include <unistd.h>

using namespace std;

class Furniture {
private:
	int weight;
public:
	void setWeight(int weight) { cout<<"Furniture setWeight"<<endl; this->weight = weight; }
	int getWeight(void) const { cout<<"Furniture getWeight: "<<weight<<endl; return weight; }
};

class Sofa : virtual public Furniture {
private:
	int a;
public:
	void watchTV(void) { cout<<"watch TV"<<endl; }
};

class Bed : virtual public Furniture {
private:
	int b;
public:
	void sleep(void) { cout<<"sleep"<<endl; }
};

class Sofabed : public Sofa, public Bed {
private:
	int c;
//	int weight;
// public:
// 	void setWeight(int weight) { cout<<"Sofabed setWeight"<<endl; this->weight = weight; }
// 	int getWeight(void) const { cout<<"Sofabed getWeight"<<endl; return weight; }
};

int main(int argc, char **argv)
{
	Sofabed s;
	s.watchTV();
	s.sleep();

	s.setWeight(100);
	s.Sofa::getWeight();
	s.Bed::getWeight();
	// s.Furniture::setWeight(50);
	
	return 0;
}


