#include <iostream>

namespace tinystl {
    template<typename T> class vector {
        public:
            void push_back(T);
            T& operator[](int);
        private:
            T* data;
            int size;
    };
}

#include "vector.tpp"