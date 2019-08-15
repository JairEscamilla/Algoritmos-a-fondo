import java.util.Scanner;

public class Naturales{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    muestraNaturales(n);
  }
  private static void muestraNaturales(int n){
    if (n > 0) {
      // invocacion recursiva
      muestraNaturales(n - 1);
    }
    System.out.println(n);
  }
}
