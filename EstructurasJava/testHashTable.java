package EstructurasJava;

import java.util.Hashtable;
import java.util.Scanner;

public class testHashTable{
    public static void main(String[] args) {
        // Instanciamos una tabla que asocia personas a cadenas
        Hashtable<String, Persona> tabla = new Hashtable<>();

        // Agregamos las instancias de persona relacionandolas a las claves
        tabla.put("Pablo", new Persona("Pablo", 41, "Los Alamos 22"));
        tabla.put("Juan", new Persona("Juan", 34, "Pje. Roca 34"));
        tabla.put("Pedro", new Persona("Pedro", 24, "San Martin 415"));

        // Le pedimos al usuario que ingrese un nombre por teclado
        Scanner scanner = new Scanner(System.in);
        System.out.println("Ingrese un nombre: ");
        String nom = scanner.nextLine();

        // Obtenemos el objeto relacionado al nombre ingresado y lo mostramos

        Persona p = tabla.get(nom);
        if (p != null) {
            System.out.println(p);
        }else{
            System.out.println("No hay datos de "+nom);
        }
    }
}