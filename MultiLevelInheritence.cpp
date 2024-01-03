#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

// Create the classes here
class GrandFather {

    public:
    string grandfatherName;

    GrandFather(string gfName) {
        this -> grandfatherName = gfName;
    }

};



class Father : public GrandFather {

    public:
    string fatherName;

    Father(string fName, string gfName) : GrandFather(gfName){
        this -> fatherName = fName;
    }

};

class Son : public Father {

    public:
    string sonName;

    Son(string sName, string fName, string gfName) : Father(fName, gfName){
        this -> sonName = sName;
    }

    void printName() {
        cout << "sonname: " << sonName << endl;
        cout << "fathername: " << fatherName << endl;
        cout << "grandfather: " << grandfatherName << endl;
    }

};


int main() {

    //Write your code here
    string sonName = "Saurabh", fatherName = "Ramesh", grandfatherName = "Suresh";
    // cin >> sonName >> fatherName >> grandfatherName;
    Son son(sonName, fatherName, grandfatherName);
    son.printName();

    return 0;
}