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
    Hero a; // create obj  aur im creating this static allocation 
    a.setHealth(90);
    a.setLevel('O');
    cout<<a.level<<endl;
    cout<<a.getHealth()<<endl;

    //or dynmaically allocation look like this type (int * i  =  new int;)
    Hero *b = new Hero;
    b->setLevel('A');
    b->setHealth(80);
    cout<<(*b).level<<endl;   //(*b) this write because dereference 
    cout<<(*b).getHealth()<<endl;

    //this is alternate for access or print using Arrow -> 
    cout<<b->level<<endl;
    cout<<b->getHealth()<<endl;

    

    // Hero vivek;
    // // cout<<vivek.getHealth()<<endl;
    // // cout<<vivek.getLevel()<<endl;

    // //vivek.health = 80;
    // vivek.setHealth(90);
    // vivek.level = 'A';
    // cout<<sizeof(vivek)<<endl;
    // cout<<vivek.getHealth()<<endl;
    // cout<<vivek.level<<endl;
    return 0 ;
}