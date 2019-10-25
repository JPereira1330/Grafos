import java.util.ArrayList;
import java.util.Scanner;


public class main {

	public static void main(String[] args) {
		
		int peso;
		String aresta_a;
		String aresta_b;
		Scanner scanner;
		Aresta aresta = new Aresta();
		ArrayList<Aresta> arestas =  new ArrayList<Aresta>();
		
		System.out.println("+===========================================+");
		System.out.println("|               K R U S K A L               |");
		System.out.println("+===========================================+");
		System.out.println("| EQUIPE:                                   |");
		System.out.println("|    José Claudio Pereira                   |");
		System.out.println("|    Gabriel Lopes Weber                    |");
		System.out.println("|    Rafael Fagundes                        |");
		System.out.println("+===========================================+");
		System.out.println("| Use !q para sair do loop de captura de    |");
		System.out.println("| arestas                                   |");
		System.out.println("+===========================================+\n");
		
		do {
			
			scanner = new Scanner (System.in);
			System.out.print(" [ * ] Insira a vertice inicial: ");
			aresta_a = scanner.nextLine();
			
			if(aresta_a.equals("!q"))
				break;
			
			
			scanner = new Scanner (System.in);
			System.out.print(" [ * ] Insira a vertice final: ");
			aresta_b = scanner.nextLine();
			
			if(aresta_b.equals("!q"))
				break;
			
			scanner = new Scanner (System.in);
			System.out.print(" [ * ] Insira o peso: ");
			peso = scanner.nextInt();
			
			aresta = new Aresta();
			aresta.setPeso(peso);
			aresta.setAresta_a(aresta_a);
			aresta.setAresta_b(aresta_b);
			arestas.add(aresta);
			
		}while(true);
		
		
		kruskal(arestas);
	}
	
	private static void kruskal(ArrayList<Aresta> grafo) {
		
		int state = 0;
		ArrayList<Aresta> newGrafo;
		newGrafo =  new ArrayList<Aresta>();
		
		System.out.println("\n [DEBUG] Ordenando de forma crescente \n");
		grafo = sort(grafo);
		for (int i = 0; i < grafo.size(); i++) {
			System.out.println("Vetor: "+grafo.get(i).getAresta_a()+ " -> Vetor: "+grafo.get(i).getAresta_b()+" Peso: "+grafo.get(i).getPeso());
		}

		System.out.println("\n [DEBUG] Arvore geradora minima \n");
		for (int i = 0; i < grafo.size(); i++) {
			state = 0;
			for (int j = 0; j < newGrafo.size(); j++) {
				
				if(grafo.get(i).getAresta_a().equals(newGrafo.get(j).getAresta_a())){
					state++;
				}
				
				if(grafo.get(i).getAresta_a().equals(newGrafo.get(j).getAresta_b())){
					state++;
				}
				
				if(grafo.get(i).getAresta_b().equals(newGrafo.get(j).getAresta_a())){
					state++;
				}
				
				if(grafo.get(i).getAresta_b().equals(newGrafo.get(j).getAresta_b())){
					state++;
				}
				
			}
			
			if(state > 2) {
				//grafo.remove(i);
			}else {
				newGrafo.add(grafo.get(i));
				//grafo.remove(i);
			}
			
		}
		
		for (int i = 0; i < newGrafo.size(); i++) {
			System.out.println("Vetor: "+newGrafo.get(i).getAresta_a()+ " -> Vetor: "+newGrafo.get(i).getAresta_b()+" Peso: "+newGrafo.get(i).getPeso());
		}
	}
	

	private static ArrayList<Aresta> sort(ArrayList<Aresta> grafo) {
		
		int indice = 0;
		int pesoMenor = Integer.MAX_VALUE;
		ArrayList<Aresta> temp = new ArrayList<Aresta>();
		int loop = grafo.size();
		
		for (int i = 0; i < loop; i++) {
			for (int j = 0; j < grafo.size(); j++) {
				
				if(grafo.get(j).getPeso() < pesoMenor) {
					pesoMenor = grafo.get(j).getPeso();
					indice = j;
				}
				
			}
			temp.add(grafo.get(indice));
			grafo.remove(indice);
			indice = 0;
			pesoMenor = Integer.MAX_VALUE;
		}
		
		return temp;
	}
	
}
