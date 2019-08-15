package Excepciones;

public class testLogin{
    public static void main(String[] args) {
        try {
            Aplicacion app = new Aplicacion();
            Usuario u = app.login("juan", "juan123sito");
            System.out.println(u);
        } catch (Exception e) {
            System.out.println("Servicio temporalmente interrumpido");
            System.out.println(e.getMessage());
        }
    }
}
