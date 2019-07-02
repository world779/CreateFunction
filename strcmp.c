int strcmp1(const char *str1, const char *str2){
  while(1){
    if(*str1 == '\0' && *str2 == '\0') return 0;
    else if(*str1 == '\0') return -1;
    else if(*str2 == '\0') return 1;
    else if(*str1 < *str2) return -1;
    else if(*str1 > *str2) return 1;
    str1++;
    str2++;  
  }
}
