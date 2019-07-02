char *strpbrk1(const char *str, const char *charset){
  const char *p, *q;

  for(p = str; *p != 0; p++){
    for(q = charset; *q != 0; q++){
      if(*p == *q)  
	return ((char *)p);
    }
  }
  return NULL;
}
