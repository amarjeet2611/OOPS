#include<iostream>
using namespace std;
class Hero{
private:
int health;
public:
char level;

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

};
int main(){
Hero S(70,'c');
//copy constructor
Hero R(S);
}