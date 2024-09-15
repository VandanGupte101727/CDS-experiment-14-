# CDS-experiment-14-

AIM:- to learn and implement inheritance in cpp <br>

Software used:- VS code 

Theory:-<br>
Inheritance is the property of object oriented programming where the child class can inherit the properties from the parent class.<br>
Modes of INERITANCE:-<br>
1).Public inheritance:- members of the base class retain their visiblty in the in the derieved class .Public members remain public<br>
2).Protected inheritance :-public and protected members of the base class become protected in derived class<br>
3).Private inheritance:-all publicand protected member of the base class become private in the derived class<br>

Single Inheritance:<br>
A derived class inherits from a single parent class.<br>
Multiple Inheritance<br>
A derived class inherits from more than one parent class.<br>
Multilevel Inheritance:<br>
A class is derived from another child class.<br>
Hierarchical Inheritance:<br>
Multiple child classes inherit from the same parent class<br>

CODE:-

1).SINGLE INHERITANCE <br>

    #include<iostream>
    #include<string>
    using namespace std;

    class UNI {
    public:
    string uni = "symbiosis";
    void discipline() {
        cout << "engineering" << endl;
    }
    };

    class DEPT : public UNI {
    public:
    string dept = "Electronics & Telecommunication";
    };

    int main() {
    DEPT u1;
    u1.discipline();
    cout << u1.uni + " " + u1.dept << endl;
    return 0;
    }

2).MULTIPLE INHERITANCE <br>

    #include <iostream>
    #include <string>

    using namespace std;
    class Vechile {
    public:
    string company ="Ford";
    void type(){
        cout<<"Mustang"<<endl;
    }
    };



    class Specs {
    public:
    string mileage ="8kmpl";
    void colour(){
        cout<<"Grey"<<endl;

    }
    };
    class Car: public Vechile, public Specs {
    public:
    string seater = "4 seater";
    };
    int main(){
    Car f2;
    f2.colour();
    cout<<f2.company<<" ";
    f2.type();
    cout<<"("<<f2.seater<<")"<<endl<<"MILEAGE:"<<f2.mileage<<endl;
    }

3).MULTILEVEL INHERITANCE <br>

    #include <iostream>
    #include <string>
    using namespace std;

    class plantKingdom
    {
    public:
    string plant = "Plant Classification";
    void plantKing()
    {
        cout << "Kingdom: Plantae ";
    }
    };

    class division: public plantKingdom
    {
    public:
    string div = "Division: Magnoliophyta ";
    };

    class plantClass: public division
    {
    public:
    string pClass = "Class: Magnoliopsida ";
    };

    class plantOrder: public plantClass
    {
    public:
    string pOrder = "Order: Rosales ";
    };

    class plantFamily: public plantOrder
    {
    public:
    string pFamily = "Family: Rosaceae";
    };

    class plantGenus: public plantFamily
    {
    public:
    string pGenus = "Genus: Rosa";
    };

    class plantSpecies: public plantGenus
    {
    public:
    string pSpecies = "Species: Rosa indica";
    };

    int main()
    {
    plantSpecies p1;
    cout << p1.plant << endl;
    p1.plantKing();
    cout << endl;
    cout << p1.div << endl;
    cout << p1.pClass << endl;
    cout << p1.pOrder << endl;
    cout << p1.pFamily << endl;
    cout << p1.pGenus << endl;
    cout << p1.pSpecies << endl;
    }

4).HIERARCHICAL INHERITANCE<br>

    #include <iostream>
    using namespace std;

    class Animal
    {
    public:
    void eat()
    {
        cout << "This animal eats food." << endl;
    }
    };

    class Mammal : public Animal
    {
    public:
    void sound()
    {
        cout << "Mammal makes sound." << endl;
    }
    };

    class Bird : public Animal
    {
    public:
    void fly()
    {
        cout << "Bird flies in the sky." << endl;
    }
    };

    int main()
    {
    Mammal dog;
    Bird sparrow;

    cout << "Mammal actions:" << endl;
    dog.eat();   
    dog.sound();
    cout << "\nBird actions:" << endl;
    sparrow.eat(); 
    sparrow.fly();

    return 0;
    }

    
OUTPUT:-

1).<br>
![exp14](https://github.com/VandanGupte101727/CDS-experiment-14-/blob/main/Screenshot%202024-09-15%20at%2010.44.42%20AM.png)<br>

2).<br>
![exp14](https://github.com/VandanGupte101727/CDS-experiment-14-/blob/main/Screenshot%202024-09-15%20at%2010.45.07%20AM.png)<br>

3).<br>
![exp14](https://github.com/VandanGupte101727/CDS-experiment-14-/blob/main/Screenshot%202024-09-14%20at%2011.00.29%20PM.png)<br>

4).<br>
![exp14](https://github.com/VandanGupte101727/CDS-experiment-14-/blob/main/Screenshot%202024-09-15%20at%2012.51.51%20AM.png)<br>




