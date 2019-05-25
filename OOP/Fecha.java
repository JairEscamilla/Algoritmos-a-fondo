package OOP;

public class Fecha{
    private int dia;
    private int mes;
    private int anio;
    // Sobreescribimos el metodo toString  (es heredado de Object)
    public String toString(){
        return dia+"/"+mes+"/"+anio;
    }
    public int getDia(){
        // retorna el valor de la variable dia 
        return dia;
    }
    public void setDia(int dia){
        // asigna el valor del parametro a la variable dia
        this.dia = dia;
    }
    public int getMes(){
        return mes;
    }
    public void setMes(int mes){
        this.mes = mes;
    }
    public int getAnio(){
        return anio;
    }
    public void setAnio(int anio){
        this.anio = anio;
    }
}