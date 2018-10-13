#include<iostream>
#include<math.h>
using namespace std;
class Area{
float a,b,c;
public:
    herons(){
    cout<<"enter the three sides of triangle"<<endl;
    cin>>a>>b>>c;
    float area,s=0;
    s=0.5*(a+b+c);
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"the area by herons formula is "<<area<<endl;

    }

};
int main(){
    Area obj;
    obj.herons();
    return 0;
}
