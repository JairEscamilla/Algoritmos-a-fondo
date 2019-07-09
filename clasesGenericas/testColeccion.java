package clasesGenericas;

import java.util.Scanner;

public class testColeccion{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Ingrese nombre: ");
        String nom = scanner.nextLine();

        // Instanciamos una coleccion especializada a String
        coleccion<String> mc = new coleccion<>(5);
        while(!nom.equals("FIN")){
            mc.insertar(nom, 0);
            nom = scanner.nextLine();
        }
        String aux;
        for (int i = 0; i < mc.cantidad(); i++) {
            aux = mc.obtener(i);
            System.out.println(aux + " - "+aux.length()+" caracteres");
        }
    }
}