package Excepciones;

import java.io.FileInputStream;
import java.util.Properties;
import java.util.ResourceBundle;

import javax.management.RuntimeErrorException;

public class Aplicacion {
    public Usuario login(String usrname, String password) throws ErrorFisicoException{
        FileInputStream fis = null;
        try{
                // Abrimos el archivo de propiedades para lectura
            fis = new FileInputStream("Excepciones/usuario.properties");

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
            throw new ErrorFisicoException(ex);
        }finally{
            try{
                if(fis != null) 
                    fis.close();
            }catch(Exception asd){
                asd.printStackTrace();
            }
        }
    }
}