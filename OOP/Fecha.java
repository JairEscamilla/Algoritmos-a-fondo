package OOP;

public class Fecha{
    private int dia;
    private int mes;
    private int anio;
    // constructor
    public Fecha(int d, int m, int a){
        dia = d;
        mes = m;
        anio = a;
    }
    // constructor sin argumentos
    public Fecha(){
        
    }
    // Sobreescribimos el metodo toString  (es heredado de Object)
    public String toString(){
        return dia+"/"+mes+"/"+anio;
    }
    // Sobreescribimos el metodo equals que se hereda de Object 
    public boolean equals(Object o){
        Fecha otra = (Fecha)o;
        return (dia == otra.dia) && (mes == otra.mes) && (anio == otra.anio);
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