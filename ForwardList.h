template< typename T >
class my_forward_list {
    private:
        struct my_fl_node {
            T data;
            my_fl_node * next;}
            public:
                B (int i) {
                    _i = i;}
    private: 
        my_fl_node * begin;
        size_type size;
        
    public:
        size_type size(){
          return this->size;}

                bool operator == (const B& rhs) {
                    return this-> begin == rhs.begin;}

                bool operator != (const B& rhs) {
                    return _i != rhs._i;}

                int operator * () {
                    return _i;}

                B& operator ++ () {
                    ++_i;
                    return *this;}};
    public:
        B begin () {
            return B(2);}

        B end () {
            return B(5);}};
