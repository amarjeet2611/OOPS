#include<iostream>
using namespace std;
class A{

    public:
    void func(){
        cout<<"I  am A"<<endl;
    }
};

class B{
    public:
    void func(){

    cout<<"I am B"<<endl;
    }
};
class C: public A,public B{

};

int main(){
C obj;
//ambiguity arises here
//obj.func();
//so use scope resolution operator 
obj.A::func();

return 0;
}