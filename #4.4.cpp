#include<iostream>
using namespace std;
class Vehicle
{
private:
int num;
float hr, rt,totalcost;
public:
Vehicle(int num_vehicle, float hour,float rate){
hr = hour;
rt = rate;
num = num_vehicle;
}
Vehicle(Vehicle &V){
hr=V.hr;
num=V.num;
rt=V.rt;
}
void discount(){
if (num>10)
totalcost=num*(0.1*hr*rt+hr*rt);
else
totalcost = num*hr*rt;
}
void display(){
cout<<totalcost;
}
};
int main()
{
Vehicle v1(15,5.7,50);
Vehicle v2(v1);
v2.discount();
v2.display();
}
