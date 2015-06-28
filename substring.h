bool my_substring(const char *a, const char *b){
  const char * bb = b;
  while(*a != 0){
    while(*a == *b && *a != 0){
        ++a;
        ++b;}
        if(b == 0){
          return true;}
        b = bb;}
  return false;}
