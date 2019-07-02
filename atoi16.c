int atoi2( const char *str){
  const char *p;
  int result = 0;

  p = str;

  while(*p != '\0'){
    if(*p-'a' >= 0 && *p-'f' <= 0)
      result = result * 16 + *p-'a' + 10;

    else if(*p-'A' >= 0 && *p-'F' <= 0)
      result = result * 16 + *p-'A' + 10;

    else 
      result = result * 16 + *p - '0';
    p++;
  }
  
  return result;
}
