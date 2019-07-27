package EstructurasJava;

public class performance{
    private long ti;
    private long tf;
    private boolean stoped = false;
    public performance(){
        ti = System.currentTimeMillis();
    }

    public String toString(){
       if(!stoped){
           tf = System.currentTimeMillis();
           stoped = false;
       }
       long diff = tf - ti;
       long min = diff / 1000 / 60;
       long sec = (diff / 1000) % 60;
       return diff + " milisegundos ("+min+" minutos, "+ sec + " segundos).";
    }
}