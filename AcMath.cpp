//
// Created by marcelo on 05/05/15.
//

#include "AcMath.h"

std::map<int,int> AcMath::factorial_buffer;
/**
 * Método fatorial recursivo utilizando-se programação dinâmica
 */
int AcMath::factorial(int n){
    std::map<int,int>::iterator it;
    int result;

    /*
     * versão recursiva
     * */

    if(n == 0 || n == 1)
        return 1;

    it = AcMath::factorial_buffer.find(n);

    if(it->second != 0) {
        std::cout << "em cache: fat(" << n << ")=" << it->second << std::endl;
        return it->second;
    }

    result = n*factorial(n-1);
    AcMath::factorial_buffer[n]=result;
    return result;

    /*
     * versão não recursiva
     * */



//    if(n == 0 || n == 1)
//        return 1;
//
//    it = AcMath::factorial_buffer.find(n);
//    if(it->second != 0) {
//        //std::cout << "em cache" << std::endl;
//        return it->second;
//    }
//
//
//    int min = 1;
//    int buffer = 1;
//
//    for(int i=n; i > min; --i){
//        buffer = buffer * i;
//    }
//
//    AcMath::factorial_buffer[n]=buffer;
//
//    return buffer;
};