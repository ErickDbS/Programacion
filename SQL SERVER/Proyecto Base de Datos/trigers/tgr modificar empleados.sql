--Se dispara despues de modificar algun campo en la tabla Empleados 
CREATE TRIGGER TRG_AU_Empleados
ON Empleados
AFTER UPDATE
AS
BEGIN
	PRINT 'Registro actualizado'
END