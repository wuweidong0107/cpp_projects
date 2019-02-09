#include <iostream>
#include <string.h>
#include <unistd.h>

using namespace std;

class Father1 {
private:
    int money1;
public:
    Father1(int i) 
    {
        cout<<"construct Father1: "<<i<<endl;
        money1 = i;
    }
    ~Father1()
    {
        cout<<"destruct Father1: "<<money1<<endl;
    }
};

class Father2 {
private:
    int money2;
public:
    Father2(int j) 
    {
        cout<<"construct Father2: "<<j<<endl;
        money2 = j;
    }
    ~Father2()
    {
        cout<<"destruct Father2: "<<money2<<endl;
    }
};

class Father3 {
public:
    Father3() 
    {
        cout<<"construct Father3: *"<<endl;
    }
    ~Father3()
    {
        cout<<"destruct Father3: *"<<endl;
    }
};

class Toy {
private:
    int price;
public:
    Toy(int p) 
    {
        cout<<"construct Toy: "<<p<<endl;
        price = p;
    }
    ~Toy()
    {
        cout<<"destruct Toy: "<<price<<endl;
    }
};

class Son: public Father1, public Father2, public Father3 {
private:
    int age;
    Toy t1;
    Toy t2;
public:
    Son(int a, int b, int c, int d, int e): Father1(a), Father2(b), t1(c), t2(d)
    {
        cout<<"construct Son: "<<e<<endl;
        age = e;
    }
    ~Son()
    {
        cout<<"destruct Son:"<<age<<endl;
    }
};

int main()
{
    Son s(1, 2, 3, 4, 5);
}