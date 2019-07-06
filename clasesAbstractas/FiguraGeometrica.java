package clasesAbstractas;

public abstract class FiguraGeometrica{
    // Metodo abstracto
    public abstract double area();
    public String toString(){
        return "area = " + area();
    }
}