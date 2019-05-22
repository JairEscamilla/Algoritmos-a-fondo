package libro.cap13;
import java.util.Scanner;

public class arrays2{
  public static void main(String[] args) {
    String dias[] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
    Scanner scanner = new Scanner(System.in);
    int n;
    System.out.print("Ingrese un dia de la semana (numero): ");
    n = scanner.nextInt();
    if (n <= dias.length) {
      System.out.println(dias[n-1]);
    }else{
      System.out.println("Dia incorrecto");
    }
  }
}
