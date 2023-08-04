-- =============================================
-- Author:		Garcia Leal, Bojorquez Sepulveda, Estrada Avalos, Armenta Enriquez
-- Create date: 21/05/2023
-- Description:	Inserta y elimina registros en Citas
-- =============================================

--Se dispara despues de eliminar una cita en la tabla Citas 
CREATE TRIGGER TRG_AD_Citas
ON Citas
AFTER UPDATE
AS
BEGIN
	PRINT 'Registro actualizado'
END