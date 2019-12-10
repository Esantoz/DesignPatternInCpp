//Simple Singleton design pattern in C++

#include <iostream>

using namespace std;

class Singleton
{
private:
    static Singleton* instance;
    int data;
    Singleton(int d):data(d){}
public:
    static Singleton *getInstance(int d)
    {

        if (instance==NULL)
        {
            instance = new Singleton(d);
        }
        instance->setData(d);
        return instance;
    }
    void setData(int d){
        this->data=d;
    }
    void printD(){
        cout << data << endl;
    }
};

//The instance has to be initialized out of the class
Singleton *Singleton::instance = NULL;

int main()
{
    //Put whatever number you want in data
    static Singleton *a = a->getInstance(4);
    a->printD();
    return 0;
}