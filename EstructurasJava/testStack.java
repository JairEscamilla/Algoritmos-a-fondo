package EstructurasJava;
import java.util.Stack;

public class testStack{
    public static void main(String[] args) {
        Stack<String> pila = new Stack<>();
        pila.push("uno");
        pila.push("dos");
        pila.push("tres");

        while (!pila.isEmpty()) {
            System.out.println(pila.pop());
        }
    }
}