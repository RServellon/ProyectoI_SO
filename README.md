# ProyectoI_SO
## Integrantes:
Norman Betancourtt Mairena
Hector Mendez Fernandez
Rebeca Servellon Orellana

## Agregar módulo
Para agregar el módulo primero debemos ejecutar el Makefile

`# make`

Al ejecutar el archivo make, se van a crear otros archivos, nos interesa el .ko 

Para cargar el modulo al kernel se usa

`# sudo insmod modulo.ko`

## Probar
`# dmesg`

## Quitar el módulo 
para  quitar el modulo del kernel se usa el siguiente comando

`# sudo rmmod modulo`
