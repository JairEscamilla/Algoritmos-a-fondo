package libro.cap13.cadenas;

public class prefsuf{
    public static void main(String[] args){
        String s = "Un buen libro de Algoritmos";
        boolean b1 = s.startsWith("Un buen"); // true 
        boolean b2 = s.startsWith("A"); // false 
        boolean b3 = s.endsWith("Algoritmos"); // true
        boolean b4 = s.endsWith("Chau"); // false
        System.out.println(b1);
        System.out.println(b2);
        System.out.println(b3);
        System.out.println(b4);
    }
}