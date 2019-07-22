package colObject;
import java.util.Collection;


public class testVector{
    public static void main(String[] args) {
        // Instancuamos un vector especializado en String
        //Vector<String> v = new Vector<>();

        // Le asignamos algunos valores
        /*v.add("Pablo");
        v.add("Juan");
        v.add("Carlos");

        String aux;
        for (int i = 0; i < v.size(); i++) {
            aux = v.get(i);
            System.out.println(aux);
        }*/
        Collection<String> coll = UNombres.obtenerLista();
        for (String nom : coll) {
            System.out.println(nom);
        }
    }
}