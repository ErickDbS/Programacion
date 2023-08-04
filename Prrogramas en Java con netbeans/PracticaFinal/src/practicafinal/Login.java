package practicafinal;

import javax.swing.JOptionPane;
import java.sql.*;


public class Login extends javax.swing.JFrame {
    
    // Declaracion de la instancia del formulario principal el cual sirve para naver entre las diferentes tablas
    principal p = new principal();
   
    // Variable para poder acceder a la base de datos
   Connection con;
   
   // Constructor de default de NetBeans
    public Login() {
        initComponents();
    }

  
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jLabel1 = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        txtUser = new javax.swing.JTextField();
        txtPass = new javax.swing.JTextField();
        btnConectar = new javax.swing.JButton();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("Iniciar Sesion");
        getContentPane().setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jLabel1.setText("Usuario");
        getContentPane().add(jLabel1, new org.netbeans.lib.awtextra.AbsoluteConstraints(20, 30, -1, -1));

        jLabel2.setText("Contraseña");
        getContentPane().add(jLabel2, new org.netbeans.lib.awtextra.AbsoluteConstraints(20, 90, -1, -1));
        getContentPane().add(txtUser, new org.netbeans.lib.awtextra.AbsoluteConstraints(160, 30, 120, -1));
        getContentPane().add(txtPass, new org.netbeans.lib.awtextra.AbsoluteConstraints(160, 90, 120, -1));

        btnConectar.setText("Conectar");
        btnConectar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnConectarActionPerformed(evt);
            }
        });
        getContentPane().add(btnConectar, new org.netbeans.lib.awtextra.AbsoluteConstraints(80, 150, -1, -1));

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void btnConectarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnConectarActionPerformed
        String User; // Variable para poder iniciar sesion
        String Pass; // lo mismo que arriba
        
        User = txtUser.getText(); // metodos que toman lo que se escribe en el JTextField llamado txtUser
        Pass = txtPass.getText(); // lo mismo que ariba pero con el JTextField llamdo Pass
        
        // IF para crear la conexion en la base de datos si es que el usuario y contraseña son correctos
        if(User.equals("erick") && (Pass.equals("1234"))){ // se usa la funcion .equals para comparar si lo que hay en los JTextField coinsiden  a la contraseña y usuarios declarados
             try {
            //Crea la conexion con la base de datos
            Class.forName("com.microsoft.sqlserver.jdbc.SQLServerDriver"); //Carga el driver de sql server en memoria
            String connectionUrl = "jdbc:sqlserver://localhost:1433;databaseName=Farmacia;user=erickSQL;password=321"; //Crea la cadena de conexión
            con = DriverManager.getConnection(connectionUrl); //Abre la conexion
            JOptionPane.showMessageDialog(null,"La conexion se llevo a cabo con exito Bienvenido");
        } catch (SQLException e) {
            JOptionPane.showMessageDialog(null,"Error al conectarse con la bd: "+ e.toString());
        } catch (ClassNotFoundException cE) {
            JOptionPane.showMessageDialog(null,"Class Not Found Exception: "+ cE.toString());
        }
            p.setVisible(true); // Muestra el formulario principal
            dispose(); // Cierra el formulario de login
        }
        else{
            // Si la contraseña o usuario no son correctos muestra el siguiente JOptionPane
            JOptionPane.showMessageDialog(null, "Usuario o Contraseña Incorrecta");
        }
    }//GEN-LAST:event_btnConectarActionPerformed

    /**
     * @param args the command line arguments
     */
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
            java.util.logging.Logger.getLogger(Login.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(Login.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(Login.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(Login.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Login().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton btnConectar;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JTextField txtPass;
    private javax.swing.JTextField txtUser;
    // End of variables declaration//GEN-END:variables
}
