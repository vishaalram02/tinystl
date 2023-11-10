#include <iostream>
#include <initializer_list>

namespace tinystl {
    template<typename T> class vector {
        public:
            vector();
            ~vector();
            vector(int);
            vector(std::initializer_list<T>);
            void push_back(T);
            T& operator[](int);
        private:
            T* data;
            int size;
            int capacity;
    };
}

#include "vector.tpp"