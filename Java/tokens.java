package libro.cap13.cadenas;
import java.util.StringTokenizer;

public class tokens{
    public static void main(String[] args){
        String s = "Juan|Marcos|Carlos|Matias";
        StringTokenizer st = new StringTokenizer(s, "|");
        String tok;
        while(st.hasMoreTokens()){
            tok = st.nextToken();
            System.out.println(tok);
        }
    }
}