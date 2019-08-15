
public class permutaciones{
  public static void mostrarPermutaciones(String s, StringBuffer aux){
    if (s.length() < 3) {
      System.out.println(aux + "" + s.charAt(0) + "" + s.charAt(1));
      System.out.println(aux + "" + s.charAt(1) + "" + s.charAt(0));
    }else{
      for(int i = 0; i < s.length(); i++){
        char c = s.charAt(i);
        aux.append(c);
        String s1 = charRemoveAt(s, i);
        mostrarPermutaciones(s1, aux);

        aux.deleteCharAt(aux.length() - 1);
      }
    }
  }

  public static String charRemoveAt(String str, int p) {
      return str.substring(0, p) + str.substring(p + 1);
  }
   
  public static void main(String[] args){
    String cadena = args[0];
    mostrarPermutaciones(cadena, new StringBuffer());
  }

}
