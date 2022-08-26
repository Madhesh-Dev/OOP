
#include<bits/stdc++.h>
using namespace std;
// The capability of a class to derive properties and characteristics from another class is called Inheritance.
// Child class inherits properties from base class

class Box{

    public:
    double l;
    double h;
    double w;

    public:

    Box(){
        this->h = -1;
        this->l = -1;
        this->w = -1;
    }

    // cube
    Box(double side){

        this->h = side;
        this->l = side;
        this->w = side;
    }

    // cuboid
    Box(double l,double h,double w){

        this->h = h;
        this->l = l;
        this->w = w;
    }

    public:
        void display(){

            cout << "Running the box";
        }
};


class BoxWeight: public Box{

    public:
    int weight;

    public:

    BoxWeight(){
        this->weight = -1;
    }

    BoxWeight(double l,double h,double w,double weight):Box(l,h,w){

        //super(l,h,w); not possible in c++ // call the parent class constructor
        this->weight = weight;
    }

};

int main(){

    Box b = Box(4);

    BoxWeight b1 = BoxWeight();

    BoxWeight b2 = BoxWeight(5,7,8,10);

    // The type of the reference variable determines not the object that determines what members can be accessed

    Box b3 = BoxWeight(2,3,4,8);

    // here we can't access weight because Box doesn't have weight

    // cout << b.l << " "<<b.h << " "<<b.w << endl;
    cout << b1.l << " "<<b1.h << " "<<b1.w << b1.weight << endl;
    cout << b2.l << " "<<b2.h << " "<<b2.w << " "<<b2.weight << endl;

}



