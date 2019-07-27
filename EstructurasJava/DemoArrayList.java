package EstructurasJava;
import java.util.ArrayList;

public class DemoArrayList{
    public static void main(String[] args) {
        ArrayList<String> a = new ArrayList<>();
        a.add("uno");
        a.add("dos");
        a.add("tres");
        for (String x : a) {
            System.out.println(x);
        }
    }
}