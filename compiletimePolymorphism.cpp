#include<iostream>
using namespace std;
class A{
    public:
    void sayHello(){
        cout<<"hi ammu !"<<endl;
    }
    void sayHello(string name){

        cout<<"Hello ammu !"<<name <<endl;
    }
};


int main(){
A obj;
obj.sayHello();

return 0;

}