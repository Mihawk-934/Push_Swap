# Push_Swap

Parce que swap_push n'est pas aussi naturel
Étant donné un ensemble d'entiers, triez-le à l'aide d'un ensemble d'instructions prédéfini à l'aide de deux piles. Le jeu d'instructions est défini ci-dessous. Ce programme génère un programme dans des instructions push_swap qui trie les entiers d'entrée.

## Instruction

Pour les instructions suivantes, si l'instruction n'est pas possible, la partie de celle-ci qui ne peut pas être exécutée ne le sera pas.

Code	| Instruction			| Action
--------|-----------------------|----------------------------------------------
`sa`	| swap a				| échange les 2 éléments supérieurs de la pile a
`sb`	| swap b				| échange les 2 éléments supérieurs de la pile b
`ss`	| swap a + swap b		| à la fois  `sa`  et  `sb`
`pa`	| push a				| déplace l'élément supérieur de la pile b en haut de la pile a
`pb`	| push b				| déplace l'élément supérieur de la pile a en haut de la pile b
`ra`	| rotate a				| décale tous les éléments de la pile a de bas en haut
`rb`	| rotate b				| décale tous les éléments de la pile b de bas en haut
`rr`	| rotate a + rotate b	| à la fois  `ra`  et  `rb`
`rra`| reverse rotate a		| décale tous les éléments de la pile a de haut en bas
`rrb`| reverse rotate b		| décale tous les éléments de la pile b de haut en bas
`rrr`| reverse rotate a + reverse rotate b	| à la fois  `rra`  et  `rrb`

## Compilation
Run `make`.

## Usage
```
./push_swap 1 2 3 4
```
