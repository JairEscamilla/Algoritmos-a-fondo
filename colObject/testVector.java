package colObject;
import java.util.Vector;


public class testVector{
    public static void main(String[] args) {
        // Instancuamos un vector especializado en String
        Vector<String> v = new Vector<>();

        // Le asignamos algunos valores
        v.add("Pablo");
        v.add("Juan");
        v.add("Carlos");

        String aux;
        for (int i = 0; i < v.size(); i++) {
            aux = v.get(i);
            System.out.println(aux);
        }
    }
}