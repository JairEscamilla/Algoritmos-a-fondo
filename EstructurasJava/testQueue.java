package EstructurasJava;

import java.util.Queue;
import java.util.LinkedList;
import java.util.Stack;

public class testQueue{
    public static void main(String[] args) {
        Queue<String> cola = new LinkedList<>();
        cola.add("uno");
        cola.add("dos");
        cola.add("tres");
        System.out.println(cola.poll());
        System.out.println(cola.poll());
        cola.add("cuatro");
        cola.add("cinco");
        cola.add("seis");

        while (!cola.isEmpty()) {
            System.out.println(cola.poll());
        }
    }
}