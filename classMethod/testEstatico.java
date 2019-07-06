package classMethod;

public class testEstatico{
    private int a = 0;
    public void unMetodo(){
        System.out.println("Esto es un metodo");
    }
    public static void main(String[] args) {
        testEstatico t = new testEstatico();
        System.out.println("a vale "+t.a);

        t.unMetodo();
    }
}