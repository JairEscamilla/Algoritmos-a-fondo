package libro.cap13.cadenas;

public class cadenas1{
    public static void main(String[] args){
        String s = "Esto Es Una Cadena de CaraCTERES";
        String sMayus = s.toUpperCase();
        String sMinus = s.toLowerCase();
        System.out.println("Original: "+ s);
        System.out.println("Mayusculas: "+sMayus);
        System.out.println("Minusculas: "+sMinus);
    }
}