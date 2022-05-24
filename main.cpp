#include <iostream>
#include <memory>

using namespace std;

class singleton{

private:

    static singleton* s;
    singleton() = default;

public:

    static singleton* GetSingleton(){
        if(s == nullptr ){
            unique_ptr<singleton> s;
        }
        return s;
    };
    ~singleton()=default;
};

singleton* singleton::s = nullptr;
int main(){
    singleton* s;
    s->GetSingleton();
    cout<<"singleton creado!!!";
    return 0;
}