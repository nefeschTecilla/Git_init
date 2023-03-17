/*
3.	Faça um programa que a partir do valor de uma compra, faça o cálculo de um desconto para o usuário. O programa deve 
solicitar o valor total da compra por meio de um método, que deverá retorná-lo. Um método deve ser criado para receber 
o valor da compra e mostrar o valor final com desconto, considerando:

●	Até R$100 - sem desconto, o valor permanece o mesmo
●	De R$100,01 a R$200 - desconto de 20%
●	Acima de R$200 - desconto de 30%
*/

package metodos;

import javax.swing.JOptionPane;
import java.text.DecimalFormat;

public class Exercicio2 {

	public static void main(String[] args) {

		//DecimalFormat d = new DecimalFormat("0.00");
		
		double valorCompra = 0;
		valorCompra = recebeValorCompra();

		exibeValorComDesconto(valorCompra);
	}

	public static double recebeValorCompra() {
		double valorCompra;
		return valorCompra = Double.parseDouble(JOptionPane.showInputDialog("Qual o valor da sua compra?"));
	}

	public static void exibeValorComDesconto(double valorCompra) {
		DecimalFormat d = new DecimalFormat("0.00");
		double valorFinalCompra;
		if ((valorCompra > 100) && (valorCompra <= 200)) {
			valorFinalCompra = valorCompra - (valorCompra * 0.20);
			JOptionPane.showMessageDialog(null, d.format(valorFinalCompra), "O valor final da sua compra com desconto é:",
					JOptionPane.INFORMATION_MESSAGE);
		} else if (valorCompra > 200) {
			valorFinalCompra = valorCompra - (valorCompra * 0.30);
			JOptionPane.showMessageDialog(null, d.format(valorFinalCompra), "O valor final da sua compra com desconto é:",
					JOptionPane.INFORMATION_MESSAGE);
		} else {
			valorFinalCompra = valorCompra;
			JOptionPane.showMessageDialog(null, d.format(valorFinalCompra), "O valor final da sua compra é:",
					JOptionPane.INFORMATION_MESSAGE);
		}
	}
}
