package interfaces;

public class TestOrdenar{
    public static void main(String[] args) {
        Alumno arr[] = {
            new Alumno("Juan", 20, 8.5),
            new Alumno("Pedro", 18, 5.3),
            new Alumno("Alberto", 19, 4.6)
        };
        Util.ordenar(arr);
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }
}