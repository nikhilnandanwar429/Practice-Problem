#include<iostream>
using namespace std;

class Hero{
    //By default all is under private
    //private access only inside the class

    //Properties
    
    private:
    int health;

    public:
    int *name;
    char level;
    static int timeToComplete;

    //Default Constructor
    Hero(){
        cout << "COnstructor Calling " << endl;
    }

    //Paramerterised Constructor
    Hero(int health){
         
        this -> health = health;
    }

    Hero(int health ,char level){
        this -> level = level;
        this -> health = health;
    }

    void print(){
        cout << "Health " << this -> health <<endl;
        cout<< "Level " << this -> level <<endl;
    }

    int getHealth(){
        return health;
    }
    //Getter and Setter used to access private value outside the class
    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

    static int random(){
        return timeToComplete;
    }

    //Destructor 
    // Automatic call for static
    //MAnually call for dynamic
    ~Hero(){
        cout << "Destructor calling " << endl;
    }

};

int Hero::timeToComplete = 5;

int main()
{
    cout << Hero::random() <<endl;

    cout << Hero::timeToComplete << endl;

    Hero a;

    cout << a.timeToComplete << endl;

    Hero b;
    b.timeToComplete = 10 ;
    cout << a.timeToComplete <<endl;
    cout << b.timeToComplete << endl;

    // Hero n;

    // Hero *b = new Hero();

    // delete b;


//     Hero S(70 ,'C');
//     S.print();

// //Copying COnstructor
// //Copy values of S in R
//     Hero R(S);
//     R.print();



    




    // Hero ramesh(10);
    // cout << "Address of Ramesh " << &ramesh <<endl;
    // ramesh.print();

    // Hero *h = new Hero(11);
    // h->print();
    
    // Hero temp(22,'B');
    // temp.print();

    // //Static allocation
    // Hero a;
    // a.setHealth(80);
    // a.setLevel('B');
    // cout << "Level is " << a.level <<endl;
    // cout << "Health is  " << a.getHealth() <<endl;

    // //Dynamically allocation
    // Hero *b = new Hero;
    // b->setLevel('A');
    // b->setHealth(70);

    // cout <<"Level is " << (*b).level <<endl;
    // cout << "Health is " << (*b).getHealth() << endl;

    // cout <<"Level is " << b->level <<endl;
    // cout << "Health is " << b->getHealth() << endl;

    // //creation of Object
    // Hero h1;
    // cout <<"Size of h1 " << sizeof(h1) <<endl;

    // //Getter ==> To get value
    // //Setter ==> To set value
    // cout << "h1 Health is ==> " << h1.getHealth() << endl;

    // h1.setHealth(70);
    // h1.level = 'A';

    // cout<< "Health is " << h1.getHealth() <<endl;  //private within this context
    // cout<< "Level is " << h1.level <<endl;
    // //cout<<"size : "<< sizeof(h1) << endl;


    return 0;
}