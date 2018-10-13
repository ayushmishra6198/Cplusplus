#include<iostream>
using namespace std;
#include<math.h>
#define pi 3.14
class Area{
    float a,b,c;
    public:
        sine(){
        cout<<"enter two sides of a triange"<<endl;
        cin>>a>>b;
        cout<<"enter angle of the triangle"<<endl;
        cin>>c;
        float area;
         area=0.5*((a*b)*sin(c*pi/180));
        cout<<"area of triangle by sine formula is" <<area<<endl;

        }

};
int main(){
Area obj;
obj.sine();
return 0;
}
