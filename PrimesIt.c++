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
                B (int i) {
                    _i = i;}

                bool operator == (const B& rhs) {
                    return _i == rhs._i;}

                bool operator != (const B& rhs) {
                    return _i != rhs._i;}

                int operator * () {
                    return _i;}

                B& operator ++ () {
                    while(!isPrime(_i){
                      ++_i;}
                    return *this;}};

        B begin () {
            return B(2);}

        B end () {
            return B(13);}};
