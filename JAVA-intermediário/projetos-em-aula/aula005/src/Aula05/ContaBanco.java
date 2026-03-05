package Aula05;

public class ContaBanco {
    public int numConta;
    protected String tipo;
    private String dono;
    private float saldo;
    private boolean status;
    
    
    //Métodos especiais
    
    public ContaBanco(){
        this.saldo = 0;
        this.status = false;
    }
    
    public int getNumConta() {
        return numConta;
    }

    public void setNumConta(int n) {
        this.numConta = n;
    }

    public String getTipo() {
        return tipo;
    }

    public void setTipo(String t) {
        this.tipo = t;
    }

    public String getDono() {
        return dono;
    }

    public void setDono(String d) {
        this.dono = d;
    }

    public float getSaldo() {
        return saldo;
    }

    public void setSaldo(float s) {
        this.saldo = s;
    }

    public boolean getStatus() {
        return status;
    }

    public void setStatus(boolean st) {
        this.status = st;
    }
     
    //Métodos 
    public void estadoAtual(){
        System.out.println("----------------------");
        System.out.println("Conta: " + this.getNumConta());
        System.out.println("Tipo: " + this.getTipo());
        System.out.println("Dono: " + this.getDono());
        System.out.println("Saldo: R$" + this.getSaldo());
        System.out.println("Status: " + this.getStatus());
    }
    
    public void abrirConta(String t){
        setTipo(t);
        setStatus(true);
        if (t.equals("CC")){
            setSaldo(50);
        }else if (t.equals("CP")){
            setSaldo(150);
        }
        System.out.println("Conta criada om sucesso!");
    }
    
    public void fecharConta(){
        if(this.saldo > 0){
            System.out.println("Conta não pode ser fechada: ainda há saldo disponível.");
        } else if(this.saldo < 0){
            System.out.println("Conta não pode ser fecahda: a conta está em débito.");
        } else{
            System.out.println("A conta foi fechada com sucesso!");
            setStatus(false);
        }   
    }
    
    public void depositar(float v){
        if(this.status == true){
            setSaldo(getSaldo() + v);
        }else{
            System.out.println("Impossível depositar: a conta está fechada");
        }
    }
    
    public void sacar(float v){
        if(this.status == true){
            if(this.saldo > v){
                setSaldo(getSaldo() - v);
            } else{
                System.out.println("Saldo insuficiente");
            }
        }else{
            System.out.println("Impossível sacar: a conta está fechada");
        }
    }
    
    public void pagarMensal(){
        float v = 0;
        if(getTipo().equals("CC")){
            v = 12;
        } else if(getTipo().equals("CP")){
            v = 20;
        } else{
            System.out.println("Tipo de conta inválida");
            return;
        }
        
        if (this.status == true){
            if(this.saldo > v){
                setSaldo(getSaldo() - v);
            } else{
                System.out.println("Saldo insuficiente");
            }
        }else{
            System.out.println("Impossível pagar: a conta está fechada");
        }  
    } 
}
