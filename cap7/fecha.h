// Defino el tipo fecha
typedef long Fecha;
// Crea una fecha
Fecha crearFecha(int, int, int);
// Dada una fecha retorna el dia
int obtenerDia(Fecha);
// Dada una fecha retorna el mes
int obtenerMes(Fecha);
// Dada una fecha retorna el anio
int obtenerAnio(Fecha);
// Dadas 2 fechas f1 y f2 retorna un valor que sera
// mayor, menor, o igual a 0segun f2 lo sea respecto de f1
int compararFechas(Fecha, Fecha);
// Dada una fecha retorna una cadena con formato dd/mm/aaaa
char* toString(Fecha f);
