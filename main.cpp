#include <iostream>
#include "AcMath.h"
#include <sys/time.h>



using namespace std;

int main() {
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

    double ti,tf,tempo; // ti = tempo inicial // tf = tempo final
    //ti = tf = tempo = 0;
    timeval tempo_inicio,tempo_fim;
    gettimeofday(&tempo_inicio,NULL);


    cout << AcMath::arrangement(4) << endl;
    cout << AcMath::arrangement(4,2) << endl;
    cout << AcMath::arrangement(4,3) << endl;
    //TODO - verificar este caso, se está correto, ja que arranjo de 4,3 e 4,4 resultam no mesmo valor
    cout << AcMath::arrangement(4,4) << endl;
    //cout << AcMath::combination(4,2) << endl;

    gettimeofday(&tempo_fim,NULL);
    tf = (double)tempo_fim.tv_usec + ((double)tempo_fim.tv_sec * (1000000.0));
    ti = (double)tempo_inicio.tv_usec + ((double)tempo_inicio.tv_sec * (1000000.0));
    tempo = (tf - ti) / 1000;
    printf("Tempo gasto em milissegundos %.6f\n",tempo);

    int n = 1;
    int p = 2;

    string key = std::to_string(n)+string(",")+std::to_string(p);
    cout << key << endl;


    return 0;
}