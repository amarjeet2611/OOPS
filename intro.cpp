#include<iostream>
using namespace std;
class Hero{
    char name[100];
    int health;
    char level;
};

int main(){
    //object
Hero h1;
cout<<"size: "<<sizeof(h1)<<endl;

return 0;

}