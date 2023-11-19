# Valid Parentheses

## Description
Étant donné une chaîne de caractères s contenant uniquement les caractères '(', ')', '{', '}', '[' et ']', déterminez si la chaîne d'entrée est valide.

Une chaîne d'entrée est valide si

Les parenthèses ouvertes doivent être fermées par le même type de parenthèses.
Les parenthèses ouvertes doivent être fermées dans le bon ordre.
Chaque parenthèse fermée a une parenthèse ouverte correspondante du même type.

## Ma pensée
La première idée est de faire des if imbriqués pour tester les caractères et voir s'ils correspondent aux parenthèses attendues. Donc, admettons que je mette celui-ci : "(" et bien si celui d'après n'est pas celui-ci ")" cela retournera un false.
S'il y a plus d'une paire de parenthèses, comment faire ?

## Approche et Algorithme
L'algorithme pour résoudre le problème des parenthèses valides consiste généralement à utiliser une pile. Voici une description brève de l'algorithme :

Initialisez une pile.
Parcourez chaque caractère de la chaîne de parenthèses.
Si le caractère est une ouverture de parenthèse ('(', '{', '['), ajoutez-le à la pile.
Si le caractère est une fermeture de parenthèse (')', '}', ']'), vérifiez si la pile est vide.
Si la pile est vide, la chaîne n'est pas valide.
Sinon, vérifiez si la fermeture correspond à l'ouverture en haut de la pile.
Si c'est le cas, retirez l'élément de la pile.
Sinon, la chaîne n'est pas valide.
À la fin de la boucle, si la pile est vide, la chaîne est valide.
Cet algorithme garantit que chaque ouverture de parenthèse a une fermeture correspondante et que les parenthèses sont correctement imbriquées. La pile est utilisée pour suivre l'ordre des parenthèses. Si la pile est vide à la fin, la chaîne est valide. Sinon, elle ne l'est pas.

## Complexité

### Temporelle
La complexité temporelle de l'algorithme de vérification de parenthèses est de l'ordre de O(n), où n désigne la longueur de la chaîne de parenthèses. Cette notation est appelée "complexité linéaire", ce qui signifie que le temps d'exécution de l'algorithme augmente de manière linéaire avec la taille de l'entrée. En d'autres termes, pour chaque caractère supplémentaire dans la chaîne, le temps d'exécution de l'algorithme augmente de manière proportionnelle.
### Spatial
La complexité spatiale de l'algorithme de vérification de parenthèses est en O(n), où n représente la longueur de la chaîne de parenthèses. Cette notation indique que l'espace mémoire nécessaire à l'exécution de l'algorithme croît de manière linéaire avec la taille de l'entrée. En d'autres termes, la quantité de mémoire utilisée augmente proportionnellement à la longueur de la chaîne de parenthèses. Cela est dû à l'utilisation d'une pile qui peut atteindre sa taille maximale en fonction de la profondeur des parenthèses dans la chaîne.

## Description
Given a string s containing only the characters '(', ')', '{', '}', '[' and ']', determine whether the input string is valid.

An input string is valid if

Open parentheses must be closed by the same type of parenthesis.
Open parentheses must be closed in the correct order.
Each closed parenthesis has a corresponding open parenthesis of the same type.

## My thoughts
The first idea is to use nested if statements to test the characters and see if they match the expected parentheses. So, let's say I put in this one: "("well, if the one after it isn't this one")" it will return a false.
If there's more than one pair of parentheses, what do I do?

## Approach and Algorithm
The algorithm for solving the problem of valid parentheses generally consists of using a stack. Here is a brief description of the algorithm:

Initialize a stack.
Scan each character in the parenthesis string.
If the character is a parenthesis opening ('(', '{', '['), add it to the stack.
If the character is a closing parenthesis (')', '}', ']'), check if the stack is empty.
If the stack is empty, the string is invalid.
Otherwise, check if the closure matches the opening at the top of the stack.
If so, remove the item from the stack.
Otherwise, the string is invalid.
At the end of the loop, if the stack is empty, the string is valid.
This algorithm ensures that every parenthesis opening has a corresponding closing and that parentheses are correctly nested. The stack is used to follow the order of the parentheses. If the stack is empty at the end, the string is valid. Otherwise, it is not.

## Complexity
### Time complexity
The time complexity of the parenthesis checking algorithm is of the order of O(n), where n denotes the length of the parenthesis string. This notation is called "linear complexity", meaning that the algorithm's execution time increases linearly with the size of the input. In other words, for each additional character in the string, the algorithm's execution time increases proportionally.

### Spatial
The spatial complexity of the parenthesis checking algorithm is O(n), where n represents the length of the parenthesis string. This notation indicates that the memory space required to execute the algorithm grows linearly with the size of the input. In other words, the amount of memory used increases in proportion to the length of the string of parentheses. This is due to the use of a stack, which can reach its maximum size depending on the depth of the parentheses in the string.

