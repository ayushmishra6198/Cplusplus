#include<iostream>
using namespace std;
class Area{
float a,b;
public:
      general(){
        cout<<"enter the base and height of triangle respectively";
        cin>>a>>b;
        float area;
        area= 0.5*(a*b);
cout<<"Area of triangle by general form is "<<area<<endl;

       }
};
int main(){
Area obj;
obj.general();
return 0;
}
