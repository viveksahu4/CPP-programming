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
    Hero vivek;
    // cout<<vivek.getHealth()<<endl;
    // cout<<vivek.getLevel()<<endl;

    //vivek.health = 80;
    vivek.setHealth(90);
    vivek.level = 'A';

    cout<<vivek.getHealth()<<endl;
    cout<<vivek.level<<endl;
    return 0 ;
}