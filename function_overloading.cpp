#include <iostream>

using namespace std;
void area(){//area of circle
float radius;
cout<<"\n Enter the radius of the circle"<<endl;
cin>>radius;
cout<<"\n AREA OF CIRCLE   "<<"="<<   3.14*radius*radius<<"\n";
}
void volume(){//volume of a sphere
float radius;
cout<<"\n Enter the radius of the sphere:"<<endl;
cin>>radius;
cout<<"\n VOLUME OF SPHERE    "<<"="<<    0.75*3.14*radius*radius*radius<<endl;
}
void triagle_area(){
float base;
float height;
cout<<"\n Enter the base and height of the triangle"<<endl;
cin>>base;
cin>>height;
cout<<"\n AREA OF TRIANGLE"<<"="<<0.5*base*height<<endl;
}
int main()
{
    area();//calling the function for area
    volume();//calling the function for volume
    triagle_area();//area of triangle
    return 0;
}
