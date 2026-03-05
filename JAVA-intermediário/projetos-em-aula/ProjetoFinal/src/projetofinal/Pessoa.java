package projetofinal;
public abstract class Pessoa{
    protected String Nome;
    protected int idade;
    protected String sexo;
    protected float experiencia;

    
    //Construtor
    public Pessoa(String Nome, int idade, String sexo) {    
        this.Nome = Nome;
        this.idade = idade;
        this.sexo = sexo;
        this.experiencia = 0;
    }

    //Getter e Setters
    public String getNome() {
        return Nome;
    }

    public void setNome(String Nome) {
        this.Nome = Nome;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public String getSexo() {
        return sexo;
    }

    public void setSexo(String sexo) {
        this.sexo = sexo;
    }

    public float getExperiencia() {
        return experiencia;
    }

    public void setExperiencia(float experiencia) {
        this.experiencia = experiencia;
    }

    @Override
    public String toString() {
        return "Pessoa{" + "Nome=" + Nome + ", idade=" + idade + ", sexo=" + sexo + ", experiencia=" + experiencia + '}';
    }
}
