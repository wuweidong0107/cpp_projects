#include <iostream>
#include <string.h>
#include <unistd.h>

using namespace std;

class Sofa {
private:
	int weight;
public:
	void setWeight(int weight) { cout<<"Sofa setWeight"<<endl; this->weight = weight; }
	int getWeight(void) const { cout<<"Sofa getWeight: "<<weight<<endl; return weight; }
};

class Bed {
private:
	int weight;
public:
	void setWeight(int weight) { cout<<"Bed setWeight"<<endl; this->weight = weight; }
	int getWeight(void) const { cout<<"Bed getWeight: "<<weight<<endl; return weight; }
};

class Sofabed : public Sofa, public Bed {
private:
	int weight;
public:
	void setWeight(int weight) { cout<<"Sofabed setWeight"<<endl; this->weight = weight; }
	int getWeight(void) const { cout<<"Sofabed getWeight: "<<weight<<endl; return weight; }
};

int main(int argc, char **argv)
{
	Sofabed s;
	s.setWeight(10);      // 隐藏基类的函数成员
	s.getWeight();	      // 隐藏基类的数据成员
	s.Sofa::setWeight(5); // 访问基类的函数成员
	s.Sofa::getWeight();  // 访问基类的数据成员
	s.Bed::setWeight(0); // 访问基类的函数成员
	s.Bed::getWeight();  // 访问基类的数据成员
	return 0;
}