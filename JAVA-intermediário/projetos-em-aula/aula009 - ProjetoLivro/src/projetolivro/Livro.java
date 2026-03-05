package projetolivro;
public class Livro implements Publicacao{
    private String titulo;
    private String autor;
    private int totPaginas;
    private int pagAtual;
    private boolean aberto;
    private Pessoa leitor;
    
    //Métodos acessores
    public String getTitulo() {
        return titulo;
    }

    public String getAutor() {
        return autor;
    }

    public int getTotPaginas() {
        return totPaginas;
    }

    public int getPagAtual() {
        return pagAtual;
    }

    public boolean isAberto() {
        return aberto;
    }

    public Pessoa getLeitor() {
        return leitor;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }

    public void setTotPaginas(int totPaginas) {
        this.totPaginas = totPaginas;
    }

    public void setPagAtual(int pagAtual) {
        this.pagAtual = pagAtual;
    }

    public void setAberto(boolean aberto) {
        this.aberto = aberto;
    }

    public void setLeitor(Pessoa leitor) {
        this.leitor = leitor;
    }
    
    //Métodos especiais
    public Livro(String titulo, String autor, int totPaginas, Pessoa leitor){
        this.titulo = titulo;
        this.autor = autor;
        this.totPaginas = totPaginas;
        this.setAberto(false);
        this.setPagAtual(0);
        this.leitor = leitor;
        
    }

    public String detalhes() {
        return  " Livro: " + titulo.toUpperCase() + "\n-----------------------------" + 
                "\n autor:      " + autor + 
                "\n totPaginas: " + totPaginas + "\n pagAtual:   " + pagAtual + 
                "\n aberto:     " + aberto + "\n leitor:     " + leitor.getNome() + 
                "\n idade:      " + leitor.getIdade() +
                "\n sexo:       " + leitor.getSexo() + "\n";
    }

    //Métodos abstratos
    @Override
    public void abrir() {
        this.setAberto(true);
    }

    @Override
    public void fechar() {
        this.setAberto(false);
    }

    @Override
    public void folhear(int p) {
        if(p > totPaginas){
            this.setPagAtual(0);
        } else{
            this.setPagAtual(p);
        }
    }

    @Override
    public void avancarPag() {
        this.setPagAtual(pagAtual++);
    }

    @Override
    public void voltarPag() {
        this.setPagAtual(pagAtual--);
    }
    
}
