--Se dispara despues de modificar algun campo en la tabla Clientes
CREATE TRIGGER TRG_AU_Clientes
ON Clientes
AFTER UPDATE
AS
BEGIN
	PRINT 'Registro actualizado'
END