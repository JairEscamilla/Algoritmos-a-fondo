package EstructurasJava;

import java.util.Hashtable;

public class testSortedHashTable{
    public static void main(String[] args) {
        sortedHashTable<Integer, String> tabla = new sortedHashTable<>();
        tabla.put(1, "uno");
        tabla.put(2, "dos");
        tabla.put(3, "tres");
        for (int i = 0; i < tabla.keyCount(); i++) {
            int key = tabla.getKeyAt(i);
            String value = tabla.get(key);
            System.out.println(value);
        }
    }
}