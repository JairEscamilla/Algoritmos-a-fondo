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

int buscar(int a[], int len, int v){
  /*int i = 0;
  while (i < len && a[i] != v ) {
    i+= 1;
  }
  return i < len? i : -1;
  Esto esta bien, pero puede reescribirse de la forma:
  */
  int i;
  for(i = 0; i < len && a[i] != v; i++);
  return i < len? i: -1;
}

int buscarYagregar(int a[], int* len, int v, int* enc){
  int pos = buscar(a, *len, v);
  if (pos >= 0) {
    *enc = 1;
  }else{
    *enc =  0;
    pos = agregar(a, len, v);
  }
  return pos;
}
