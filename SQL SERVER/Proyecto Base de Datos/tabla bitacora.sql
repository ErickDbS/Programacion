create table bitacoraConsultorio (
LioID INT IDENTITY(1,1) PRIMARY KEY,
FechaHora DateTime default getdate(),
Operacion NVARCHAR(50),
Detalles NVARCHAR(MAX)
);
Create trigger Citascliente
on Citas
after INSERT,UPDATE,DELETE
AS
BEGIN
DECLARE @Operaciones NVARCHAR(50);
DECLARE @Detalles NVARCHAR(MAX);

IF EXISTS (SELECT * FROM inserted)
 Begin
  if exists (select * from deleted)
  begin
  set @Operaciones = 'Actualizacion';
  set @Detalles= 'Registro(s) Actualizado(s):' + cast((select count(*) from inserted)AS NVARCHAR(10));
 
 END
  ELSE
  BEGIN

  set @Operaciones = 'Inserccion';
  set @Detalles= 'Registro(s) Insertados(s):' + cast((select count(*) from inserted)AS NVARCHAR(10));
   END 

  END
  ELSE
  BEGIN

  set @Operaciones = 'Eliminacion';
  set @Detalles= 'Registro(s) eliminado(s):' + cast((select count(*) from inserted)AS NVARCHAR(10));
  END
  
  insert into bitacoraConsultorio (Operacion,Detalles)
  VALUES (@Operaciones, @Detalles);

  end;



  