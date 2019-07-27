package Excepciones;

public class Usuario{
    String usr, pwd, nom, email;
    public Usuario(String usr, String pwd, String nom, String email){
        this.usr = usr;
        this.pwd = pwd;
        this.nom = nom;
        this.email = email;
    }
    public String toString(){
        String str = "DATOS:\nNombre: "+nom+"\nemail: "+email;
        return str;
    }
}