package Excepciones;
public class Demo2{
    public static void main(String[] args) throws Exception {
        try{
            int i = Integer.parseInt("No es una cadena numerica");
        }catch(ArrayIndexOutOfBoundsException ex){
            System.out.println("Entrando al catch");
        }finally{
            System.out.println("Esto sale siempre");
        }
    }
}