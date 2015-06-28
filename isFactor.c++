
template <typename UP>
UP F(int f){
  return [f] (int n) -> bool {return n%f == 0;};}
