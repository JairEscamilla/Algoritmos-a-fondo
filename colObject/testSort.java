package colObject;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class testSort{
    public static void main(String[] args) {
        ArrayList<String> arr = new ArrayList<>();
        arr.add("Javi");
        arr.add("George");
        arr.add("Eddie");
        arr.add("Bajo");
        arr.add("Logvin");
        arr.add("Jair");
        arr.add("Fido");
        arr.add("Ruls");
        arr.add("Ulises");

        // Orden alfabetico ascendente
        Collections.sort(arr, new OrdenAsc());
        mostrar(arr);
        System.out.println("-----");

        // Orden alfabetico descendente
        Collections.sort(arr, new OrdenDesc());
        mostrar(arr);
        System.out.println("-----");

        // Orden por cantidad de caracteres + orden alfabetico
        Collections.sort(arr, new OrdenCantCar());
        mostrar(arr);
        System.out.println("-----");
    }

    public static void mostrar(List<String> lst){
        for (String s : lst) {
            System.out.println(s);
        }
    }
}