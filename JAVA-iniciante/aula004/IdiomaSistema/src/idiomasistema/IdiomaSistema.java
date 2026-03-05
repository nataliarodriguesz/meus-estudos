
package idiomasistema;

import java.util.Locale;

/**
 * CursoEmVideo - Aula 04
 * Professor: GustavoGuanabara
 * Aluna: NataliaRodrigues
 */

public class IdiomaSistema {

    public static void main(String[] args) {
        Locale idioma = Locale.getDefault();
        System.out.print("Seu sistema está em ");
        System.out.println(idioma.getDisplayLanguage());
        
        /* 
         * Sytem.out.println ("idioma.getLanguage") = pt.br;
         * Sytem.out.println ("idioma.getDisplayLanguage") = portugês;
         */
    }
    
}
