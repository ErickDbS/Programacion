--Procedimiento que actualiza informacion de un cliente 
CREATE PROCEDURE SP_ActualizaCliente
	@Clave int,
	@Nombre varchar(100)
AS
BEGIN
	BEGIN TRY
		UPDATE Clientes
		SET Nombre = @Nombre
		WHERE 
			ID = @Clave
	END TRY
	BEGIN CATCH
		DECLARE @Mensaje varchar(100)
		SET @Mensaje = 'Error al actualizar linea. ' +
			'Mensaje del Sistema: ' +
			ERROR_MESSAGE()
		RAISERROR(@Mensaje, 16, 1)
	END CATCH
END

EXEC SP_ActualizaCliente 2, 'Carlos Garcia'