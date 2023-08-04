--Se dispara cuando eliminamos un campo de la tabla Empleados
CREATE TRIGGER TRG_AD_Empleados
ON Empleados
AFTER DELETE
AS
BEGIN
	PRINT 'Registro eliminado'
END