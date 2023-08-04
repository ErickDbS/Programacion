--Se dispara cuando eliminamos un campo de la tabla Clientes
CREATE TRIGGER TRG_AD_Clientes
ON Clientes
AFTER DELETE
AS
BEGIN
	PRINT 'Registro eliminado'
END