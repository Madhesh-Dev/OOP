// OOP is a programming paradigm which we can use to solve complex problems

// entities in the real-world can be represented as an object in the program

// class is the building block - blueprint to create objects - user defined datatype

#include<bits/stdc++.h>
using namespace std;

// In c++ everything inside class is private by default


class Employee{
private: 
    // attributes or characteristics
    string Name;
    string Company;
    int Age;

public:

    // Encapsulation - Encapsulation is the idea of bundling or tying together data and methods that operate on that data so they are grouped together within a class
    // Why? We do this with the purpose of preventing anyone or anything outside of our class to be able to directly access the data and to interact and modify it

    void setName(string name){

        Name = name;

    }

    string getName(){
        return Name;
    }
    void setCompany(string company){

        Company = company;

    }

    string getCompany(){
        return Company;
    }

    void setAge(int age){

        Age = age;

    }

    string getAge(){
        return Age;
    }


    // A constructor is special type of method that is invoked each time an object is created
    // constructor should be public
    // constructor construct the object
    Employee(string name,string company,int age){

        Name = name;
        Company = company;
        Age = age;

    }
    // behaviour

    void IntroduceYourself(){

        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;
    }

};





int main(){

    Employee e1 = Employee("Madhesh","NA",21);
    
    // e1.Name = "Madhesh";
    // e1.Company = "NA";
    // e1.Age = 21;

    e1.IntroduceYourself();

    Employee e2 = Employee("John","Amazon",30);

    e2.IntroduceYourself();


    return 0;
}

// Abstraction - simply means hiding complex things behind a procedure that makes those things look simple

// The process of hiding the complexity is called Abstraction




