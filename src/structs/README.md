# Beispiele und Aufgaben: Structs

Dieses Verzeichnis enthät ein Struct `Game`, das dafür gedacht ist,
eine Spielpaarung zu repräsentieren, wie sie in einem Turnier vorkommen könnte.

Das `Game`-Struct hat vier Felder: Zwei Strings `home` und `guest`
sowie zwei `int`-Felder `home_score` und `guest_score`.

Es werden drei Methoden bereitgestellt, die auf einem `Game`-Objekt aufgerufen werden können:

* `points_home`: Gibt die Punkte des Heimteams zurück (3 für Sieg, 1 für Unentschieden, 0 für Niederlage).
* `points_guest`: Gibt die Punkte des Gastteams zurück (3 für Sieg, 1 für Unentschieden, 0 für Niederlage).
* `result`: Gibt das Ergebnis des Spiels als String zurück.

Außerdem gibt es eine Reihe freier Funktionen, die mit einer Liste von `Game`-Objekten arbeiten:

* `count_wins`: Zählt die Anzahl der Spiele, die ein bestimmtes Team gewonnen hat.
* `count_draws`: Zählt die Anzahl der Spiele, die für ein Team unentschieden ausgegangen sind.
* `add_points`: Addiert die Punkte eines Teams auf.
* `goal_diff`: Berechnet die Tordifferenz eines Teams.
* `table`: Erstellt eine Liste der Teams, sortiert nach Punkten und Tordifferenz.

## Aufgaben

* Implementieren Sie die oben bechriebenen Funktionen.
  Einige Funktionen sind Beispiele und bereits implementiert.
* Die Funktionen bauen teilweise aufeinander auf.
  Daher ist es empfehlenswert, sich an die obige Reihenfolge zu halten.
* Bis auf die letzte Funktion befinden sich alle Funktionen jeweils in einer eigenen
  Datei, in der auch jeweils Tests vorhanden sind.
* Die letzte Funktion `table` bildet eine Ausnahme:
  Hier gibt es eine Reihe an Hilfsfunktionen, die in der gleichen Datei
  vorgegeben sind, für die es aber keine Tests gibt.
  * Sie müssen die Hilfsfunktionen nicht nutzen, aber sie können Hilfreiche sein.
  * Falls Sie die Hilfsfunktionen nutzen, ist es empfehlenswert, eigene Tests dafür zu schreiben.
