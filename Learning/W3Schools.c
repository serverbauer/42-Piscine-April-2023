#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void myFunction();
int myFunction2(int x, int y);

int sum(int k);

int main() {
    // printf("Hello, World!\nIch lerne zum ersten Mal C!\nEs ist sehr interessant!\nIch bin gespannt wie weit ich komme :D\n");
    printf("Hello, World!\n");
    printf("Ich lerne zum ersten Mal C!\n");
    printf("Es ist sehr interessant!\n");
    printf("Ich bin gespannt wie weit ich komme :D\n");
    printf("Wenn ich ein Backslash schreiben will, muss ich \\\\ schreiben.\n");
    printf("Wenn ich eine Zeile Abstand nehmen will muss ich \\n schreiben.\n");
    printf("Wenn ich \\t schreibe, dann wird die naechste Zeile mit eingefuegt in die vorherige.\n");

    // Kommentar wie in Java
    /*
       Multiline Kommentar wie in Java.
       Es ist krass, wie sehr es Java ähnelt, aber es hat natürlich unterschiede welche man bemerkt.
    */

    // Variablen mit if und else abfragen
    // int, float, double, char, bool
    // int = Integer sind ganze Zahlen ohne komma aber sie können auch negativ sein
    // float = Gleitkommazahl 32bit
    // double = Gleitkommazahl 64bit
    // char = Zeichen wie z.B. 'a' oder 'A'
    // bool = Boolean, hat nur true oder false, 1 oder jegliche andere zahl geben den Wert true und 0 gibt den Wert false, Boolean muss mit #include <stdbool.h> importiert werden

    // Integer
    int a = 5;

    if (a == 5) {
        printf("a ist 5\n");
    } else {
        printf("a ist nicht 5\n");
    }

    int f = 15; // Standardwert der Variable f ist 15
    f = 10; // Variable f wird auf 10 gesetzt
    printf("f ist %d\n", f); // %d oder %i ist ein Platzhalter für eine Zahl, %s für einen String, %c für ein Zeichen, %f für eine Gleitkommazahl

    // Gleitkommazahl
    // float
    float b = 5.5;

    if (b == 5.5) {
        printf("b ist 5.5\n");
    } else {
        printf("b ist nicht 5.5\n");
    }

    // double
    double c = 5.5;

    if (c == 5.5) {
        printf("c ist 5.5\n");
    } else {
        printf("c ist nicht 5.5\n");
    }

    // Char
    char d = 'q';

    if(d == 'q') {
        printf("c entspricht dem Wert q\n");
    } else {
        printf("c entspricht nicht dem Wert q\n");
    }

    // Boolean
    bool e = true; // kann auch den Wert einer Zahl haben, 0 = false, 1 und alles darüber = true

    if(e == true) {
        printf("e ist true\n");
    } else {
        printf("e ist false\n");
    }

    printf("%d\n", 10 > 9); // 0 = false, 1 = true

    int meinAlter = 18;
    int alterfuersWaehlen = 18;

    printf("%d\n", meinAlter >= alterfuersWaehlen); // 0 = false, 1 = true

    if (meinAlter >= alterfuersWaehlen) {
        printf("Du darfst waehlen gehen!\n");
    } else {
        printf("Du darfst nicht waehlen gehen!\n");
    }

    // Weitere Tests
    int y = 5;
    int z = 10;
    int summe = y + z;

    printf("Die Summe von %d und %d ist %d\n", y, z, summe);

    // Mit Multiline Variablen kann man direkt in der print rechnen, ohne ein const zu erstellen
    int u = 5, k = 4, l = 3;
    printf("%d", u + k + l);

    // Mit const vor einer Variable kann man sie nicht mehr ändern und sie ist nur in der Funktion gültig, in der sie erstellt wurde und nicht global wie bei int oder float usw.
    const int DiesIstEinTest = 5;
    // DiesIstEinTest = 10; // Wird nicht mehr funktionieren
    // Zwei Ausgabe Möglichkeiten
    printf("%d \n", DiesIstEinTest);
    // printf((const char *) DiesIstEinTest); // Achtung wenn dies verwendet wird funktioniert das obere Format mit %d nicht mehr in der restlichen Funktion!

    /*
        +	Addition	    Adds together two values	            x + y
        -	Subtraction	    Subtracts one value from another	    x - y
        *	Multiplication	Multiplies two values	                x * y
        /	Division	    Divides one value by another	        x / y
        %	Modulus	        Returns the division remainder	        x % y
        ++	Increment	    Increases the value of a variable by 1	++x
        --	Decrement	    Decreases the value of a variable by 1	--x

        ==	Equal to	                x == y
        !=	Not equal	                x != y
        >	Greater than	            x > y
        <	Less than	                x < y
        >=	Greater than or equal to	x >= y
        <=	Less than or equal to	    x <= y

        && 	Logical and	Returns true if both statements are true	            x < 5 &&  x < 10
        || 	Logical or	Returns true if one of the statements is true	        x < 5 || x < 4
        !	Logical not	Reverse the result, returns false if the result is true	!(x < 5 && x < 10)

        \'	    '	    Single quote
        \"	    "	    Double quote
        \\	    \	    Backslash

        \n	New Line
        \t	Tab
        \0	Null

        Beachten Sie, dass wir die Format spezifikation %lu verwenden, um das Ergebnis zu drucken, anstelle von %d. Der Grund dafür ist, dass der Compiler erwartet,
        dass der sizeof-Operator einen long unsigned int (%lu) zurückgibt, anstatt int (%d).
        Auf manchen Computern funktioniert es vielleicht mit %d, aber es ist sicherer, %lu zu verwenden.

        sizeof() gibt die Größe eines Objekts in Bytes zurück. Es ist ein Operator, der nicht auf Variablen angewendet werden kann, sondern auf Datentypen.

     */

    // Zu Variablen kann man auch Werte addieren, ohne sie direkt zu ändern

    int h = 5;
    h += 10; // oder h = h + 10
    printf("H entspricht nun einen Wert von: %d\n", h);

    // if Abfragen können auch verkleinert werden von einer Multi-Line zu einer Single-Line Syntax: variable = (condition) ? expressionTrue : expressionFalse;
    int time = 20;
    (time < 18) ? printf("Guten Tag.\n") : printf("Guten Abend.\n");

    // Diese Methode wird auch die Ternary Operator Methode genannt

    // Switch Case
    int day = 4;
    switch (day) {
        case 1:
            printf("Montag\n");
            break;
        case 2:
            printf("Dienstag\n");
            break;
        case 3:
            printf("Mittwoch\n");
            break;
        case 4:
            printf("Donnerstag\n");
            break;
        case 5:
            printf("Freitag\n");
            break;
        case 6:
            printf("Samstag\n");
            break;
        case 7:
            printf("Sonntag\n");
            break;
        default:
            printf("Falsche Eingabe\n");
            break;
            // Default wird ausgeführt, wenn keine der anderen Bedingungen erfüllt ist, also wenn keine der anderen Cases zutrifft, ist aber nicht notwendig dazuzuschreiben
    }

    // Ein break kann viel Ausführungszeit sparen, da es die Ausführung des gesamten restlichen Codes im Schalterblock "ignoriert".
    // Wenn Sie den break weglassen, wird der Code für die nächste Anweisung ausgeführt. Dadurch wird jedes case ausgeführt, bis ein break gefunden wird.

    // While Loop
    // Zählt alle Zahlen von 0 bis 9 aus
    int i = 0;
    while (i < 10) {
        printf("%d\n", i);
        i++;
    }

    // Do While Loop
    // Zählt alle Zahlen von 0 bis 9 aus, obwohl j = 0 ist
    int j = 0;

    do {
        printf("%d\n", j);
        j++;
    } while (j < 10);

    // For Loop
    // Zählt alle Zahlen von 0 bis 9 aus (normal wird hier die Variable i verwendet)
    int o;
    for (o = 0; o < 10; o++) {
        printf("%d\n", o);
    }

    // Break und Continue
    // Break beendet die Schleife
    // Continue beendet die aktuelle Iteration und beginnt mit der nächsten
    /*
    int test;

    for (test = 0; test < 10; test++) {
        if (test == 4) {
            break;
        }
        printf("%d\n", test);
    }

    for (test = 0; test < 10; test++) {
        if (test == 4) {
            continue;
        }
        printf("%d\n", test);
    }
    */

    // Arrays
    // Ein Array ist eine Sammlung von Variablen, die den gleichen Datentyp haben.
    // Arrays werden verwendet, um eine Liste von Elementen zu speichern, die in einer bestimmten Reihenfolge angeordnet sind.
    int myNumbers[] = {25, 50, 75, 100};
    printf("%d\n", myNumbers[0]); // Gibt den Wert des ersten Elements aus (25), gibt man einen anderen Wert als 0 an, wird ein anderer Array (0-3) ausgegeben, außer man gibt 4 ein, dann gibt es einen Fehler aus, da es nur 4 Elemente gibt

    int MyNumbers[] = {25, 50, 75, 100};
    MyNumbers[0] = 33; // Ändert den Wert des ersten Elements (25) in 33
    printf("%d\n", MyNumbers[0]);

    // Arrays loopen
    // Zählt alle Zahlen von der Array-Liste auf gibt sie aus
    int MyNumbers2[] = {25, 50, 75, 100};
    int i2;

    for (i2 = 0; i2 < 4; i2++) {
        printf("%d\n", MyNumbers2[i2]);
    }

    // Array größe bestimmen
    // Gibt die Größe des Arrays an
    int meinArray[4];

    // Elemente zum Array hinzufügen
    meinArray[0] = 25;
    meinArray[1] = 50;
    meinArray[2] = 75;
    meinArray[3] = 100;

    // Multi-Dimensional Arrays
    // Ein Multi-Dimensional Array ist ein Array, das mehrere Dimensionen hat.
    // Ein 2D Array ist ein Array, das mehrere Arrays enthält.
    // Ein 3D Array ist ein Array, das mehrere 2D Arrays enthält.
    // Ein 4D Array ist ein Array, das mehrere 3D Arrays enthält.
    int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};
    // Die erste Dimension ist [2], die zweite Dimension ist [3]
    // Die Arrays sind so aufgebaut:
    //          column 0  column 1  column 2
    // row 0        1         4         2
    // row 1        3         6         8
    printf("%d\n", matrix[0][2]); // Gibt den Wert der dritten Spalte (column 2) und der ersten Zeile (row 0) aus in diesen Fall: 2


    int matrix2[2][3] = { {1, 4, 2}, {3, 6, 8} };
    matrix2[0][0] = 9;

    printf("%d\n", matrix2[0][0]);  // Gibt den Wert der ersten Spalte (column 0) und der ersten Zeile (row 0) aus in diesen Fall: 9

    // 2D Arrays loopen
    // Zählt alle Zahlen von der 2D Array-Liste auf gibt sie aus
    int matrix3[2][3] = { {1, 4, 2}, {3, 6, 8} };

    int i3, j3;
    for (i3 = 0; i3 < 2; i3++) {
        for (j3 = 0; j3 < 3; j3++) {
            printf("%d\n", matrix[i3][j3]);
        }
    }

    // Strings
    // Ein String wird in C nicht wie in Java als ein Objekt behandelt, sondern als ein Array von Zeichen. Sprich man nutzt hierfür ein char-Array und nicht String s = "S";.
    // Wenn man die zweite Methode nutzt, um einen String auszugeben, muss man am Ende \0 schreiben damit C weiß dort ist das Ende.
    char greeting[] = "Hello World!";
    printf("%s\n", greeting); // Gibt den String aus
    // oder man kann es auch so machen:
    char greeting2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    printf("%s\n", greeting2); // Gibt den String aus

    // Strings verändern
    // Ändert den ersten Buchstaben des Strings
    char greeting3[] = "Hello World!";
    greeting3[0] = 'J';
    printf("%s\n", greeting3); // Gibt den String aus (Jello World!)

    // Gibt die Länge des Strings aus mit sizeof()
    char greetings4[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    char greetings5[] = "Hello World!";

    printf("%lu\n", sizeof(greetings4));   // Outputs 13
    printf("%lu\n", sizeof(greetings5));  // Outputs 13

    // Zum Fortfahren für später: https://www.w3schools.com/c/c_strings_esc.php Kapitel: Spezielle Zeichen in Strings

    // Strings mit speziellen Zeichen

    char txt[] = "We are the so-called \"Vikings\" from the north.";
    printf("%s\n", txt);

    char txt2[] = "It\'s alright.";
    printf("%s\n", txt2);

    // User Input
    int age;
    printf("Enter your age: ");
    scanf("%d", &age); // Speichert den Wert in der Variable age
    printf("You are %d years old.\n", age);

    // Speicheradresse // Memory Address
    // Gibt die Speicheradresse aus
    int myAge = 43;
    printf("%p\n", &myAge);

    // Pointers
    // Ein Pointer ist eine Variable, die die Speicheradresse eines anderen Variablen speichert.
    // Ein Pointer wird mit einem * gekennzeichnet.
    int* ptr = &myAge; // Speichert die Speicheradresse von myAge in ptr
    // Output the value of myAge (43)
    printf("%d\n", myAge);

    // Output the memory address of myAge
    printf("%p\n", &myAge);

    // Output the memory address of myAge with the pointer
    printf("%p\n", ptr);

    /*
        Erstellen Sie eine Zeigervariable mit dem Namen ptr, die auf eine int-Variable (myAge) zeigt. Beachten Sie,
        dass der Typ des Zeigers mit dem Typ der Variablen, mit der Sie arbeiten, übereinstimmen muss.
        Verwenden Sie den Operator &, um die Speicheradresse der Variable myAge zu speichern, und weisen Sie sie dem Zeiger zu.
        Jetzt enthält ptr den Wert der Speicheradresse von myAge.
     */

    // Dereferenzierung // Deference
    printf("%lu\n", *ptr); // Gibt den Wert der Speicheradresse aus

    // Function nutzen
    // Funktionen sind eine Sammlung von Anweisungen, die zusammen ausgeführt werden.
    // Funktionen können Parameter übergeben bekommen und können auch einen Rückgabewert haben.
    // Funktionen können auch ohne Rückgabewert sein.
    // Funktionen können auch ohne Parameter sein.
    // Funktionen können auch mehrere Parameter haben.
    // Funktionen können auch mehrere Rückgabewerte haben.
    // Funktionen können auch mehrere Parameter und mehrere Rückgabewerte haben.
    myFunction("Oliver", 18); // Ruft die Funktion myFunction auf

    int result = myFunction2(5, 3);
    printf("Result is: %d\n", result); // Ruft die Funktion myFunction2 auf und gibt den Rückgabewert aus

    // Rekursion
    int result2 = sum(10);
    printf("Result is: %d\n", result2);

    // Math Funktionen
    printf("%f\n", sqrt(64)); // Gibt die Wurzel aus

    /*
        Die Funktion ceil() rundet eine Zahl nach oben auf die nächste Ganzzahl,
        und die Methode floor() rundet eine Zahl nach unten auf die nächste Ganzzahl und gibt das Ergebnis zurück:

        abs(x)	Returns the absolute value of x
        acos(x)	Returns the arccosine of x
        asin(x)	Returns the arcsine of x
        atan(x)	Returns the arctangent of x
        cbrt(x)	Returns the cube root of x
        cos(x)	Returns the cosine of x
        exp(x)	Returns the value of Ex
        sin(x)	Returns the sine of x (x is in radians)
        tan(x)	Returns the tangent of an angle
     */

    return 0;
}

// Funktionen // Functions
// Eine Funktion ist ein Block von Code, der nur ausgeführt wird, wenn er aufgerufen wird.
void myFunction(char name[], int age) {
    printf("Hello %s. You are %lu years old.\n", name, age);
}

int myFunction2(int x, int y) {
    return x + y;
}

// Rekursion
// Nimmt die Zahl oben angegeben (sum(10)) und addiert sie mit der Zahl darunter (sum(9)) und so weiter bis die Zahl 1 erreicht ist.
int sum(int k) {
    if (k > 0) {
        return k + sum(k - 1);
    } else {
        return 0;
    }
}
