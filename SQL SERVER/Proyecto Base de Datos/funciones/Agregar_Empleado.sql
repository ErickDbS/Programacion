--Agregar empleados a la tabla Empleados
CREATE PROCEDURE SP_NuevoEmpleado
	@Clave int,
	@Nombre varchar(100),
	@Edad int
AS
BEGIN
	BEGIN TRY
		INSERT INTO Empleados(ID, Nombre, Edad)
		VALUES (@Clave, @Nombre, @Edad)
	END TRY
	BEGIN CATCH 
		DECLARE @Mensaje varchar(100)
		SET @Mensaje = 'Error al registrar al empleado. ' + 
			'Mensaje del Sistema: ' +
			ERROR_MESSAGE()
		RAISERROR(@Mensaje, 16, 1)
	END CATCH
END

EXEC SP_NuevoEmpleado 2, 'Carlos Garcia', 20