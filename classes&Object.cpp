// class---> extension of structures (in C)
// structures had limitations
//         ----> members are public
//         ----> no methods
// classes can have methods and properties
// classes can make few members as private & few as public
// structures in c++ are typedefed
// you can declare object along with the class declartion like this :
//       class Employee{
//          //class definition
//  } neha, rohan,lovish;
// harry.salary = 8   --- makes no sense if salary is private

//NESTING OF MEMBER FUCTIONS----
/*Agar apka koi bhi ek function h jo ki aapne already bna rakha h or agar vo apka koi private variable
use kr raha h yaa kisi bhi tarah ka function h to aap uss function ke ander se dusre function ko call kr 
skte h bina dot lgaye*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    class binary{
        string s;
        public:
            void read(void);

    }
}