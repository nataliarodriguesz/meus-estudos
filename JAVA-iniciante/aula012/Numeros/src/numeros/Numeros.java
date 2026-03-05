/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package numeros;

import java.util.Scanner;

/**
 *
 * @author natal
 */
public class Numeros {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int n, s = 0;
        String resp;
        Scanner teclado = new Scanner(System.in);
        
        do{
            System.out.print("Digite um número:  2");
            n = teclado.nextInt();
            System.out.print("Deseja continuar? [S/N]  ");
            resp = teclado.next(); //nextLine dá erro depois de ler um inteiro
            s += n;
        }while(resp.equals("S") || resp.equals("s"));
        
        System.out.println("A soma é " + s);
    }
    
}
