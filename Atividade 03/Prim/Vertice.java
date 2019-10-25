import java.util.ArrayList;

public class Vertice {

	int peso;
	ArrayList<Aresta> arestas;
	
	public Vertice() {
		arestas = new ArrayList<Aresta>();
	}
	
	public Vertice(int peso, ArrayList<Aresta> arestas) {
		super();
		this.peso = peso;
		this.arestas = arestas;
	}
	
	public int getPeso() {
		return peso;
	}
	public void setPeso(int peso) {
		this.peso = peso;
	}
	public ArrayList<Aresta> getArestas() {
		return arestas;
	}
	public void setArestas(ArrayList<Aresta> arestas) {
		this.arestas = arestas;
	}
	
	
	
}
