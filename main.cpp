#include <iostream>
#include "AcMath.h"


using namespace std;

int main() {
//    AcMath ac= AcMath();
//    cout << ac.factorial(0) << endl;
//    cout << ac.factorial(1) << endl;
//    cout << ac.factorial(2) << endl;
//    cout << ac.factorial(3) << endl;
//    cout << ac.factorial(4) << endl;
//    cout << ac.factorial(5) << endl;


    cout <<  AcMath::factorial(0) << endl;
    cout <<  AcMath::factorial(1) << endl;
    cout <<  AcMath::factorial(2) << endl;
    cout <<  AcMath::factorial(3) << endl;
    cout <<  AcMath::factorial(4) << endl;
    cout <<  AcMath::factorial(5) << endl;

    cout <<  AcMath::factorial(6) << endl;
    cout <<  AcMath::factorial(7) << endl;
    cout <<  AcMath::factorial(8) << endl;
    cout <<  AcMath::factorial(9) << endl;


//    map<int,int> test;
//    test[0]=1;
//    test[1]=1;
//    test[5]=120;
//
////    map<int,int>::iterator i;
////    for(i = test.begin(); i!=test.end();++i){
////        cout << i->first << "-->" << i->second << endl;
////    }
//    map<int, int>::iterator it = test.find(2);
//    cout << it->first << "-->" << it->second << endl;



    return 0;
}