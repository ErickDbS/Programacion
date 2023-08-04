package practicafinal;

import javax.swing.*;
import java.sql.*;
import java.awt.event.*;

public class Productos extends formPadre { // Hereda de su clase padre llamada formPadre

 
     // Constructor sobrecargado que recibe un String para establecer el nombre de la tabla
    public Productos(String Nom) {
      super("Tabla Productos");

        initComponents();
    }
    
  
     // Metodos heredados de la clase padre y implementados con polimorfismo para que cada boton tenga su evento
    @Override
     public void Agregar(ActionEvent evt){
         if (evt.getSource() == btnAgregar) //Permite identificar que elemento del formulario disparó el evento
        {
            try
            {
                String strSQL = "INSERT INTO Productos (ID,Nombre) VALUES ('" + txtID.getText() + "','" + txtNombre.getText() + "')";
                Statement stmt = con.createStatement(); //Declaración de variable y preparación de sentencia SQL
                int rowsEffected = stmt.executeUpdate(strSQL); //Es el que dispara la sentencia SQL contra la base de datos
                JOptionPane.showMessageDialog(null,rowsEffected + " Linea Agregada");
            } catch (SQLException ex) {
                JOptionPane.showMessageDialog(null,"Error al conectarse con la bd: " + ex.toString());
            }
        }
     }
     
     // Lo mismo que arriba
     @Override
     public void Modificar(ActionEvent evt){
         if (evt.getSource() == btnModificar) //Lo mismo que el anterior
        {
            try
            {
                String strSQL = "UPDATE Productos SET Nombre = '" + txtNombre.getText() + "' where ID = '" + txtID.getText() + "'";
                Statement stmt = con.createStatement(); //Declaración de variable y preparación de sentencia SQL
                int rowsEffected = stmt.executeUpdate(strSQL);
                JOptionPane.showMessageDialog(null,rowsEffected + " Linea Modificada");
            } catch (SQLException ex) {
                JOptionPane.showMessageDialog(null,"Error al conectarse con la bd: "+ ex.toString());
            }
        }
    }
    
     // Lo mismo que arriba
     @Override
     public void Consultar(ActionEvent evt){
         if (evt.getSource() == btnConsultar) //Varia un poco
        {
            try
            {
                String SQL = "SELECT * FROM Productos where ID ='" + txtID.getText() + "'"; //Texto de sentencia SQL (query)
                Statement stmt = con.createStatement(); //Declaración de variable y preparación de sentencia SQL
                ResultSet rs = stmt.executeQuery(SQL); //Declaración de variable para guardar resultados de sentencia SQL y ejecución
                rs.next(); //Accede (se posiciona) a la tupla en el resultset después de ejecutar el select contra la base de datos (de manera inicial no se puede acceder hasta llamar a "next"
                txtNombre.setText(rs.getString("Nombre")); //Toma el valor del campo "nombre" y se muestra en el textbox correspondiente
            } catch (SQLException ex) {
                JOptionPane.showMessageDialog(null,"Error al conectarse con la bd: "+ ex.toString());
            }
        }
     }
     
     // Lo mismo que arriba
      @Override
      public void Borrar(ActionEvent evt){
            if (evt.getSource() == btnBorrar) //Lo mismo que el anterior
        {
            try
            {
                String strSQL = "DELETE from Productos where ID = '" + txtID.getText() + "'";
                Statement stmt = con.createStatement(); //Declaración de variable y preparación de sentencia SQL
                int rowsEffected = stmt.executeUpdate(strSQL);
                JOptionPane.showMessageDialog(null,rowsEffected + " Linea Borrada");
            } catch (SQLException ex) {
                JOptionPane.showMessageDialog(null,"Error al conectarse con la bd: "+ ex.toString());
            }
        }
      }
      
     @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 400, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 300, Short.MAX_VALUE)
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents


    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(Productos.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(Productos.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(Productos.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(Productos.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                JLabel lblPe = new JLabel("Tabla Productos");
                new Productos(null).setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    // End of variables declaration//GEN-END:variables
}
