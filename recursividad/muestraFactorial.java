import java.util.Scanner;

public class muestraFactorial{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        // Pedimos un valor al usuario
        System.out.println("Ingrese un valor: ");
        int n = scanner.nextInt();

        // Invocamos al metodo factorial
        long f = factorial(n);
        System.out.println("El factorial de " + n +  " es " + f);
    }

    public static long factorial(int x){
        long ret;
        if(x == 0)
            ret = 1;
        else 
            ret = x*factorial(x-1);
        return ret;
    }
}