package EstructurasJava;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;

public class ArrayListVsLinkedList2{
    public static void main(String[] args) {
        int n = 100000;
        List arrayList = generarLista(ArrayList.class, n);
        List linkedList = generarLista(LinkedList.class, n);

        performance p1 = new performance();
        while (!arrayList.isEmpty()) {
            arrayList.remove(0);
        }
        System.out.println(p1);

        performance p2 = new performance();
        while (!linkedList.isEmpty()) {
            linkedList.remove(0);
        }
        System.out.println(p2);

    }
    
    private static List generarLista(Class impleList, int n) {
        List lst = null;
        try {
            lst = (List) impleList.newInstance();
            for (int i = 0; i < n; i++) {
                lst.add(i);
            }

        } catch (Exception e) {
            e.printStackTrace(); // TODO: handle exception
        }
        return lst;
    }
}