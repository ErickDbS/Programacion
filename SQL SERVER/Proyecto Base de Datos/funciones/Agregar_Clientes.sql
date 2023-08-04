--
CREATE PROCEDURE SP_NuevoCliente
	@Clave int,
	@Nombre varchar(100),
	@Edad int
AS
BEGIN
	BEGIN TRY
		INSERT INTO Clientes(ID, Nombre, Edad)
		VALUES (@Clave, @Nombre, @Edad)
	END TRY
	BEGIN CATCH 
		DECLARE @Mensaje varchar(100)
		SET @Mensaje = 'Error al registrar el cliente. ' + 
			'Mensaje del Sistema: ' +
			ERROR_MESSAGE()
		RAISERROR(@Mensaje, 16, 1)
	END CATCH
END

EXEC SP_NuevoCliente 3, 'Carlos Estrada', 20