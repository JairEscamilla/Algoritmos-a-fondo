package OOP;
public class test{
    public static void main(String[] args){
        Fecha f = new Fecha();
        Fecha f2 = new Fecha("2/5/2000");
        f.setDia(2);
        f.setMes(5);
        f.setAnio(2000);
        System.out.println("Dia: "+f.getDia());
        System.out.println("Mes: "+f.getMes());
        System.out.println("Anio: "+f.getAnio());
        System.out.println(f);
        if(f.equals(f2))
            System.out.println("Son iguales");
    }
}