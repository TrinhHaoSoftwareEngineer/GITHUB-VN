#include <iostream>
using namespace std;

<<<<<<< HEAD
class Sound{
=======
class sound{
>>>>>>> dev
public:
    virtual void makeSound() = 0;
};

<<<<<<< HEAD
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
=======
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
>>>>>>> dev
    }
};

int main(){
<<<<<<< HEAD
    Sound* s1 = new Gun();
    Sound* s2 = new Boom();
=======
    sound* s1 = new dog();
    sound* s2 = new cat();
>>>>>>> dev
    s1->makeSound();
    s2->makeSound();
    delete s1;
    delete s2;
}
