# Opgaver til IMPR Lektion 10
For de fleste af dagens opgaver er det passende at
1) implementere funktionen i et lille bibliotek, og
2) skrive en eller flere tests af funktionen ved brug af CTest

Du kan passende starte med dine tests, det er god brug af "top-down" programmering.

## Gruppeopgaver
Disse opgaver laves sammen i gruppen. Der er rigeligt med opgaver.
Arbejd grundigt med de opgaver, I kan nå, i den skemalagte tid.

### [Opgave A](src/opgave-a.c): Brøker og structs
Dette er Kurt Nørmark's [opgave 12.5](https://homes.cs.aau.dk/~normark/impr-c/structures-flere-opgaver-slide-exercise-1.html).
Du kan skrive dit program i filen [`opgave-a.c`](src/opgave-a.c).

> Lav en struct, som repræsenterer en brøk (engelsk: fraction). 
> Den nye type skal naturligvis have to felter, for hhv. tæller og nævner (engelsk: numerator og denominator). 
> I denne opgave ønsker vi at disse skal være af typen `unsigned int`. Vi arbejder således udelukkende med positive brøker.
> 
> Programmer nu følgende funktioner på brøker:
> 
> - En funktion der forkorter brøken mest muligt (ved at dividere igennem med den største fælles divisor))
> - En funktion (procedure) der udskriver en brøk på skærmen.
> - En funktion der multiplicerer (ganger) en brøk med et heltal, og som returnerer produktet (en brøk). Forkort den resulterende brøk mest muligt.
> - En funktion der multiplicerer (ganger) to brøker sammen, og som returnerer produktet. Forkort den resulterende brøk mest muligt.
> - En funktion der adderer to brøker (lægger dem sammen) og som returnerer summen. Forkort den resulterende brøk mest muligt.
> 
> Det kan også anbefales at lave en funktion, der laver en brøk ud fra en tæller og en nævner. 
> Altså en funktion der returnerer en brøk konstrueret ud fra tæller og nævner input.
> 
> ---
> 
> Vi har tidligere i kurset arbejdet med en funktion, der finder den største fælles divisor af to positive heltal. For ikke at bruge for meget tid på dette aspekt, er der en mulig implementation af denne funktion her (Euclids algoritme):
> ```c++
> unsigned int gcd(unsigned int large, unsigned int small){
>     unsigned int remainder;
>     while (small > 0){
>         remainder = large % small;
>         large = small;
>         small = remainder;
>     }
>     return large;
> }
> ```
> Når man skal addere to brøkker skal man først finde en fælles nævner. Dette kan gøres ved at multiplicere begge brøker med den anden brøks nævner.
> 
> Hvis du har brug for mere matematisk viden om brøker henviser vi til [Wikipedias side om brøker](https://en.wikipedia.org/wiki/Fraction).
> 
> Skriv også en `main` funktion som giver eksempler på hvordan givne brøker kan konstrueres, adderes og multipliceres.

---
### [Opgave B](src/opgave-b.c): Funktionen tomorrow
Dette er Kurt Nørmark's [opgave 12.3](https://homes.cs.aau.dk/~normark/impr-c/structures-ex-calendar-slide-exercise-1.html).
Du kan tage udgangspunkt i programmet i filen [`opgave-b.c`](src/opgave-b.c).

> På [den omkringliggende slide](https://homes.cs.aau.dk/~normark/impr-c/structures-slide-ex-calendar.html) er der vist et program, der genererer en kalender på et helt år.
> 
> Vi har på en [tidligere slide](https://homes.cs.aau.dk/~normark/impr-c/structures-slide-ex-date.html) programmeret `struct date`.
> 
> I denne opgave skal du programmere den manglende funktion `tomorrow`. Funktionen `tomorrow` tager en dato som parameter, 
> og den returnerer datoen på den efterfølgende dag. Du kan taget udgangspunkt i programmet i filen [`opgave-b.c`](src/opgave-b.c).
> 
> _Hint_: Lad i udgangspunktet resultatet være den overførte parameter, og gennemfør (pr. assignment til enkelte felter) de nødvendige ændringer.


---
### [Opgave C](src/opgave-c.c): Sortering af et array af bøger
Dette er Kurt Nørmark's [opgave 12.2](https://homes.cs.aau.dk/~normark/impr-c/structures-ex-shelf-slide-exercise-1.html).
Du kan tage udgangspunkt i programmet i filen [`opgave-c.c`](src/opgave-c.c).

> Programmer en funktion, `sort_books_by_title`, som kan kaldes på variablen `shelf` fra programmet på den [tilhørende slide](https://homes.cs.aau.dk/~normark/impr-c/structures-slide-ex-shelf.html). 
> Tag udgangspunkt i programmet i filen [`opgave-c.c`](src/opgave-c.c). 
> Overfør også indekset af den sidste bog som en parameter til `sort_books_by_title`, 
> således at sorteringsfunktionen ved hvor mange bøger, der skal sorteres:
> ```c++
> void sort_books_by_title(book shelf[], int last){
>     qsort(shelf, last+1, ..., ...);
> }
> ```
> Som antydet af funktionsnavnet, skal funktionen ordne bøgerne således at titlerne kommer i alfabetisk orden. 
> Efter sorteringen er den første bog således 'C by Dissection', og den sidste bog er 'The C Programming Language'. 
> Sorteringen skal foregå ved at bytte om på bøgerne i arrayet (ikke ved at danne en ny, sorteret kopi af arrayet).
> 
> Ved løsningen af denne opgave skal du anvende funktionen `qsort` fra `stdlib.h`, 
> som [tidligere](https://homes.cs.aau.dk/~normark/impr-c/arrays-slide-qsort.html) har været beskrevet i dette undervisningsmateriale.
> 
> Programmer dernæst en funktion `sort_books_by_kind_and_year`. 
> Denne funktion skal primært sortere bøgerne således at alle skønlitterære bøger kommer før lærebøgerne (university text books). 
> Inden for begge disse grupper skal funktionen sekundært sortere bøgerne efter udgivelsesår. 
> Relativt til eksemplet på den tilknyttede side i undervisningsmaterialet skal det give følgende ordning på bøgerne:
> ```
> Title: Pelle Erobreren
> Year: 1910
> University text book: no
>
> Title: Ditte Menneskebarn
> Year: 1917
> University text book: no
>
> Title: The C Programming Language
> Year: 1988
> University text book: yes
>
> Title: C by Disssection
> Year: 2001
> University text book: yes
>
> Title: Problem Solving and Program Design in C
> Year: 2010
> University text book: yes
> ```
> Afprøv begge sorterings-funktionerne på de fem bøger i variablen `shelf`.


---
## Hjemmeopgaver
Dette er opgaver, som I kan arbejde med derhjemme.
Enten som forberedelse inden lektionen, eller som afrunding og repetition efter lektionen.

### [Opgave D](src/opgave-d.c)
Dette er opgave 1 på side 607 i Problem Solving and Program Design in C, eighth edition.
Se på programmet i filen [`opgave-d.c`](src/opgave-d.c). 

> Why does function `new_time`'s assignment of new values to the `second`, `minute` and `hour` components of its formal 
> parameter `time_of_day` have no effect on the components of the actual argument `time_now` in the call `new_time(time_now, secs)`?


---
### [Opgave E](src/opgave-e.c)
Dette er opgave 3 på side 640 i Problem Solving and Program Design in C, eighth edition 
(repræsentation af flydende tal med struct. Opgaven minder lidt om opgave A).
Du kan skrive dit program i filen [`opgave-e.c`](src/opgave-e.c).

> A number expressed in scientific notation is represented by its mantissa (a fraction) and its exponent (an integer).
> Define a type `sci_not_t` that has separate components for these two parts.
> Define a function `scan_sci` that takes from the input source a string representing a positive number in scientific notation, and breaks it into components for storage in a `sci_not_t` structure.
> The mantissa of an input value (`m`) should satisfy this condition: $0.1 \le m < 1.0$.
> Also, write functions to compute the sum, difference, product, and quotient of two `sci_not_t` values.
> All these functions should have a result type of `sci_not_t` and should ensure that the result's mantissa is in the prescribed range.
> Define a `print_sci` function as well.
> Then, create a driver program to test your functions. Your output should be of this form:
> ```
> Values input: 0.25000e3 0.20000e1
> Sum:  0.25200e3
> Difference: 0.24800e3
> Product:  0.50000e3
> Quotient: 0.12500e3
> ```
