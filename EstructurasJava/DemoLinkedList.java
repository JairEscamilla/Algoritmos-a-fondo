package EstructurasJava;

import java.util.LinkedList;
import java.util.ListIterator;

public class DemoLinkedList{
    public static void main(String[] args) {
        LinkedList<String> lst = new LinkedList<>();
        lst.add("Jhon");
        lst.add("Paul");
        lst.add("George");
        lst.add("Ringo");
        ListIterator<String> aux = lst.listIterator();
        while(aux.hasNext()){
            // String b = aux.next();
            //  System.out.println(b);
            System.out.println(aux.next());
        }
        System.out.println("------");
        while(aux.hasPrevious()){
            // String b = aux.previous();
            // System.out.println(b);
            System.out.println(aux.previous());
        }
    }
}