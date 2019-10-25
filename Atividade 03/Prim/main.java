import java.util.ArrayList;

public class main {

	public static void main(String[] args) {
		
		Vertice v1 = new Vertice(0,"A");
		Vertice v2 = new Vertice(0,"B");
		Vertice v3 = new Vertice(0,"C");
		Vertice v4 = new Vertice(0,"D");
		
		Aresta a1 = new Aresta(2, v1, v2);
		Aresta a2 = new Aresta(4, v2, v3);
		Aresta a3 = new Aresta(1, v2, v4);
		Aresta a4 = new Aresta(3, v4, v1);
		
		ArrayList<Aresta> list = new ArrayList<Aresta>();
		list.add(a1);
		list.add(a2);
		list.add(a3);
		list.add(a4);
		
		prim(v1, list);
	}

	public static void prim(Vertice src, ArrayList<Aresta> arestas) {
		
		ArrayList<Vertice> queue = new ArrayList<Vertice>();
		
		// Passa todos os valores para infito
		for (int i = 0; i < arestas.size(); i++) {
			arestas.get(i).getAresta_a().setPeso(Integer.MAX_VALUE);
			arestas.get(i).getAresta_b().setPeso(Integer.MAX_VALUE);
		}
		
		// Primeiro vertice atribui como zero
		for (int i = 0; i < arestas.size(); i++) {

			if(arestas.get(i).getAresta_a().getVertice().equals(src.getVertice())) {
				arestas.get(i).getAresta_a().setPeso(0);
			}
			
			if(arestas.get(i).getAresta_b().getVertice().equals(src.getVertice())) {
				arestas.get(i).getAresta_b().setPeso(0);
			}
			
		}
		
		for (int i = 0; i < arestas.size(); i++) {
			
			if(arestas.get(i).getAresta_a().getPeso() == 0) {
				queue.add(arestas.get(i).getAresta_a());
			}
			
			if(arestas.get(i).getAresta_b().getPeso() == 0) {
				queue.add(arestas.get(i).getAresta_b());
			}

		}	
		
		// Inicializando a fila
		for (int i = 0; i < queue.size(); i++) {

		}
		
	}
	
}
