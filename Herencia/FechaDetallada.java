package Herencia;
import OOP.Fecha;

public class FechaDetallada extends Fecha{
    private static String meses[] = {"Enero", "Febrero",
                                     "Marzo", "Abril",
                                     "Mayo", "Junio", 
                                     "Julio", "Agosto",
                                     "Septiembre", "Octubre", 
                                     "Noviembre", "Diciembre"};
    // Constructor nulo
    public FechaDetallada(){
    }

    // Constructor que recibe dia, mes y anio
    public FechaDetallada(int d, int m, int a){
        setDia(d);
        setMes(m);
        setAnio(a);
    }

    public String toString(){
        return getDia() + " de "+ meses[getMes()-1] + " de " + getAnio();
    }
}