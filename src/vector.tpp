#include <iostream>

template<typename T> void tinystl::vector<T>::push_back(T arg){
    std::cout << arg << '\n';
}

