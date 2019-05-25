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
    // constructor a partir de un String
    public Fecha(String s){
        // Buscamos la primera ocurrencia de '/'
        int pos1 = s.indexOf('/');
        // Buscamos la ultima ocurrencia de '/'
        int pos2 = s.lastIndexOf('/');
        String sDia = s.substring(0, pos1);
        dia = Integer.parseInt(sDia);
        String sMes = s.substring(pos1+1, pos2);
        mes = Integer.parseInt(sMes);
        String sAnio = s.substring(pos2+1);
        anio = Integer.parseInt(sAnio);
    }
    // retorna la fecha expresada en dias
    private int fechaToDias(){
        return anio*360 + mes*60 + dia;
    }
    // asigna la fecha expresada en dias a los atributos 
    private void diasToFecha(int i){
        anio = (int)i/360;
        int resto = i%360;
        mes = (int)resto/30;
        dia = resto%30;
        if(dia == 0){
            dia = 30;
            mes--;
        }
        if(mes == 0){
            mes = 12;
            anio--;
        }
    }
    public void addDias(int d){
        // convertimos la fecha a dias y le sumamos d
        int sum = fechaToDias()+d;
        diasToFecha(sum);
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