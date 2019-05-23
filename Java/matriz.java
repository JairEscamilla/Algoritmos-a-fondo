package libro.cap13;

import java.util.Scanner;

public class matriz{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int n, m, mat[][];
        System.out.print("Ingresar filas: ");
        n = scanner.nextInt();
        System.out.print("Ingresar columnas: ");
        m = scanner.nextInt();
        mat = new int[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                mat[i][j] = (int)(Math.random()*1000);
            }
        }
        
        // Imprimiendo los datos
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                System.out.print(mat[i][j]+"\t");
            }
            System.out.println();
        }
    }
}