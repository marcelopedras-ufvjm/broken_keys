//
// Created by marcelo on 05/05/15.
//

#include "AcMath.h"

std::map<int,int> AcMath::factorial_buffer;
std::map<std::string,int> AcMath::arrangement_buffer;
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
        //std::cout << "em cache: fat(" << n << ")=" << it->second << std::endl;
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

int AcMath::arrangement(int n, int p) {
    std::map<std::string,int>::iterator it;
    int result = 0;

    std::string key = std::to_string(n)+std::string(",")+std::to_string(p);

    it = arrangement_buffer.find(key);
    if(it->second != 0) {
        std::cout << "em cache: arrangement(" << n << "," << p <<")=" << it->second << std::endl;
        return it->second;
    }

    if(p!=-1){
        result = AcMath::factorial(n)/AcMath::factorial(n-p);
        arrangement_buffer[std::to_string(n)+std::string(",")+std::to_string(p)] = result;
    } else {
        for(int i = 0;i <=n;++i) {
            result += AcMath::arrangement(n,i);
        }
    }
    return result;
};

int AcMath::combination(int n, int p) {
    int result = 0;
    if(p!=-1){
        result = AcMath::factorial(n)/(AcMath::factorial(p)*AcMath::factorial(n-p));
    } else {
        for(int i = 0;i <=n;++i) {
            result += AcMath::arrangement(n,i);
        }
    }
    return result;
}
