package libro.cap13.cadenas;
import java.util.Scanner;

public class basesnumericas{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int v, b;
        String sBaseN;
        System.out.println("Ingresa un valor entero: ");
        v = scanner.nextInt();
        System.out.println("Valor ingresado: "+v);
        System.out.println("Binario: "+Integer.toBinaryString(v));
        System.out.println("Octal: "+Integer.toOctalString(v));
        System.out.println("Hexadecimal: "+Integer.toHexString(v));
        System.out.println("Ingrese una base numerica: ");
        b = scanner.nextInt();
        sBaseN = Integer.toString(v, b);
        System.out.println(v + " en base("+b+") = "+sBaseN);
    }
}