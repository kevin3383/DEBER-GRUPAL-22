# 😎DEBER-GRUPAL-22😎
Como implementar algoritmo de búsqueda exhaustiva en la practica
                        Algoritmo de Búsqueda Exhaustiva
I
INTRODUCCION:🌐
Este código fue echo en el compilador Dev-C ++, también se lo puede compilar en otros programas. 
Este código ase la búsqueda de un patrón por medio de la búsqueda exhaustiva o como también se le conoce como búsqueda de fuerza bruta. Cuando queremos buscar un patrón por búsqueda exhaustiva se refiere a que tenemos un texto o una cadena de caracteres y queremos buscar un patrón que es mas o menos como una palabra a ver si se encuentra dentro de este texto y ver en qué posición se encuentra o si efectivamente esta, cuando nos referimos que lo hace por búsqueda exhaustiva, nos referimos a que este método es muy ambiguo en el sentido de que compara carácter por carácter y si hay un fallo tiene que continuar desde otra vez del principio y volver a comparar otra vez carácter por carácter desde donde hubo dicho fallo por eso se lo considera un método poco ineficiente, pero si genera buenos resultados
ANÁLISIS: 🌐
⚫¿Qué es?
 Algoritmo de búsqueda exhaustiva se encarga de encontrar la solución más óptima a cierto problema y esto lo logra, gracias a que busca satisfacer las necesidades del problema planteado este algoritmo también se le puede conocer como algoritmo de fuerza bruta, el uso más común de este algoritmo es los problemas de optimización ya que este tipo de problemas requiere instrucciones tan específicas sin margen de error. 
Como funciona 
Funcionamiento como lo había dicho anteriormente existen problemas que sólo se pueden solucionar de una o varias formas contadas pero para esto el algoritmo genera una lista que contienen todas las posibles soluciones de dicho problema de ahí va escogiendo las de mejor manera las necesidades del problema gracias a esto se le conoce como algoritmo de fuerza bruta ya que va probando una a una cada función hasta encontrar la correcta aunque lamentablemente esto lo vuelve uno de los algoritmos de búsqueda más lentos, el núcleo de este algoritmo es el Backtraking este método consiste en retroceder cada vez que se comete un error
 Implementación Practica
 Generar una lista de todas las soluciones potenciales del problema en una forma sistemática Segundo evaluar las soluciones potenciales una a una descalificando las no factibles y manteniendo un registro de la mejor en contraste al momento y por último cuando la búsqueda finalice se regresa la mejor solución encontrada Un claro ejemplo de manera general seria: Divisores de un numero natural N Para este tipo de búsqueda se puede emplear un algoritmo de búsqueda exhaustiva para encontrar el divisor de un número natural n enumerando todos los enteros desde 1 hasta el mismo y revisando si cada uno de ellos lo puede dividir sin generar residuos, entonces el algoritmo encuentra y guarda la información de los resultados esperados. Reinas en un tablero de ajedrez El problema de acomodar ocho reinas en un tablero de ajedrez de forma que ninguna de ellas tenga la posibilidad de atacar a otra esta consiste en examinar la posición para las ocho reinas de manera simultánea y de la misma manera que la anterior se guarda la información de la posición requerida para esto
Análisis de su complejidad 
Considerando la Cantidad de Comparaciones
 – Mejor Caso: • El elemento buscado está en la primera posición. Es decir, se hace una sola comparación 
– Peor Caso: • El elemento buscado está en la última posición. Necesitando igual cantidad de comparaciones que de elementos el arreglo 
– En Promedio: 
• El elemento buscado estará cerca de la mitad. Necesitando en promedio, la mitad de comparaciones que de elemento
• Por lo tanto, la velocidad de ejecución depende linealmente del tamaño del arreglo💻
