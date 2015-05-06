//
// Created by marcelo on 05/05/15.
//

#ifndef BROKEN_KEYS_ACMATH_H
#define BROKEN_KEYS_ACMATH_H


#include <map>
#include <iostream>
#include <string>

class AcMath {

private:
 static std::map<int,int> factorial_buffer;
 static std::map<std::string,int> arrangement_buffer;


public:
 static int factorial(int);
 static int arrangement(int,int=-1);
 static int combination(int,int=-1);

};



#endif //BROKEN_KEYS_ACMATH_H
