package resolucaotela;

import java.awt.Dimension;
import java.awt.Toolkit;

/**
 * CursoEmVideo - Aula 04
 * Professor: GustavoGuanabara
 * Aluna: NataliaRodrigues
 */

public class ResolucaoTela {

    public static void main(String[] args) {
        Toolkit toolkit = Toolkit.getDefaultToolkit();
        Dimension tela = toolkit.getScreenSize();
        
        System.out.print("Sua tela tem resolução ");
        System.out.println(tela.width + " x " + tela.height);
    }
    
}
