int atoi1(const char *str){
  const char *p;
  int result = 0;

  p = str;
  if(*p == '-') p++;

  while(*p != '\0'){    
    result = result * 10 + *p - '0';
    p++;
  }
  
  if(*str == '-') result = -result; 
  
  return result;
}
