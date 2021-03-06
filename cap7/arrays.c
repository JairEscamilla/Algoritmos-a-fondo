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

void insertar(int a[], int* len, int v, int pos){
  for(int i = *len; i > pos; i--){
    a[i] = a[i-1];
  }
  a[pos] = v;
  *len = *len + 1;
}

void eliminar(int a[], int* len, int pos){
  for(int i = pos; i < *len-1; i++){
    a[i] = a[i+1];
  }
  *len = *len - 1;
}

int insertarEnOrden(int a[], int* len, int v){
  int i = 0;
  while(i < * len && a[i] <= v){
    i = i + 1;
  }
  insertar(a, len, v, i);
  return i;
}
