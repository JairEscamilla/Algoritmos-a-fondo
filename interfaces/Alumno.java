package interfaces;

public class Alumno implements Comparable <Alumno>{
    private String nombre;
    private int edad;
    private double notaPromedio;

    // Constructor
    public Alumno(String nom, int e, double np){
        this.nombre = nom;
        this.edad = e;
        this.notaPromedio = np;
    }
    // Metodo heredado de la interface Comparable
    public int compareTo(Alumno otroAlumno){
        return this.edad - otroAlumno.edad;
    }
    public String toString(){
        return nombre+", "+edad+", "+notaPromedio;
    }
}