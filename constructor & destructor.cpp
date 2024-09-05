#include <iostream>
using namespace std;

class Test{
  public:
  //user-defined Constructor
  Test(){cout<<"\nConstructor executed";}
  
  //user-defined Destructor
  ~Test(){ cout <<"\nDestructor exeuted";}
};
main() 
{
    Test t;
    return 0;
}