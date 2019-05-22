package libro.cap13;
import java.util.Scanner;

public class arrays{
  public static void main(String[] args) {
    // Deffinimos un array de 10 enteros
    int arr[] = new int[10];
    int v, i = 0;
    Scanner scanner = new Scanner(System.in);
    System.out.print("Ingrese un valor (0=>fin): ");
    v = scanner.nextInt();
    while(v != 0 && i < 10){
        arr[i++] = v;
        System.out.print("Ingrese el siguiente valor: ");
        v = scanner.nextInt();
    }
    for(int j = 0; j < i; j++){
      System.out.println(arr[j]);
    }
  }
}
