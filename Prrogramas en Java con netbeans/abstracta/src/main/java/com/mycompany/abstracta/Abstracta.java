package com.mycompany.abstracta;
import java.util.Scanner;

public class Abstracta {

    public static void main(String[] args) {
        String colorDelCuadrado;
        double ladoDelCuadrado;

        Scanner teclado = new Scanner(System.in);

        System.out.print("Introduzca el color del cuadrado: ");
        colorDelCuadrado = teclado.nextLine();

        System.out.print("Introduzca el lado del cuadrado: ");
        ladoDelCuadrado = teclado.nextDouble();

        cuadrado cuadrado1 = new cuadrado(colorDelCuadrado, ladoDelCuadrado);

        System.out.printf("El área del cuadrado %s es: %f", cuadrado1.getColor(), cuadrado1.calcularArea());
    }
}
