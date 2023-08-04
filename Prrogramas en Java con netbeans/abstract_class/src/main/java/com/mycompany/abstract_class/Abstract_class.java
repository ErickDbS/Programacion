package com.mycompany.abstract_class;

public class Abstract_class implements operaciones {
    
    @Override
    public double suma(){
          return operaciones.NUMERO1 + operaciones.NUMERO2;
    }
    
    @Override
    public double resta(){
            return operaciones.NUMERO1 - operaciones.NUMERO2;
    }
    
    @Override
    public double multiplicacion(){
            return operaciones.NUMERO1 * operaciones.NUMERO2;
    }
    
    @Override
    public double division(){
            return operaciones.NUMERO1 / operaciones.NUMERO2;   
    }

    
    public static void main(String[] args) {
        Abstract_class p = new Abstract_class();
        
        System.out.println("La suma es: " + p.suma());
        System.out.println("La resta es: " + p.resta());
        System.out.println("La multiplicacion es: " + p.multiplicacion());
        System.out.println("La division es: " + p.division());
    }
}

