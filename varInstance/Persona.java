package varInstance;

import OOP.Fecha;
import Herencia.FechaDetallada;

public class Persona{
    private String nombre;          // Atributo
    private String dni;             // Atributo
    private Fecha fechaNacimiento;  // Atributo
    private int cont = 0;           // Variable de estado
    public Persona(String nombre, String dni, Fecha fecNac){
        this.nombre = nombre;
        this.dni = dni;
        this.fechaNacimiento = fecNac;
    }

    public String toString(){
        cont++;
        return nombre + ", DNI: "+dni
               +", nacido el: "+fechaNacimiento
               + " ("+cont+")";
    }
}