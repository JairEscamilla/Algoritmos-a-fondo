package OOP;
import java.util.Scanner;

public class testfecha2{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int dia, mes, anio;
        Fecha f1, f2;
        System.out.println("Ingrese fecha 1: ");
        dia = scanner.nextInt();
        mes = scanner.nextInt();
        anio = scanner.nextInt();
        // Instanciamos un nuevo objeto de la clase fecha
        f1 = new Fecha(dia, mes, anio);
        
        System.out.println("Ingrese fecha 2: ");
        dia = scanner.nextInt();
        mes = scanner.nextInt();
        anio = scanner.nextInt();
        
        f2 = new Fecha(dia, mes, anio);
        System.out.println("Fecha 1: "+f1);
        System.out.println("Fecha 2: "+f2);
        
        if(f1.equals(f2))
            System.out.println("Son iguales");
        else
            System.out.println("Son distintas");
    }
}