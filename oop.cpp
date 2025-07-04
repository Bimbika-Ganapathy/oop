#include <iostream>
#include <string>
using namespace std;

// // class A{
// //     public:

// //     int a;
// //     string b;

// //     void method1(){
// //         cout<<"hiiiiiii";
// //     }
// // };

// class A{
//     public:

//     int a;
//     string b;

//     void add();
// };

// class car{
//     public:
//     int speed(int maxspeed);
// };

// int car::speed(int maxspeed){
    
//     return maxspeed;
// }

// void A::add(){
//     cout<<"hello world";
// }


// int main(){
//     // A myobj;
//     // myobj.a=1;
//     // myobj.b="HI";
//     // cout<<myobj.a<<myobj.b;
//     // // myobj.method1();
//     // myobj.add();
//     car myobj;
//     cout<<myobj.speed(1000);
//     return 0;
// }

// constuctor

class myclass{
    public:
    myclass(){
        cout<<"hiii";
    }
};

int main(){
   myclass myobj;  //Create an object of MyClass (this will call the constructor)
    return 0;

}