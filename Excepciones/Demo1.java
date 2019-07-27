package Excepciones;

public class Demo1{
    public static void main(String[] args) {
        try{
            System.out.println("Hola, adios!");
            return;
        }catch(Exception e){
            System.out.println("Entre al catch");
        }finally{
            System.out.println("Esto sale siempre");
        }
    }
}