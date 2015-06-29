include <math.h>

class Prime {
    public:
        class It {
            private:
                int _i;
                bool isPrime(int n){
                  for(int i = 2; i<sqrt(n); i++){
                    if(n%i == 0){
                      return false;}}
                  return true;}
            public:
                It (int i) {
                    _i = i;}

                bool operator == (const It& rhs) {
                    return _i == rhs._i;}

                bool operator != (const It& rhs) {
                    return _i != rhs._i;}

                int operator * () {
                    return _i;}

                It& operator ++ () {
                    while(!isPrime(_i)){
                      ++_i;}
                    return *this;}};

        It begin () {
            return It(2);}

        It end () {
            return It(13);}};
