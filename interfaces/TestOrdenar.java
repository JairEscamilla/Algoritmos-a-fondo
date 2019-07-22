package interfaces;

public class TestOrdenar{
    public static void main(String[] args) {
        // Arreglo 1
        Alumno arr[] = {
            new Alumno("Juan", 20, 8.5),
            new Alumno("Pedro", 18, 5.3),
            new Alumno("Alberto", 19, 4.6)
        };
        Util.ordenar(arr);
        muestraArray(arr);

        // Arreglo 2
        String[] arr2 = {"Pablo", "Andres", "Marcelo", "Jair"};
        Util.ordenar(arr2);
        muestraArray(arr2);

        // Arreglo 3
        Integer[] arr3 = {
            new Integer(5),
            new Integer(3),
            new Integer(1)};
        Util.ordenar(arr3);
        muestraArray(arr3);
    }
    
    private static void muestraArray(Comparable arr[]) {
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }
}

