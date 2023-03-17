import javax.swing.JOptionPane;

public class Principal {

	// Declaração de Atributo/Objeto
	private static Operacoes oper = new Operacoes();
	/*
	 * O atributo "oper" é do tipo Operacoes, possui acesso privado, e é estatico na
	 * RAM.
	 */

	public static void main(String[] args) {

		int continuar;
		double resultado = 0;

		do {
			double num1 = EntradaSaida.solicitaNumero("1º");
			double num2 = EntradaSaida.solicitaNumero("2º");
			int operacao = EntradaSaida.solicitaOperacao();

			switch (operacao) {
			case 1:
				resultado = oper.calculaSoma(num1, num2);
				break;
			case 2:
				resultado = oper.calculaSubtracao(num1, num2);
				break;
			case 3:
				resultado = oper.calculaMultiplicacao(num1, num2);
				break;
			case 4:
				while (num2 == 0) {
					num2 = EntradaSaida.solicitaNumero("2º");
				}
				resultado = oper.calculaDivisao(num1, num2);
				break;
			default:
				JOptionPane.showMessageDialog(null, "Operação inválida! A calculadora será encerrada!");
				System.exit(0);
				break;
			}
			EntradaSaida.mostraResultado(resultado, operacao);
			continuar = Integer.parseInt(JOptionPane.showInputDialog("Deseja continuar calculando? 1 - Sim | 2 - Não"));

		} while (continuar == 1);
	}
}

/*
 * a) O objeto oper é um atributo da classe Principal? Por quê? 
 * R: Sim, pois ele serve para chamar um método Dinâmico.
 * 
 * b) Qual o tipo de retorno do método solicitaNumero()? Por quê? 
 * R:
 * 
 * c) O método solicitaNumero() foi declarado como estático ou dinâmico? Por
 * quê? 
 * R: Foi declarado como estático, pois ele basicamente é utilizado a todo
 * momento na classe Principal, sendo assim, faz sentido ter ele carregado na
 * RAM, e pronto para o uso em tempo real.
 * 
 * d) O método solicitaNumero() necessita receber parâmetros? De que tipo? Por
 * quê? 
 * R: Sim, ele recebe o parâmetro "ordem", que é do tipo String(texto).
 * Esse dado é utilizado para auxiliar no processamento e retorno sa variável
 * "num".
 * 
 * e) O método mostraResultado() possui retorno? Por quê? 
 * R: Não, não possui retorno! Pois ele é um método vazio. Ele apenas realiza 
 * sua função de mostrar algo em tela no momento em que é executado.
 * 
 * f) O método parseInt() pertence a qual classe e recebe parâmetros de qual
 * tipo? 
 * R: Esse método pertence a classe, Integer, mais especificamente a
 * classe Principal. Recebe parâmetros do tipo Inteiro. Um ponto interessante a
 * se notar aqui é que ele é um método que já vem na biblioteca do Eclipse/Java
 * automaticamente!
 * 
 * 
 * 
 * 
 * ALEATÓRIO: 
 * 
 * 1. Toda vez que eu chamo um Método através do Nome de uma Classe, significa que 
 * eu estou lidando com uma classe estática!
 * 
 * 2. Quando eu bater o olho num bloco de instruções e essa instrução seguir mais ou
 * menos a estrutura "Nome_com_inicial_maiúscula.alguma_coisa" isso significa que é uma
 * classe chamando um método, mas se não iniciar com maiúscula, então é um Objeto,
 * chamando uma classe, e por fim, um método.
 * 
 */