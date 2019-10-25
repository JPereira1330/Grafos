import java.util.ArrayList;

public class main {

	public static void main(String[] args) {
		
		Vertice v1 = new Vertice();
		Vertice v2 = new Vertice();
		Vertice v3 = new Vertice();
		Vertice v4 = new Vertice();
		Vertice v5 = new Vertice();
		
		Aresta a1 = new Aresta(10, v1, v2);
		Aresta a2 = new Aresta(15, v2, v3);
		Aresta a3 = new Aresta(20, v2, v4);
		Aresta a4 = new Aresta(10, v3, v5);

		ArrayList<Aresta> lista = new ArrayList<Aresta>();
		lista.add(a1);
		lista.add(a2);
		lista.add(a3);
		lista.add(a4);
		
		prim(v1, lista);
	}

	public static void prim(Vertice src, ArrayList<Aresta> arestas) {
		
		int min;
		ArrayList<Vertice> queue = new ArrayList<Vertice>();
		
		// Inicializando as distancias como maximo
		for (int i = 0; i < arestas.size(); i++) {
			arestas.get(i).getVert_a().setPeso(Integer.MAX_VALUE);
			arestas.get(i).getVert_b().setPeso(Integer.MAX_VALUE);
		}
		
		min = Integer.MAX_VALUE;
		src.setPeso(0);
		queue.add(src);
		
		// Motanndo a fila
		for (int i = 0; i < src.getArestas().size(); i++) {
			if(min > src.getArestas().get(i).getPeso()) {
				if(src.getArestas().get(i).getVert_a() == src) {
					queue.add(src.getArestas().get(i).getVert_b());
				}else {
					queue.add(src.getArestas().get(i).getVert_a());
				}

			}
		}
		
	}
	
}
