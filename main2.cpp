#include <iostream>
using namespace std;

class Sound{
public:
    virtual void makeSound() = 0;
};

class Gun : public Sound{
public:
    void makeSound() override{
        cout << "Bang Bang Bang" << endl;
    }
};

class Boom : public Sound{
public:
    void makeSound() override{
        cout << "Boom Boom Boom" << endl;
    }
};

int main(){
    Sound* s1 = new Gun();
    Sound* s2 = new Boom();
    s1->makeSound();
    s2->makeSound();
    delete s1;
    delete s2;
}
