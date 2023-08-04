CREATE PROCEDURE SP_EliminarEmpleado
		@Clave int
AS
BEGIN
	BEGIN TRY
			DELETE Empleados
			WHERE
				ID = @Clave;
	END TRY
	BEGIN CATCH
		DECLARE @Mensaje varchar(200);
		SET @Mensaje = 'Error al intentar eliminar al empleado. ' +
			'Mensaje del sistema: ' +
			ERROR_MESSAGE();
		RAISERROR(@Mensaje, 16, 1);
	END CATCH
END
GO

EXEC SP_EliminarEmpleado 2