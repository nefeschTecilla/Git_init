/*
1. Faça um programa que solicite o ano de nascimento de um usuário e seja mostrada a sua idade em 2021. 
Não é necessário considerar se o usuário já fez ou não aniversário. Um método deve ser criado para 
solicitar o ano de nascimento ao usuário e retorná-lo, outro método deve ser criado para receber o ano de nascimento, 
calcular a idade atual, e ainda, um terceiro método deve ser criado para mostrar a idade do usuário.
*/

package metodos;

import javax.swing.JOptionPane;

public class Exercicio1b {

	public static void main(String[] args) {

		int anoNascimento = 0;
		anoNascimento = recebeAnoNascimento();

		int idade = 0;
		idade = realizaCalculoIdade(anoNascimento);

		exibeIdade(idade);

	}

	public static int recebeAnoNascimento() {
		int anoNascimento;
		return anoNascimento = Integer.parseInt(JOptionPane.showInputDialog("Forneça o seu ano de nascimento:"));
	}

	public static int realizaCalculoIdade(int anoNascimento) {
		int anoAtual = 2023;
		int idade = anoAtual - anoNascimento;
		return idade;
	}

	public static void exibeIdade(int idade) {
		JOptionPane.showMessageDialog(null, idade, "Tendo em vista que estamos no ano de 2023, sua idade é:", JOptionPane.INFORMATION_MESSAGE);
	}

}
