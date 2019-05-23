package libro.cap13.cadenas;

public class cadenas2{
    public static void main(String[] args){
        String s = "Esto es Una Cadena de CaracTereS";
        int pos1 = s.indexOf('C');
        int pos2 = s.indexOf('x');
        System.out.println(pos1);
        System.out.println(pos2);
    }
}