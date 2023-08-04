package com.mycompany.abcs;

import javax.swing.JFrame;

public class ABCS {

    public static void main(String[] args) {
        ABC_LIMPIO abc = new ABC_LIMPIO();
        abc.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        abc.setSize(400,200);
        abc.setVisible(true);
    }

}
