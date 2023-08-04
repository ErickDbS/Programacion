--Procedimiento que actualiza informacion de un empleado
CREATE PROCEDURE SP_ActualizaEmpleado
	@Clave int,
	@Nombre varchar(100)
AS
BEGIN
	BEGIN TRY
		UPDATE Empleados
		SET Nombre = @Nombre
		WHERE 
			ID = @Clave
	END TRY
	BEGIN CATCH
		DECLARE @Mensaje varchar(100)
		SET @Mensaje = 'Error al actualizar empleado. ' +
			'Mensaje del Sistema: ' +
			ERROR_MESSAGE()
		RAISERROR(@Mensaje, 16, 1)
	END CATCH
END

EXEC SP_ActualizaEmpleado 2, 'Carlos Antonio'