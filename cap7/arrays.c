int agregar(int a[], int* len, int v){
  /*a[*len] = v;
  *len = *len + 1;
  //return len - 1;
  return 0;
  */
  // Forma rapida:
  a[(*len)++] = v;
  return *len-1;
}
