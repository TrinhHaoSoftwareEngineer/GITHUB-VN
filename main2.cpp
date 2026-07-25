#include <iostream>
using namespace std;

class Sound{
public:
    virtual void makeSound() = 0;
};

class Cat : public Sound{
public:
    void makeSound() override{
        cout << "Meo meo" << endl;
    }
};

class Dog : public Sound{
public:
    void makeSound() override{
        cout << "Gau gau" << endl;
    }
};

class Cow : public Sound{
public:
    void makeSound() override{
        cout << "Boo boo" << endl;
    }
};

int main(){
    cout << "Hello world" <<endl;
    Sound* s1 = new Cat();
    Sound* s2 = new Dog();
    Sound* s3 = new Cow();
    s1->makeSound();
    s2->makeSound();
    s3->makeSound();
    delete s1;
    delete s2;
    delete s3;
}
