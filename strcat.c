char *strcat1(char *dest, const char *src){
  char *p;
  p = dest;

  while(*p != '\0')  p++;
  
  while(*src != '\0'){
    *p = *src;
    p++;
    src++;
  }
  return dest;

}
