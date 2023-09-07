#include<iostream>
using namespace std;
class Hero{
     public:
    char name[100];
    private:
    int health;
    char level; 
    int getHealth(){
        return health;
    }
    void setHealth(int h){
        health=h;
    }
}
int main(){
    Health ramesh;
    cout<<"Ramesh health is "<<ramesh.getHealth()<<endl;
    //ramesh.health=70;


    return 0;
}