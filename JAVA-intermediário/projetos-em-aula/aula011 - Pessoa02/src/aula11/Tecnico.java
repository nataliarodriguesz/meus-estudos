package aula11;
public class Tecnico extends Aluno{
    private int registroprofissional;
    
    public void praticar(){
        System.out.println(this.getNome() + " está estudando");
    }

    public int getRegistroprofissional() {
        return registroprofissional;
    }

    public void setRegistroprofissional(int registroprofissional) {
        this.registroprofissional = registroprofissional;
    }
}
