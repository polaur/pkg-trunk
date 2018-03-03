# Repozytorium dla przygotowywania wersji kandydującej KF5

Wpierw kilka słów wprowadzenia.
Po polsku, bo jak na razie osoby uczestniczące w tym projekcie tym językiem posługują się natywnie.

*Założenia*
* Repozytorium winno być przygotowywane na pierwszą sobotę danego miesiąca (wówczas pojawia się tag w GIT KDE)
* Winno trafiać do jakiegoś nowego repozytorium o nazwie powiedzmy "testing"
* Po pojawieniu się oficjalnego wydania w repozytorium extra Archa, cała zawartość KF5-RC1 winna być z ww. repozytorium usuwana, a my pracujemy sobie w WIP nad kolejną edycją
* Wraz z wersją KF5-RC1 musimy również udostępniać bodaj 2 paczki z Plasma 5.x, które wymagają przebudowania na nowej wersji

*TODO*
* Musimy zrobić "instrukcję" budowy. W przypadku KF5 istotna jest 
kolejność. Jak na razie ułożone to jest w Tierach, jednakże oprócz bodaj 
Tier 1 i Tier 2, w których paczki mogą być budowane równolegle, w 
pozostałych występuje już kolejność budowania paczek. Nadto niektóre 
paczki z Tier 3 mogą być budowane już bodaj po Tier 1. Alternatywa to 
jakieś *pkgbase*, ale i to chyba nie zbuduje nam tego prawidłowo. Skrypt? 
Może. Jak na razie zrobiłem plik how2build.txt - proszę go przeglądnąć.
* Dodanie paczek wymagających przebudowy z Plasma 5. Prawdopodobnie nie istnieją żadne inne paczki, które wymagają przebudowy na podstawie nowego KF5, ale sprawa do rozeznania.
