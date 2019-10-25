public class Aresta {

	int peso;
	Vertice vert_a;
	Vertice vert_b;
	
	public Aresta() {
	}
	
	public Aresta(int peso, Vertice vert_a, Vertice vert_b) {
		super();
		this.peso = peso;
		this.vert_a = vert_a;
		this.vert_b = vert_b;
		vert_a.arestas.add(this);
		vert_b.arestas.add(this);
	}
	
	public int getPeso() {
		return peso;
	}
	public void setPeso(int peso) {
		this.peso = peso;
	}
	public Vertice getVert_a() {
		return vert_a;
	}
	public void setVert_a(Vertice vert_a) {
		this.vert_a = vert_a;
	}
	public Vertice getVert_b() {
		return vert_b;
	}
	public void setVert_b(Vertice vert_b) {
		this.vert_b = vert_b;
	}

}