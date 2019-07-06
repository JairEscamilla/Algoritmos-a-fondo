package clasesAbstractas;

public class Triangulo extends FiguraGeometrica{
    private double base;
    private double altura;
    public Triangulo(int b, int h){
        base = b;
        altura = h;
    }
    public double area(){
        return base*altura/2;
    }
}