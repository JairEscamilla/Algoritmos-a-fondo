package demo;
import java.util.Scanner;

public class IngresaDatos{
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    String nom, x;
    int edad;
    double altura;
    System.out.print("Ingrese su nombre: ");
    nom = scanner.nextLine();
    System.out.print("Ingrese su edad: ");
    edad = scanner.nextInt();
    System.out.print("Ingrese su altura: ");
    altura = scanner.nextDouble();
    x = "";
    x += "Yo soy "+nom+" tengo "+edad+" anios";
    x += " y mido "+altura+" metros";
    System.out.println(x);
  }
}
