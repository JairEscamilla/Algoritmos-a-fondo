package OOP;
public class test{
    public static void main(String[] args){
        Fecha f = new Fecha();
        f.setDia(2);
        f.setMes(5);
        f.setAnio(2000);
        System.out.println("Dia: "+f.getDia());
        System.out.println("Mes: "+f.getMes());
        System.out.println("Anio: "+f.getAnio());
    }
}