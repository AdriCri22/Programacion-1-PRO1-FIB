# Programacion-1-PRO1-FIB
Encuentra las prácticas de laboratorio sobre la asignatura de Programación I (PRO1) de la Facultad de Ingeniería Informática (FIB) de la Universidad Politécnica de Catalunya (UPC).

Para mayor comodidad al ejecutar los programas:
  
  - En Linux:
      
      Crear un archivo "execute.sh" y dentro añadir los comandos:
      
        p1++ -o main.x main.cc
      
        ./main.x
      
      Para ejecutar el archvio :
      
        ./execute.sh
      
      Si al ejecutarlo aparecen problemas relacionados con la falta de permisos ejecutar:
        
        chmod -x execute.sh
      
      Para comparar un input del programa con su output (Para ello hay que tener instalado el kompare) :
      
        ./main.x < sample.inp > sample.out  // Redirigimos la entrada y la salida con ficheros
        kompare sample.out sample.cor       // El programa kompare se encargará de comparar el output que nos tendría que salir con el de nuestro programa
        
  - En Windows:
  
      Crear un archivo "execute.bat" y dentro añadir los comandos:
      
        g++ -c *.cc
        g++ -o program.exe *.o
        program.exe
     
     Para ejecutar el archivo:
     
        execute.bat
