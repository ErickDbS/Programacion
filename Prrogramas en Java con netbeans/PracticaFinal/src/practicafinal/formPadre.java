package practicafinal;

import javax.swing.*;
import java.sql.*;
import java.awt.event.*;

public class formPadre extends javax.swing.JFrame {
    
    // Variable que se usa para conectar la base de datos
    Connection con;
    
    // Constructor sobrecargado que recibe un parametro de String para establecer el nombre de los ABC's
    public formPadre(String Nom) {
        initComponents();
         lblnom.setText(Nom); // Recibe un parametro de String y muestra el texto que se le ponga
       

        try {
            //Crea la conexion con la base de datos
            Class.forName("com.microsoft.sqlserver.jdbc.SQLServerDriver"); //Carga el driver de sql server en memoria
            String connectionUrl = "jdbc:sqlserver://localhost:1433;databaseName=Farmacia;user=erickSQL;password=321"; //Crea la cadena de conexión
            con = DriverManager.getConnection(connectionUrl); //Abre la conexi�n
        } catch (SQLException e) {
            JOptionPane.showMessageDialog(null,"Error al conectarse con la bd: "+ e.toString());
        } catch (ClassNotFoundException cE) {
            JOptionPane.showMessageDialog(null,"Class Not Found Exception: "+ cE.toString());
        }
    }
       
    // Declaracion de los metodos que disparan los eventos de los botones (se implementan en las respectivas clases hijas con polimorfismo)
    public void Agregar(ActionEvent evt){}
    public void Modificar(ActionEvent evt){}
    public void Consultar(ActionEvent evt){}
    public void Borrar(ActionEvent evt){}
     
     
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jLabel1 = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        txtID = new javax.swing.JTextField();
        txtNombre = new javax.swing.JTextField();
        btnAgregar = new javax.swing.JButton();
        btnModificar = new javax.swing.JButton();
        btnConsultar = new javax.swing.JButton();
        btnBorrar = new javax.swing.JButton();
        btnBack = new javax.swing.JButton();
        lblNom = new javax.swing.JLabel();
        lblnom = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("ABC'S");
        getContentPane().setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jLabel1.setText("ID");
        getContentPane().add(jLabel1, new org.netbeans.lib.awtextra.AbsoluteConstraints(30, 40, -1, -1));

        jLabel2.setText("Nombre");
        getContentPane().add(jLabel2, new org.netbeans.lib.awtextra.AbsoluteConstraints(30, 110, -1, -1));
        getContentPane().add(txtID, new org.netbeans.lib.awtextra.AbsoluteConstraints(130, 40, 130, -1));
        getContentPane().add(txtNombre, new org.netbeans.lib.awtextra.AbsoluteConstraints(130, 110, 130, -1));

        btnAgregar.setText("Agregar");
        btnAgregar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnAgregarActionPerformed(evt);
            }
        });
        getContentPane().add(btnAgregar, new org.netbeans.lib.awtextra.AbsoluteConstraints(10, 190, -1, -1));

        btnModificar.setText("Modificar");
        btnModificar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnModificarActionPerformed(evt);
            }
        });
        getContentPane().add(btnModificar, new org.netbeans.lib.awtextra.AbsoluteConstraints(100, 190, -1, -1));

        btnConsultar.setText("Consultar");
        btnConsultar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnConsultarActionPerformed(evt);
            }
        });
        getContentPane().add(btnConsultar, new org.netbeans.lib.awtextra.AbsoluteConstraints(190, 190, -1, -1));

        btnBorrar.setText("Borrar");
        btnBorrar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnBorrarActionPerformed(evt);
            }
        });
        getContentPane().add(btnBorrar, new org.netbeans.lib.awtextra.AbsoluteConstraints(280, 190, -1, -1));

        btnBack.setText("Back");
        btnBack.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnBackActionPerformed(evt);
            }
        });
        getContentPane().add(btnBack, new org.netbeans.lib.awtextra.AbsoluteConstraints(318, 10, -1, -1));
        getContentPane().add(lblNom, new org.netbeans.lib.awtextra.AbsoluteConstraints(160, 10, -1, -1));

        lblnom.setText("Nombre de la tabla");
        getContentPane().add(lblnom, new org.netbeans.lib.awtextra.AbsoluteConstraints(140, 10, 140, -1));

        pack();
    }// </editor-fold>//GEN-END:initComponents

        // Botones creados con la interfaz grafica de NetBeans que contiene dentro su metodo para acceder a los ABC's
    private void btnAgregarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnAgregarActionPerformed
       Agregar(evt);
    }//GEN-LAST:event_btnAgregarActionPerformed

    private void btnModificarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnModificarActionPerformed
        Modificar(evt);
    }//GEN-LAST:event_btnModificarActionPerformed

    private void btnConsultarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnConsultarActionPerformed
        Consultar(evt);
    }//GEN-LAST:event_btnConsultarActionPerformed

    private void btnBorrarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnBorrarActionPerformed
        Borrar(evt);
    }//GEN-LAST:event_btnBorrarActionPerformed
    
    // Boton que regresa al farmulario principal para poder acceder a los otros ABC's
    private void btnBackActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnBackActionPerformed
        principal p = new principal();
        p.setVisible(true);
        dispose();
    }//GEN-LAST:event_btnBackActionPerformed

  
    public static void main(String args[]) {
        principal p = new principal();
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
            java.util.logging.Logger.getLogger(formPadre.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(formPadre.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(formPadre.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(formPadre.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>
        
        
        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new formPadre("").setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    public javax.swing.JButton btnAgregar;
    public javax.swing.JButton btnBack;
    public javax.swing.JButton btnBorrar;
    public javax.swing.JButton btnConsultar;
    public javax.swing.JButton btnModificar;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    public javax.swing.JLabel lblNom;
    public javax.swing.JLabel lblnom;
    public javax.swing.JTextField txtID;
    public javax.swing.JTextField txtNombre;
    // End of variables declaration//GEN-END:variables
}
