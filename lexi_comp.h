template<typename II>
bool my_lexicographical_compare (II b1, II e1, II b2, II e2) {
  while(b1 != e1 && b2 != e2){
    if(b2 == e2 || *b1 > *b2)
      return false;
    else if(*b1 < *b2)
      return true;
    ++b1;
    ++b2;}
  return(b2 != e2);}

    
