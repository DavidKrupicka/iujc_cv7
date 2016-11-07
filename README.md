# iujc_cv7
Sedmé cvičení předmětu IUJC (7.11.2016)

##Příklad 1

Napište program, který: 
1. Načte první řádek ze souboru data.csv (hlavička) a zjistí počet záznamů 
2. Alokuje pole řetězců 
3. V cyklu (do konce souboru) 
a. Načte řádek ze souboru 
b. V cyklu provádí parsování jednotlivých záznamů/řetězců (fce strtok) 
i. Pokud už je v poli řetězců na i-té pozici nějaký řetězce, provede jeho dealokaci 
ii. Alokuje a uloží nový řetězec 
c. Vypíše všechny řetězce na obrazovku 
4. Provede dealokaci všech řetězců a pole řetězců 
5. Pomocí _CrtDumpMemoryLeaks(); zkontrolujte úplnou dealokaci 

##Příklad 2
Napište program, který: 
1. dynamicky alokuje a naplní pole1 celých čísel 
2. uloží do binárního souboru data.bin velikost pole a následně celé pole (pole jako celý blok najednou) 
3. dále otevře soubor data.bin, načte velikost pole a na základě této hodnoty alokuje pole2 
4. ze souboru načte hodnoty do pole2 

##Příklad 3
Na STAGu je soubor cv8data.bin, který obsahuje celá čísla (int). Napište funkci, která: 
1. zjistí počet záznamů 
2. načte a vypíše 3. prvek ze souboru 
 posunete se v soboru na 3. pozici (fseek) 
 přčete hodnotu ze souboru 
