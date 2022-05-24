#include <iostream>
using namespace std;

class singleton{

private:
  
  static singleton* s;
  singleton() = default;
  
public:

  static singleton* GetSingleton(){
    if(s == nullptr ){
       s = new singleton;
    }
    return s;
  };
  ~singleton()=default;
};

singleton* singleton::s = nullptr; 
int main(){
    auto s = singleton::GetSingleton();
    cout<<"singleton creado!!!";
    return 0;
}
