package libro.cap13;
import java.util.Scanner;
public class HolaMundoNombre{
  public static void main(String[] args) {
    // Esta clase permite leer datos por teclado
    Scanner scanner = new Scanner(System.in);
    // Mensaje para el usuario
    System.out.print("Ingrese su nombre: ");
    // Leemos un valor entero por teclado
    String nom = scanner.nextLine();

    // Mostramos un mensaje y luego el valor leido
    System.out.println("Hola mundo " + nom);
  }
}
