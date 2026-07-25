#include <iostream>
using namespace std;

class sound{
public:
    virtual void makeSound() = 0;
};

class Gun : public sound{
public:
    void makeSound() override{
        cout << "Bang Bang Bang" << endl;
    }
};

class Boom : public sound{
public:
    void makeSound() override{
        cout << "Boom Boom Boom" << endl;
    }
};

int main(){

    sound* s1 = new Gun();
    sound* s2 = new Boom();

    s1->makeSound();
    s2->makeSound();
    delete s1;
    delete s2;
}
