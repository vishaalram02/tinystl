#include "vector.h"
#include <iostream>


int main(){
    tinystl::vector<int> v;
    for(int i = 0; i < 10; i++) v.push_back(i);
    for(int i = 0; i < 10; i++) std::cout << v[i] << std::endl;

    tinystl::vector<int> w = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++) std::cout << w[i] << std::endl;
    return 0;
}