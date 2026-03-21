//public means you can access inside the class as well as outside the class 
//In private you can access only inside the class 



#include<bits/stdc++.h>
using namespace std;
class Hero{
    public:
    //proeprties 
    int health;
    char level;
    
    void print(){
        cout<<level<<endl;
    }
};


int main(){
    Hero vivek;
    vivek.health = 80;
    vivek.level = 'A';

    cout<<vivek.health<<endl;
    cout<<vivek.level<<endl;
    return 0 ;
}