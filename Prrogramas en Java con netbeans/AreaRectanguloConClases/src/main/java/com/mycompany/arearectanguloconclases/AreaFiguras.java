package com.mycompany.arearectanguloconclases;
import java.util.Scanner;

public class AreaFiguras {

    public static void main(String[] args) {
        int respuesta;
        System.out.println("Cual figura quieres obtener el area?");
        System.out.println("[1] Rectangulo");
        System.out.println("[2] Triangulo");
        System.out.println("Elije tu respuesta");
        Scanner sc = new Scanner(System.in);
        respuesta = sc.nextInt();

        switch (respuesta) {
            case 1: {
                        System.out.println("Como quiere calcular el area del rectangulo 1) por formula(base * altura) o 2) por coordenadas?");
                        int opc;
                        opc = sc.nextInt();
                        if (opc == 1) {
                            System.out.println("Ingrese la base");
                            float b;
                            b = sc.nextFloat();
                            System.out.println("Ingrese la altura");
                            float h;
                            h = sc.nextFloat();
                            
                            ClassRectangulo a1 = new ClassRectangulo();
                            System.out.println("El area del recatngulo es: " +  a1.CalcularArea(b, h));
                        }
                        else if (opc == 2) {
                             System.out.println("Ingrese x1");
                             float x1;
                             x1 = sc.nextFloat();
                             System.out.println("Ingrese x2");
                             float x2;
                             x2 = sc.nextFloat();
                            System.out.println("Ingrese y1");
                            float y1;
                            y1 = sc.nextFloat();
                            System.out.println("Ingrese y2");
                            float y2;
                            y2 = sc.nextFloat();

                             ClassRectangulo a2 = new ClassRectangulo();
                             System.out.println("El area del rectangulo usando coordenadas es: " + a2.CalcularArea(x1, x2, y1, y2));
                        }
                        else{
                            System.out.println("Opcion Invalida");
                        }
                    }
            
            case 2: {
                System.out.println("Como quiere calcular el area del triangulo 1) por formula (base * altura / 2) o 2) por coordenadas?");
                int opc;
                opc = sc.nextInt();
                if (opc == 1){
                   System.out.println("Ingrese la base");
                   float b;
                   b = sc.nextFloat();
                   System.out.println("Ingrese la altura");
                   float h;
                   h = sc.nextFloat();
                   
                   ClassAreaTriangulo b1 = new ClassAreaTriangulo();
                   System.out.println(" El area del triangulo es: " +  b1.CalcularArea(b, h));
                }
                else if (opc == 2){
                            System.out.println("Ingrese x1");
                             float x1;
                             x1 = sc.nextFloat();
                             System.out.println("Ingrese x2");
                             float x2;
                             x2 = sc.nextFloat();
                            System.out.println("Ingrese y1");
                            float y1;
                            y1 = sc.nextFloat();
                            System.out.println("Ingrese y2");
                            float y2;
                            y2 = sc.nextFloat();
                            
                            ClassAreaTriangulo b2 = new ClassAreaTriangulo();
                            System.out.println("El area del triangulo con coordenadas es: " +  b2.CalcularArea(x1, x2, y1, y2));
                }
                else{
                    System.out.println("Opcion Invalida");
                }
            }
        }
    }
}
