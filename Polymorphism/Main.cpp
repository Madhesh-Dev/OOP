// Polymorphism - poly means many and morphism means ways to represent
// Act of representing in multiple ways
// when does it occur? During Inheritance


// Types of Polymorphism

// 1) Compile Time / Static Polymorphism - Achieved via method overloading

//      Method overloading means same name but types,arguments,return types,ordering can be different. Example:- multiple constructors


// 2) Runtime / Dynamic Polymorphism - Achieved by method overriding

    // same method in both child class and parent class  

    // To access the overridden function of the base class, we use the scope resolution operator ::

    // At runtime the compiler decides which method to call


// final keyword is used to prevent the override of the virtual function of base class

// final keyword also prevents the inheritance of the class

//  When a variable is declared as static, space for it gets allocated for the lifetime of the program.

#include<bits/stdc++.h>

using namespace std;

// final keyword example -- we can't inhert the Shapes class with final keyword
// and also we can't override the virtual area function of the Shapes class

// class Shapes final{
//     public:
//     virtual void area() final{

//         cout << "I'm in Shapes";
//     }


// };



class Shapes {
    public:
    virtual void area(){

        cout << "I'm in Shapes";
    }


};

class Circle:public Shapes{

    public:
    void area(){

        cout << "Area is pi*r*r ";
    }


};

class Square:public Shapes{

    public:
    void area() override {

        cout << "Area is side*side";
    }

};


int main(){

    Shapes shape;

    Circle circle;

    Square square = Square();

    shape.area();

    circle.area();

    square.area();

    // access area() function of the Shapes class
    square.Shapes::area();

    // access area() function of Shapes class using pointer

    Shapes* ptr = &square;

    // call function of Shapes class using ptr
    ptr->area(); // with the use of virtual keyword in Shapes class ,the area method of the Square class is printed

    return 0;
}