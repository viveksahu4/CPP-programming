//public means you can access inside the class as well as outside the class 
//In private you can access only inside the class 



#include<bits/stdc++.h>
using namespace std;
class Hero{
    private:
    //proeprties 
    int health;

    public:
    char level;
    //constructor 
    Hero(){
        cout<<"constructor called "<<endl;
    }
    Hero(int health, char level){

        cout<<"this->"<<this << endl;
        this->level = level;
        this->health = health;
    }
    
    void print(){
        cout<<level<<endl;
    }

    int getHealth(){ // getter
        return health;
    }

    char getLevel(){ //getter
        return level;
    }

    void setHealth(int h){ //setter
    health = h;
        
    }

    void setLevel(char ch){ //setter
        level = ch;
    }
};


int main(){
    cout<<"hi"<<endl;
    //obj create statically  
    Hero vivek(10,'c'); // behind the scene jab obj create krte h jab ek cheez call hoti h jisko hmm bolte h Constructor aur ha iska koe return type nhi hota 
    cout<<"Address of vivek"<<&vivek<<endl;

    cout<<"hello"<<endl;

    
    //this is dynamically create obj.
    Hero *h = new Hero(10,'b');
    Hero temp(10,'A');
temp.print();
    return 0 ;
}