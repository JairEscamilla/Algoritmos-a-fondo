package clasesAbstractas;
public class Rectangulo extends FiguraGeometrica{
    private double base;
    private double altura;
    public Rectangulo(double b, double h){
        base = b;
        altura = h;
    }
    public double area(){
        return base*altura;
    }
}