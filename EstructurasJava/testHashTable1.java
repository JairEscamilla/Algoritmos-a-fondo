package EstructurasJava;

import java.util.Enumeration;
import java.util.Hashtable;

public class testHashTable1{
    public static void main(String[] args) {
        Hashtable<Integer, String> tabla = new Hashtable<>();
        tabla.put(1, "uno");
        tabla.put(2, "dos");
        tabla.put(3, "tres");
        for (Enumeration<Integer> e = tabla.keys(); e.hasMoreElements();) {
            int key = e.nextElement();
            String value = tabla.get(key);
            System.out.println(value);
        }
    }
}