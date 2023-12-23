#include <iostream>

using namespace std;
 main(){
  float x,y,z,a,b,c;
  cout<<"please enter x,y,z=";
cin>>x>>y>>z;
    a=(x-y)*(x+z);
    b=(x+y+z);
    c=1;
    cout<<"The answer is="<<a/(b*b)+c;
}