# Übungsaufgaben zu C++

In diesem Verzeichnis finden Sie eine Reihe von Übungsaufgaben zu C++.

## Struktur

Die Aufgaben sind unterhalb des Ordners `src` in Unterverzeichnissen organisiert.
Es gibt folgende Aufgaben-Verzeichnisse:

### `greet`: Ein einzelnes Hallo-Welt-Beispiel

Dieses Verzeichnis enthält keine Aufgaben, nur ein Beispiel zur Anschauung.

### `loops`: Beispiele und Aufgaben zu Schleifen

Dies sind Grundlagen-Aufgaben zu Schleifen.
Der Umgang mit Schleifen ist grundlegend.
Falls Sie dieses Verzeichnis überspringen,
können Sie es auch (im Lösungsbranch) als Referenz verwenden.

Bei den Schleifen-Aufgaben geht es darum, Schleifen zu schreiben, die Vektoren liefern.
Insofern ist das auch eine erste Übung zu Vektoren.

### `vectors`: Beispiele und Aufgaben zu Vektoren

Vektoren sind eine der wichtigsten Datenstrukturen in C++.
In diesem Verzeichnis finden Sie Beispiele und Aufgaben zu Vektoren,
bei denen es darum geht, Vektoren zu untersuchen, z.B. Dinge darin zu zählen.

### `structs`: Beispiele und Aufgaben zu Structs

In diesem Verzeichnis wird ein einfaches Struct `Game` vorgegeben,
das eine Spielpaarung repräsentiert.
Die Aufgaben dazu bauen aufeinander auf und haben das Ziel,
eine einfache Tabellenberechnung für eine Liga bzw. einTurnier zu implementieren.

## Anmerkungen / Disclaimer

Die Aufgaben in diesem Repo sind mit dem Ziel entworfen,
dass sie möglichst einfach zu bearbeiten sind.
Deswegen ist z.B. jede Aufgabe in einer eigenen Datei,
sogar im Fall des `Game`-Structs, wo es mehrere Funktionen gibt.

Dies keine Struktur, die man in einem realistischen Projekt verwenden würde.
Hier würde man den Code in Modulen organisieren, die zusammengehörige Funktionen enthalten.
Jedes Modul kann aber mehrere Funktionen enthalten.
Insbesondere Implementierungen von Structs/Klassen würde man in der Regel in einer Datei zusammenfassen.
Außerdem würde man auch konsequent Header-Dateien verwenden.

* **Dieses Projekt sollte daher nicht als allgemeine Kopiervorlage für C++-Projekte verwendet werden.**
* Es ist aber durchaus als Anschauung geeignet, um einzelne technische Details nachzuschauen,
  bspw. wie man mit CMake ein C++-Projekt aufsetzt, das Tests enthält.
