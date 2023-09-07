#include<iostream>
using namespace std;
class Hero{
    public:
    char name[100];
   
    int health;
    char level;
};

int main(){
    //object
Hero h1;

h1.health=70;
//but here health is private so use access modifier
cout<<"Health is : "<<h1.health<<endl;

return 0;

}