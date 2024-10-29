#include <iostream>
using namespace std;
class father
{
protected:
    string surname = "singh";
};
class son1 : protected father
{
protected:
    string name = "ronak";

public:
    void show()
    {
        cout << name << " " << surname << endl;
    }
};
class son2 : protected father
{
protected:
    string name = "rakesh";

public:
    void display()
    {
        cout << name << " " << surname << endl;
    }
};
int main()
{
    son1 s1;
    s1.show();

    son2 s2;
    s2.display();
    return 0;
}