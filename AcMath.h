//
// Created by marcelo on 05/05/15.
//

#ifndef BROKEN_KEYS_ACMATH_H
#define BROKEN_KEYS_ACMATH_H


#include <map>
#include <iostream>

class AcMath {

private:
 static std::map<int,int> factorial_buffer;

public:
 static int factorial(int);

};



#endif //BROKEN_KEYS_ACMATH_H
