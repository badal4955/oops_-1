#include<iostream>
using namespace std;
class human{
    string religion,color;
    protected:
    string name;
    int age,weight;
};
class student:private human{
    private:
    int roll,fees;

    public:
    student(string name,int age,int weight,int roll,int fees){
          this->name=name;
          this->age=age;
          this->weight=weight;
          this->roll=roll;
          this->fees=fees;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<weight<<" "<<roll<<" "<<fees<<" "<<endl;
    }
};
int main(){
    student A("Badal",19,75,12,12000);
    A.display();
    return 0;
}