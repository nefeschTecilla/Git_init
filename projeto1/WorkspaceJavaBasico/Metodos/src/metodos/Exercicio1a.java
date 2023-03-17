/*
1. Faça um programa que solicite o ano de nascimento de um usuário e seja mostrada a sua idade em 2021. 
Não é necessário considerar se o usuário já fez ou não aniversário. Um método deve ser criado para 
solicitar o ano de nascimento ao usuário e retorná-lo, e outro método deve ser criado para receber o ano de nascimento, 
calcular a idade atual e mostrá-la.
*/

package metodos;

import javax.swing.JOptionPane;

public class Exercicio1a {

	public static void main(String[] args) {

		int anoNascimento = 0;
		anoNascimento = solicitaAnoNascimento();

		exibeIdade(anoNascimento);

	}

	public static int solicitaAnoNascimento() {
		int anoNascimento;
		return anoNascimento = Integer.parseInt(JOptionPane.showInputDialog("Qual o ano de nascimento?"));
	}

	public static void exibeIdade(int anoNascimento) {
		int anoAtual = 2023;
		int idade = anoAtual - anoNascimento;
		JOptionPane.showMessageDialog(null, idade, "Cálculo idade", JOptionPane.INFORMATION_MESSAGE);
	}

}
