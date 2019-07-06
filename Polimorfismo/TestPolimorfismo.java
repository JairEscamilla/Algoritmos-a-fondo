package Polimorfismo;

import OOP.Fecha;
import Herencia.FechaDetallada;
public class TestPolimorfismo{
    public static void main(String[] args) {
        // A fec (de tipo fecha) le asignamos un objeto FechaDetallada
        Fecha fec = new FechaDetallada(25, 02, 2009);
        // A obj (de tipo Object) le asignamos un objeto FechaDetallada
        Object obj = new FechaDetallada(3, 12, 2008);

        // Imprimirmos los dos objetos
        System.out.println(fec);
        System.out.println(obj);
    }
}