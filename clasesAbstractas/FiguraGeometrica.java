package clasesAbstractas;

public abstract class FiguraGeometrica{
    private String nombre;
    // Metodo abstracto
    public abstract double area();

    // Agregamos el constructor
    public FiguraGeometrica(String nom){
        nombre = nom;
    }
    public static double areaPromedio(FiguraGeometrica arr[]){
        int sum = 0;
        for(int i = 0; i < arr.length; i++){
            sum += arr[i].area();
        }
        return sum/arr.length;
    }
    // Ahora en el toString mostramos el nombre
    public String toString(){
        return nombre + " (area = " + area()+") ";
    }
    public String getNombre(){
        return nombre;
    }
    public void setNombre(String nombre){
        this.nombre = nombre;
    }
}