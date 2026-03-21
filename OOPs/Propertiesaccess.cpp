//public means you can access inside the class as well as outside the class 
//In private you can access only inside the class 



#include<bits/stdc++.h>
using namespace std;
class Hero{
    public:
    //proeprties 
    int health;
    private:
    char level;
    
    void printm(){
        cout<<level<<endl;
    }
};


int main(){
    Hero vivek;
    cout<<vivek.health<<endl;
    // cout<<vivek.level<<endl;
    return 0 ;
}