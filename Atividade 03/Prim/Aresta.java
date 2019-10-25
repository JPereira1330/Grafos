public class Aresta {

	private int peso;
	private Vertice aresta_a;
	private Vertice aresta_b;
	
	public Aresta(int peso, Vertice aresta_a, Vertice aresta_b) {
		this.peso = peso;
		this.aresta_a = aresta_a;
		this.aresta_b = aresta_b;
	}
	
	public int getPeso() {
		return peso;
	}
	public void setPeso(int peso) {
		this.peso = peso;
	}
	public Vertice getAresta_a() {
		return aresta_a;
	}
	public void setAresta_a(Vertice aresta_a) {
		this.aresta_a = aresta_a;
	}
	public Vertice getAresta_b() {
		return aresta_b;
	}
	public void setAresta_b(Vertice aresta_b) {
		this.aresta_b = aresta_b;
	}
		
	 
}