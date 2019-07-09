package colecciones;
import java.util.Scanner;

public class TestColeccion{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // Creamos la coleccion inicial con capacidad de 5
        MiColeccion mc = new MiColeccion(5);
        // Leemos el primer nombre
        System.out.println("Ingrese nombre: ");
        String nom = scanner.nextLine();
       while(!nom.equals("FIN")){
            mc.insertar(nom, 0);
            // Leemos el siguiente nombre
            nom = scanner.nextLine();
        }
        String aux;
        // Recorremos la coleccion y tomamos cada uno de sus elementos
        for (int i = 0; i < mc.cantidad(); i++) {
            // El metodo obtener retorna un Object
            // entonces tenemos que "castear" a String
            aux = (String)mc.obtener(i);
            System.out.println(aux+ " - "+aux.length()+ " caracteres,");
        }
        scanner.close();
    }
}