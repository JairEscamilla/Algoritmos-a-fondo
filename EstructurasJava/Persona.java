package EstructurasJava;
public class Persona{
    private String nombre;
    private int edad;
    private String direccion;
    public Persona(String nombre, int edad, String direccion){
        this.nombre = nombre;
        this.edad = edad;
        this.direccion = direccion;
    }
    public String toString(){
        return nombre + ", "+ edad + " anios, vive en " + direccion; 
    }
}