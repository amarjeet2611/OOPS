#include<iostream>
using namespace std;
class Hero{
private:
int health;
public:
char level;
void print(){
    cout<<level<<endl;
}
int getHealth(){
 return health;   
}
char gelLevel(){
    return level;

}
void setHealth(int h){
health=h;
}
void setLevel(char ch){
    level=ch;
}

};
int main(){
//creation of object
//static allocation
Hero ramesh;
//dynamic allocation 
Hero *b=new Hero;
cout<<"Ramesh health is :"<<ramesh.getHealth()<<endl;
//ramesh.health=70;
// using setter
ramesh.setHealth(70);
ramesh.level='A';

cout<<"health is: "<<ramesh.getHealth()<<endl;
cout<<"level is: "<<ramesh.level<<endl;
}