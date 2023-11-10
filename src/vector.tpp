template<typename T> tinystl::vector<T>::vector() :  data(nullptr), size(0), capacity(0) { }
template<typename T> tinystl::vector<T>::vector(int size) : data(new T[size]), size(size), capacity(size) { }
template<typename T> tinystl::vector<T>::vector(std::initializer_list<T> init_list) : data(nullptr), size(0), capacity(0) {
    for(auto it = init_list.begin(); it != init_list.end(); it++){
        push_back(*it);
    }
}

template<typename T> tinystl::vector<T>::~vector(){
    delete[] data;
}

template<typename T> void tinystl::vector<T>::push_back(T arg){
    if(size == capacity){
        capacity = capacity == 0 ? 1 : capacity * 2;
        T* new_data = new T[capacity];
        memcpy(new_data, data, size * sizeof(T));
        delete[] data;
        data = new_data;
    }
    data[size++] = arg;
}

template<typename T> T& tinystl::vector<T>::operator[](int index){
    return data[index];
}

