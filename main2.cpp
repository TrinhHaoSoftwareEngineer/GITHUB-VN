#include <iostream>
using namespace std;

class sound{
public:
    virtual void makeSound() = 0;
};

class dog : public sound{
public:
    void makeSound() override{
        cout << "Gau gau" <<endl;
    }
};

class cat : public sound{
public:
    void makeSound() override{
        cout << "Meo meo" <<endl;
    }
};

int main(){
    sound* s1 = new dog();
    sound* s2 = new cat();
    s1->makeSound();
    s2->makeSound();
    delete s1;
    delete s2;
}
