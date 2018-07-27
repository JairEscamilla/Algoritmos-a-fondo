void dividirFecha(long f, int* d, int* m, int* a){
    int resto;
    *a = f/10000;
    resto = f%10000;
    *m = resto / 100;
    *d = resto % 100;
}
int esAnioBisiesto(int a){
  int multi4, multi100, multi400;
  multi4 = a % 4 == 0;
  multi100 = a % 100 == 0;
  multi100 = a % 400 == 0;
  return (multi4 && !multi100) || multi400;
}
