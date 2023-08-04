CREATE PROCEDURE SP_NuevaCita
	@Clave int,
	@Nombre varchar(100),
	@Fecha datetime,
	@Motivo varchar(200)
AS
BEGIN
	BEGIN TRY
		INSERT INTO Citas(ID_Cliente, Nombre, Fecha, Motivo)
		VALUES (@Clave, @Nombre, @Fecha, @Motivo)
	END TRY
	BEGIN CATCH 
		DECLARE @Mensaje varchar(100)
		SET @Mensaje = 'Error al registrar la cita. ' + 
			'Mensaje del Sistema: ' +
			ERROR_MESSAGE()
		RAISERROR(@Mensaje, 16, 1)
	END CATCH
END

EXEC SP_NuevaCita 2, 'Carlos Garcia', '09/20/2023', 'Ajuste brackets'