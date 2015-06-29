class Binary {
    public:
        class It {
            private:
                int _i;

            public:
                It (int i) {
                    _i = i;}

                bool operator == (const It& rhs) {
                    return _i == rhs._i;}

                bool operator != (const It& rhs) {
                    return _i != rhs._i;}

                int operator * () {
                    return _i%2;}

                It& operator ++ () {
                    while(!isPrime(_i)){
                      ++_i;}
                    return *this;}};

        It begin () {
            return It(0);}

        It end () {
            return It(10);}};
