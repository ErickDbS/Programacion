package com.mycompany.sumafilascolumnas;
import java.util.Scanner;

public class SumaFilasColumnas {

    public static void main(String[] args) {
        int Matriz[][];
        Matriz = new int[3][3];
        int tempMatriz[][];
        tempMatriz = new int[2][2];
        int filas,columnas, cofactor, sumaCofactor, suma2Cofactor, resultado, cofactorFinal1, cofactorFinal2, cofactorFinal3, determinante=0;
        
        
        Scanner sc = new Scanner(System.in);
        
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                System.out.println("Ingrese el valor de la matriz en la posicion ["+i+"]["+j+"]");
                Matriz[i][j] = sc.nextInt();
                
            }
        }
        
        for(int i=0; i<3; i++){
            filas = 0;
            for(int j=0; j<3; j++){
                filas = filas + Matriz[i][j];
            }
           System.out.println("La suma de la fila "+i+" es: "+filas); 
        }
        
        
        
        for(int j=0; j<3; j++){
            columnas = 0;
            for(int i=0; i<3; i++){
                columnas = columnas + Matriz[i][j];
            }
            System.out.println("La suma de la columna "+j+" es:"+columnas);
        }
        
        // Sacar cofactor 1
        cofactor = Matriz[0][0];
        
        //Crear la matriz del cofactor
        tempMatriz[0][0] = Matriz[1][1];
        tempMatriz[0][1] = Matriz[1][2];
        tempMatriz[1][0] = Matriz[2][1];
        tempMatriz[1][1] = Matriz[2][2];
        
        //Multiplicacion de la matriz del cofactor
        sumaCofactor = tempMatriz[0][0] * tempMatriz[1][1];
        suma2Cofactor = tempMatriz[0][1] * tempMatriz[1][0];
        resultado = sumaCofactor - suma2Cofactor;
        
        
        //Sacar el valor final del cofactor 1
        cofactorFinal1 = cofactor * resultado;
        
        
        //Limpiamos variables para poder usarlas de nuevo y no tener tantas variables
        
        //limpiamos matriz
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                tempMatriz[i][j] = 0;
            }
        }
        
        //Limpiamos las demas variables
        cofactor = 0;
        sumaCofactor = 0;
        suma2Cofactor = 0;
        resultado = 0;
        
        // Sacar cofactor 2
        cofactor = Matriz[0][1];
        
        //Crear la matriz del cofactor
        tempMatriz[0][0] = Matriz[1][0];
        tempMatriz[0][1] = Matriz[1][2];
        tempMatriz[1][0] = Matriz[2][0];
        tempMatriz[1][1] = Matriz[2][2];
        
        //Multiplicacion de la matriz del cofactor
        sumaCofactor = tempMatriz[0][0] * tempMatriz[1][1];
        suma2Cofactor = tempMatriz[0][1] * tempMatriz[1][0];
        resultado = sumaCofactor - suma2Cofactor;
        
        
        //Sacar el valor final del cofactor 2
        cofactorFinal2 = cofactor * resultado;
        
        
        //limpiamos matriz
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                tempMatriz[i][j] = 0;
            }
        }
        
        //Limpiamos las demas variables
        cofactor = 0;
        sumaCofactor = 0;
        suma2Cofactor = 0;
        resultado = 0;
        
        // Sacar cofactor 3
        cofactor = Matriz[0][2];
        
        //Crear la matriz del cofactor
        tempMatriz[0][0] = Matriz[1][0];
        tempMatriz[0][1] = Matriz[1][1];
        tempMatriz[1][0] = Matriz[2][0];
        tempMatriz[1][1] = Matriz[2][1];
        
        //Multiplicacion de la matriz del cofactor
        sumaCofactor = tempMatriz[0][0] * tempMatriz[1][1];
        suma2Cofactor = tempMatriz[0][1] * tempMatriz[1][0];
        resultado = sumaCofactor - suma2Cofactor;
       
                
        
        //Sacar el valor final del cofactor 3
        cofactorFinal3 = cofactor * resultado;
        
        
        //Ahora hacemos la resta y sacamos el determinante de la matriz
        determinante = cofactorFinal1 - cofactorFinal2 - cofactorFinal3;
        
        System.out.println("El determinante de la matriz es: "+ determinante);
    }
}
