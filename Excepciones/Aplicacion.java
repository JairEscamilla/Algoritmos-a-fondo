package Excepciones;

import java.io.FileInputStream;
import java.util.Properties;

public class Aplicacion{
    public Usuario login(String usrname, String password){
        try{
                // Abrimos el archivo de propiedades para lectura
            FileInputStream fis = new FileInputStream("Excepciones/usuario.properties");

            // Cargamos el archivo de propiedades en un objeto de tipo properties
            Properties p = new Properties();
            p.load(fis);
            // Leemos el valor de la propiedad usrname
            String usr = p.getProperty("usrname");
            String pwd = p.getProperty("password");
            Usuario u = null;

            if(usr.equals(usrname) && pwd.equals(password)){
                u = new Usuario(usr, pwd, p.getProperty("nombre"), p.getProperty("email"));
            }
            return u;
        }catch(Exception ex){
            throw new RuntimeException("Error verificando datos", ex);
        }
    }
}