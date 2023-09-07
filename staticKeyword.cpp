#include<iostream>
using namespace std;
class Hero{
private:
int health;
public:
char level;
static int timeToComplete;

Hero(){
    cout<<"simple constructor called !"<<endl;
}

//parametrized constructor
Hero(int health,char level){
    cout<<"this->"<<this<<endl;
   this-> health=health;
   this-> level=level;
}
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
static int random(){
    cout<<timeToComplete<<endl;
}
};

int Hero::timeToComplete=5; 
int main(){

cout<<Hero::timeToComplete<<endl;
cout<<Hero::random()<<endl;

Hero a;
cout<<a.timeToComplete<<endl;


 


}
