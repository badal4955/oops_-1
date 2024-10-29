#include<iostream>
using namespace std;
class human{
    public:
    string name;
    int age,weight;
};
class student:protected human{
    public:
    void fun(string n,int a,int w){
        name=n;
        age=a;
        weight=w;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<weight;
    }
};
int main(){
    student s;
    s.fun("badal",19,75);
    s.display();
    return 0;
}