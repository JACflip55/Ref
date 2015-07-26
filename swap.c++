//swap.c++

template <typename T> 
void my_swap ( T& a, T& b ) {
  T c(a); //copy constructor
  a = b;
  b = c;}


template <typename FI> 
void my_swap_range ( FI b1, FI e1, FI b2 ) {
  while(b1 != e1) {
    my_swap(*b1, *b2);
    ++b1;
    ++b2;}}
