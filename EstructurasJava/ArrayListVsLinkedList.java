package EstructurasJava;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;

public class ArrayListVsLinkedList{
    public static void main(String[] args) {
        // Generamos dos listas de n elementos cada una
        int n = 100100;
        List arrayList = generarLista(ArrayList.class, n);
        List linkedList = generarLista(LinkedList.class, n);
       
        // Recorremos la lista y accedemos al i-esimo elemento
        performance p1 = new performance();
        for (int i = 0; i < n; i++) {
            arrayList.get(i);
        }
        System.out.println(p1);

        // Recorremos la lista y accedemos al i-esimo elemento
        performance p2 = new performance();
        for (int i = 0; i < n; i++) {
            linkedList.get(i);
        }
        System.out.println(p2);
    }
    private static List generarLista(Class impleList, int n){
        List lst = null;
        try {
            lst = (List)impleList.newInstance();
            for (int i = 0; i < n; i++) {
                lst.add(i);
            }
            
        } catch (Exception e) {
            e.printStackTrace(); //TODO: handle exception
        }
        return lst;
    }
}