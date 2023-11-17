# Roman to integer

## Description 
Le probleme consistait a convertir un chiffre romain proposer en entrer en nombre sur la sortit.

## Approche et Algorithme

### Initialisation
Creation d'une `Map` qui associe chaque chiffre romain a sa valeur numerique correspondante. Initialisez les variables `result` a 0 et `prev_value` a 0 pour suivre la valeur du chiffre romain precedent.

### Parcours de droite a gauche
Utilisation d'une boucle `for` pour parcourir la chaine de caractere du chiffre romain de droite a gauche. Commencant par l'indice du dernier caractere (s.length - 1) et en descendant jusqu'a l'indice 0.

### Obtention de la valeur du chiffre actuel
Cette etape a permis d'obtenir la valeur numerique du chiffre romain actuel a partir de la `Map`.

### Comparaison avec le chiffre precedent
Comparaison de la valeur du chiffre romain actuel avec la valeur du chiffre romain precedent ('prev_value').
    - Si la valeur actuelle est inferieure a la valeur precedente, soustrayez la valeur actuelle du resultat (`result`).
    - Sinon, ajoutez la valeur actuelle au resultat

### Mise a jour de la valeur precedente
Mise a jour de la variable `prev_value` avec la valeur du chiffre romain actuel pour la prochaine iteration.

### Renvoi du resultat
A la fin de la boucle, le resultat est stcoke dans la variable `result` et ensuite renvoye.

### Resume
C'est une approche iterative permettant de ferer les cas ou la soustraction est utilisee dans les chiffres romains (par exemple, IV pour 4, IX pour 9, etc) en comparant la valeur actuelle avec la valeur precedente.

## Complexite
    - Temporelle : lineaire, notee O(n) n est la longueur de la chaine de caracteres du nombre romain, le temps d'execution de l'algorithme croit de maniere lineaire avec la taille de l'entree. Sachant que la boucle `for` parcourt chaque caractere une seule fois, effectuant des operations constantes a chaques iteration.
    - Spatial : Constante, notee 0(1), l'utilisation de la memoire de l'algorithme reste relativement constante independamment de la taille de l'entree. Les variables utilisees occupent une quantite fixe de memoire. Ainsi, la quantite de memoire necessaire ne depend pas de la taille de l'entre, ce qui est caracteristique d'une complexite spatiale constante.


# Roman to Integer

## Description
The problem involves converting a given Roman numeral input into an integer output.

## Approach and Algorithm

### Initialization
Creation of a `Map` associating each Roman numeral with its corresponding numeric value. Initialize variables `result` to 0 and `prev_value` to 0 to track the value of the previous Roman numeral.

### Traverse from Right to Left
Use a `for` loop to traverse the string of the Roman numeral from right to left. Start from the index of the last character (`s.length - 1`) and go down to index 0.

### Obtain the Value of the Current Numeral
This step involves obtaining the numeric value of the current Roman numeral from the `Map`.

### Comparison with the Previous Numeral
Compare the value of the current Roman numeral with the value of the previous Roman numeral (`prev_value`).
   - If the current value is less than the previous value, subtract the current value from the result (`result`).
   - Otherwise, add the current value to the result.

### Update of the Previous Value
Update the variable `prev_value` with the value of the current Roman numeral for the next iteration.

### Return of the Result
At the end of the loop, the final result is stored in the variable `result` and then returned.

### Summary
It is an iterative approach that handles cases where subtraction is used in Roman numerals (e.g., IV for 4, IX for 9, etc.) by comparing the current value with the previous value.

## Complexity
   - Time: Linear, noted O(n) where n is the length of the string of the Roman numeral. The execution time of the algorithm grows linearly with the input size, the `for` loop traversing each character only once and performing constant operations at each iteration.
   - Space: Constant, noted O(1). The memory usage remains relatively constant regardless of the input size. The variables used occupy a fixed amount of memory, and the amount of memory required does not depend on the input size.
