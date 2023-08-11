# documentacion_ejercicios
# LOS CHICHONGOS
**Integrantes**  
Isabela Giraldo Jimenez ID:000475112  
Jacobo Prada Zapata ID:000481862  
Alejandro Villegas Morales ID:000481571    

### Ejercicio 7

Se explica lo que hacen los estados del INIT y el WAIT_TIMEOUT y su relación con los eventos que evidenciamos en el if (switch), en este caso el evento es el paso del tiempo y por ultima la acción que ejecuta muestra el tiempo transcurrido.

Millis()devuelve el número de milisegundos desde que la placa Arduino empezó a ejecutar, luego de un reinicio o el encendido

### Ejercicio 8: retrieval practice

**¿Cuáles son los estados del programa?**  
INIT  
WAIT_TIMEOUT  

**¿Cuáles son los eventos?**   
Task 1, Task 2, Task 3 (espera de segundos en cada caso)

**¿Cuáles son las acciones?**  
Serial.print

### Ejercicio 9: Tareas Concurrentes

En este programa se ejecutan varios eventos el cual cada uno tendrá su intervalo de tiempo correspondiente, los cuales son:   
1 hz para la primera tarea  
0,5 hz para la segunda  
0,25 Hz para la tercera

La acción que ejecutarán es un serial print en el monitor con el tiempo de espera correspondiente de cada tarea  
Se tienen dos estados:  
INIT: Configura el inicio del programa con sus variables  
WAIT_TIMEOUT: Define el intervalo específico de cada tarea

### Ejercicio 10: Monitor Serial

En este punto descargamos Script Communicator, que es un tipo de monitor serial que nos muestra lo programado en el IDE Arduino, algo muy importante de esta sección es que SOLO una aplicación puede comunicarse a la vez con el microcontrolador, por lo que no se puede programar en el raspberry mientras se tiene abierto el ScriptCommunicator conectado al puerto serial.

En Arduino no se debe tener ninguna precaución ya que este solo pasa la información al microcontrolador y ya cortas la comunicación, pero en SC se debe desconectar de forma manual ya que este transfiere datos de forma constante.

### Ejercicio 11: Realiza algunas pruebas

En esta sección nos muestran una serie de pasos para usar el ScriptCommunicator y ver el monitor serial, cuando lo conectamos en el programa y enviamos un carácter en la caja de texto, nos mostraba un mensaje de “Hola Computador”, es de suma importancia oprimir el botón de send, ya que si se oprime el enter este también es un carácter y se estarían dos input.

### Ejercicio 12: Punteros

**¿Cómo se declara un puntero?**  
Un puntero se declara con tipo de variable y asterisco antes del nombre del puntero  
**¿Cómo se define un puntero? (cómo se inicializa)**  
Después del igual se le asigna su valor  
**¿Cómo se obtiene la dirección de una variable?**  
Se le asigna la variable a seguir con un & antes del nombre de la variable  
**¿Cómo se puede leer el contenido de una variable por medio de un puntero?**  

**¿Cómo se puede escribir el contenido de una variable por medio de un puntero?**  
escribir Serial.print(*<nombrePuntero>);

### Ejercicio 13: Punteros y funciones

Para este ejercicio funciona igual que el anterior pero para cada caso del proceso, se utiliza una función, teniendo así una para escribir el contenido de la variable, otra para asignar el valor al puntero específico y la task 1 para ejecutar el programa como tal con sus estados y eventos.  

