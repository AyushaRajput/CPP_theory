#include <iostream>
using namespace std;

int main() 
{
int a;
int b;
int c;
    cout << " please enter three integers"<< endl;
    cin >>a;
    cin  >>b;
    cin >>c;
    
    if (a>=b&&a>=c){
      cout << " the greatest integer is="<< a;
       }
    if (b>=a && b>=c){
      cout << "the greatest integer is="<<b;
    }
    if (c>=a && c>=b){
      cout << "the greatest integer is="<<c;
    }
    return 0;
}