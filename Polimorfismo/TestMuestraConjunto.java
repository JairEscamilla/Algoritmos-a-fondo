package Polimorfismo;

import OOP.Fecha;
import Herencia.FechaDetallada;

public class TestMuestraConjunto{
    public static void main(String[] args) {
        Object[] arr = {
            new Fecha(2, 10, 1970),
            new FechaDetallada(23, 12, 1948),
            new String("Esto es una cadena")
        };
        MuestraConjunto.mostrar(arr);
    }
}