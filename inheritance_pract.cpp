// #include<iostream>
// using namespace std;

// //single inheritance
// class A{
// public:
//     int a;
//     A(){
//         a=0;
//     }
// };
// class B:public A{
// public:
//     int b;
//     B(){
//         b=1;
//     }
// };

// //multilevel inheritance 
// class C{
// public:
//     int c;
//     C(){
//         c=2;
//     }
// };

// class D: public C{
// public:
//     int d;
//     D(){
//         d=3;
//     }
// };
// class E:public D{
// public:
//     int e;
//     E(){
//         e=4;
//     }
// };

// //hierarchical inheritance
// class F{
// public:
//     int f;
//     F(){
//         f=5;
//     }
// };
// class G:public F{
// public:
//     int g;
//     G(){
//         g=6;
//     }
// };
// class H: public F{
// public:
//     int h;
//     H(){
//         h=7;
//     }
// };

// //multiple inheritance
// class I{
// public:
//     int i;
//     I(){
//         i=8;
//     }
// };
// class J{
// public:
//     int j;
//     J(){
//         j=9;
//     }
// };
// class K: public I,public J{
// public:
//     int k;
//     K(){
//         k=10;
//     }
// };

// int main(){
//     // single inheritence
//     cout<<"single inheritence"<<endl;
//     B objb;
//     cout<<"Member data of Bace Class A:- "<<objb.a<<endl;
//     cout<<"Member data of drived Class B:- "<<objb.b<<endl;
//     cout<<endl;

//     //multilevel inheritence
//     cout<<"multilevel inheritence"<<endl;
//     E obje;
//     cout<<"Member data of level 1 Bace Class C:- "<<obje.c<<endl;
//     cout<<"Member data of level 2 Bace Class D:- "<<obje.d<<endl;
//     cout<<"Member data of drived Class E:- "<<obje.e<<endl;
//     cout<<"\n";

//     //hierarchical inheritance
//     cout<<"hierarchical inheritance"<<endl;
//     G objg;
//     cout<<"Member data of Bace Class F:- "<<objg.f<<endl;
//     cout<<"Member data of drived Class G:- "<<objg.g<<endl;
//     H objh;
//     cout<<"Member data of Bace Class F:- "<<objh.f<<endl;
//     cout<<"Member data of drived Class h:- "<<objh.h<<endl;
//     cout<<endl;

//     //multiple inheritance
//     cout<<"multiple inheritance"<<endl;
//     K objk;
//     cout<<"Member data of Bace Class I:- "<<objk.i<<endl;
//     cout<<"Member data of Bace Class J:- "<<objk.j<<endl;
//     cout<<"Member data of drived Class K:- "<<objk.k<<endl;
//     cout<<"\n";
// }

#include<iostream>
using namespace std;

//single inheritance
class A{
public:
    int a;
    A(): a(0) {}
    void displayA() {
        cout << "Member data of Base Class A: " << a << endl;
    }
};

class B:public A{
public:
    int b;
    B(): b(1) {}
    void displayB() {
        displayA();
        cout << "Member data of Derived Class B: " << b << endl;
    }
};

//multilevel inheritance 
class C{
public:
    int c;
    C(): c(2) {}
    void displayC() {
        cout << "Member data of Level 1 Base Class C: " << c << endl;
    }
};

class D: public C{
public:
    int d;
    D(): d(3) {}
    void displayD() {
        displayC();
        cout << "Member data of Level 2 Base Class D: " << d << endl;
    }
};

class E:public D{
public:
    int e;
    E(): e(4) {}
    void displayE() {
        displayD();
        cout << "Member data of Derived Class E: " << e << endl;
    }
};

//hierarchical inheritance
class F{
public:
    int f;
    F(): f(5) {}
    void displayF() {
        cout << "Member data of Base Class F: " << f << endl;
    }
};

class G:public F{
public:
    int g;
    G(): g(6) {}
    void displayG() {
        displayF();
        cout << "Member data of Derived Class G: " << g << endl;
    }
};

class H: public F{
public:
    int h;
    H(): h(7) {}
    void displayH() {
        displayF();
        cout << "Member data of Derived Class H: " << h << endl;
    }
};

//multiple inheritance
class I{
public:
    int i;
    I(): i(8) {}
    void displayI() {
        cout << "Member data of Base Class I: " << i << endl;
    }
};

class J{
public:
    int j;
    J(): j(9) {}
    void displayJ() {
        cout << "Member data of Base Class J: " << j << endl;
    }
};

class K: public I,public J{
public:
    int k;
    K(): I(), J(), k(10) {}
    void displayK() {
        displayI();
        displayJ();
        cout << "Member data of Derived Class K: " << k << endl;
    }
};

int main(){
    // single inheritence
    cout << "Single Inheritance" << endl;
    B objb;
    objb.displayB();
    cout << endl;

    //multilevel inheritence
    cout << "Multilevel Inheritance" << endl;
    E obje;
    obje.displayE();
    cout << endl;

    //hierarchical inheritance
    cout << "Hierarchical Inheritance" << endl;
    G objg;
    objg.displayG();
    H objh;
    objh.displayH();
    cout << endl;

    //multiple inheritance
    cout << "Multiple Inheritance" << endl;
    K objk;
    objk.displayK();
    cout << endl;

    return 0;
}