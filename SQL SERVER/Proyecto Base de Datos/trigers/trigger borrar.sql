-- =============================================
-- Author:		<Author,,Name>
-- Create date: <Create Date,,>
-- Description:	<Description,,>
-- =============================================
CREATE TRIGGER TGR_AD_Lineas
	ON Lineas
	After delete
AS 
BEGIN
	declare @cve int
	declare @nom varchar(100);

	--consultar registro eliminado
	select @cve = Clave, @nom = Nombre
	from deleted

	insert into Lineas_Log(ClaveOld, NombreOld, Operacion, FechaHora, Usuario)
	value(@cve, @nom, 'd', CURRENT_TIMESTAMP, CURRENT_USER)


END
GO
