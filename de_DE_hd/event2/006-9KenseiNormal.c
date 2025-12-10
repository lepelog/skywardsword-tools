          void entrypoint_006_950() {
/*< 25>*/ 	start()
/*< 26>*/ 	switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          	  case 0:
/*< 27>*/ 		printf(/* textboxtype: 0, unk: 0, line: 77 */ "Wuchernder Efeu kann als Ziel für den <color yellow<Greifhaken\n>coloroff>verwendet werden. Damit kannst du dich von einem\nentfernen Ort daran klammern.")
          	  case 1:
          	}
          }

          void entrypoint_006_916() {
/*< 55>*/ 	start()
/*< 56>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*< 58>*/ 		printf(/* textboxtype: 2, unk: 0, line: 24 */ "Du kannst jederzeit sehen, wo sich Terris Laden\nbefindet, wenn du die <color blue<Karte>coloroff> öffnest. Läute an der\n<color red<großen Glocke>coloroff>, um Zutritt zu erhalten.")
          	  case 1:
/*< 57>*/ 		printf(/* textboxtype: 0, unk: 2, line: 25 */ "Um <color blue<Terris>coloroff> fliegenden Laden betreten zu können,\nmusst du an der großen Glocke läuten, die daran\nbefestigt ist.\n\nDir <0x10012:0x00000002>scheint jedoch ein passendes <color red<Item >coloroff>zu fehlen,\nmit dem du die Glocke aus der Entfernung zum\nLäuten bringen kannst.")
          	}
          }

          void entrypoint_006_900() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "In der Umgebung des <color blue<Wolkenhorts >coloroff>schweben\nzahlreiche Eilande, auf denen sich alte Ruinen\nbefinden.\n\nEs besteht eine Wahrscheinlichkeit von 80 %,\ndass dort Schätze zu finden sind.")
          }

          void entrypoint_006_918() {
/*< 32>*/ 	start()
/*< 33>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*< 35>*/ 		printf(/* textboxtype: 0, unk: 0, line: 29 */ "Es besteht eine Wahrscheinlichkeit von 95 %,\ndass unter der kleinen Hütte am Friedhof die\nPerson namens <color blue<Morsego >coloroff>haust.")
/*< 36>*/ 		switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          		  case 0:
/*< 54>*/ 			printf(/* textboxtype: 0, unk: 2, line: 31 */ "Der freundliche Dämon Morsego ist durch die\n<color yellow<Juwelen der Güte >coloroff>zum Menschen geworden.\n\n\nDie Wahrscheinlichkeit, dass nun die Gerüchte,\ndie sich um ihn ranken, bald vergessen sein werden,\nliegt bei 60 %.\n\nDie Wahrscheinlichkeit, dass sie jedoch aufgrund\nseines weiterhin dämonisch wirkenden Gesichts\nbestehen bleiben, liegt bei 40 %.")
          		  case 1:
/*< 37>*/ 			printf(/* textboxtype: 2, unk: 0, line: 30 */ "Morsego sammelt <color yellow<Juwelen der Güte>coloroff>, um ein Mensch\nzu werden.\n\n\nEs besteht eine Wahrscheinlichkeit von 85 %, <0x10012:0x00000002>dass es\nfür dich von Vorteil sein wird, ihm dabei zu helfen.")
          		}
          	  case 1:
/*< 34>*/ 		printf(/* textboxtype: 0, unk: 2, line: 28 */ "Solltest du dich für dieses Gerücht interessieren,\nempfehle ich, die <color blue<Kürbisbar>coloroff> zu besuchen. Viele Leute\ntauschen dort Gerüchte aus.")
          	}
          }

          void entrypoint_006_902() {
          	start()
/*<  1>*/ 	switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          	  case 0:
/*<  3>*/ 		printf(/* textboxtype: 0, unk: 2, line: 4 */ "Der Ritterschüler <color blue<Stru >coloroff>macht sich regelmäßig auf,\num nach diesem Ort zu suchen...\n\n\nMan sagt, er habe vor Kurzem eine Insel in\nder <color blue<Sturmwolke >coloroff>entdeckt, auf der perfekte\nLebensbedingungen für Insekten herrschen.")
          	  case 1:
/*<  2>*/ 		printf(/* textboxtype: 2, unk: 0, line: 3 */ "Es scheint jedoch noch niemand den Weg zu diesem\nOrt gefunden zu haben.")
          	}
          }

          void entrypoint_006_955() {
/*< 42>*/ 	start()
/*< 43>*/ 	switch (story_flags[702 /* us: 805A9B22 0x04, jp: 805ACDA2 0x04 */]) {
          	  case 0:
/*< 49>*/ 		switch (random(3)) {
          		  case 0:
          			flw_44:
/*< 44>*/ 			printf(/* textboxtype: 2, unk: 0, line: 84 */ "<color blue<Verschossene Pfeile>coloroff> können jederzeit aufgesammelt\nund erneut eingesetzt werden.")
          		  case 1:
          			goto flw_44
          		  case 2:
          			flw_45:
/*< 45>*/ 			printf(/* textboxtype: 0, unk: 0, line: 83 */ "Du kannst dünne Baumstämme mit dem Schwert\nentzweischneiden. Triffst du sie an einer leuchtenden\nStelle, erhältst du vielleicht einen Rubin.")
          		}
          	  case 1:
          		goto flw_45
          	}
          }

          void entrypoint_006_904() {
/*<  4>*/ 	start()
/*<  5>*/ 	switch (story_flags[398 /* us: 805A9B0E 0x01, jp: 805ACD8E 0x01 */]) {
          	  case 0:
/*<  8>*/ 		switch (has_rupees(20)) {
          		  case 0:
/*<  7>*/ 			printf(/* textboxtype: 0, unk: 0, line: 8 */ "Auf dieser Insel kann man mit ein wenig Geschick\neine große Menge Rubine gewinnen.\n\n\nIst deine Geldbörse jedoch bereits voll,\ngehen gewonnene Rubine verloren. Sei also\nstets aufmerksam, was den Inhalt deiner\nGeldbörse betrifft.")
          		  case 1:
/*<  9>*/ 			printf(/* textboxtype: 2, unk: 0, line: 9 */ "Auf dieser Insel kann man mit ein wenig Geschick\neine große Menge Rubine gewinnen.\n\n\nIch gehe jedoch davon aus, dass zur Teilnahme\nan diesem Spiel der Einsatz von Eigenkapital\nnotwendig ist.")
          		}
          	  case 1:
/*<  6>*/ 		printf(/* textboxtype: 0, unk: 2, line: 7 */ "Auf dieser Insel soll ein Ort entstehen, an dem\nman mit ein wenig Geschick sehr viele Rubine\ngewinnen kann.")
          	}
          }

          void entrypoint_006_940() {
/*< 50>*/ 	start()
/*< 51>*/ 	switch (story_flags[89 /* us: 805A9AEC 0x08, jp: 805ACD6C 0x08 */]) {
          	  case 0:
/*< 52>*/ 		printf(/* textboxtype: 0, unk: 2, line: 58 */ "Ich kann die freigesetzte Energie der <color red<Artefakte der\nGöttin>coloroff>, welche überall im Erdland verstreut sind,\nspüren, wenn sie in das Wolkenmeer aufsteigt.\n\nIch markiere die Stellen, an denen ich die\nEnergiewellen empfange, auf der Karte,\nmein <0x10012:0x00000002>Gebieter.")
          	  case 1:
/*< 53>*/ 		printf(/* textboxtype: 2, unk: 0, line: 57 */ "Im Erdland gibt es an manchen Orten <color red<mysteriöse\nKisten>coloroff>, die das Symbol der Göttin tragen.\n\n\nEs wird gesagt, sie seien irgendwie mit den\nSchatztruhen im Wolkenmeer und im <color blue<Wolkenhort\n>coloroff>verbunden, die sich nicht öffnen lassen.")
          	}
          }

          void entrypoint_006_908() {
/*< 28>*/ 	start()
/*< 29>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*< 31>*/ 		printf(/* textboxtype: 2, unk: 0, line: 15 */ "Zudem scheint er sich nachts nicht im <color blue<Wolkenhort\n>coloroff>aufzuhalten. Ich gehe davon aus, dass er sich auf\neines der umliegenden Eilande zurückzieht.\n\nDu kannst diesen Ort jedoch ausfindig machen,\nwenn du <color red<bis zum Einbruch der Nacht in seinem\nLaden verweilst>coloroff>.")
          	  case 1:
/*< 30>*/ 		printf(/* textboxtype: 0, unk: 0, line: 14 */ "Dir <0x10012:0x00000002>scheint jedoch ein passendes <color red<Item >coloroff>zu fehlen,\nmit dem du die Glocke aus der Entfernung zum\nLäuten bringen kannst.")
          	}
          }

          void entrypoint_006_943() {
/*< 12>*/ 	start()
/*< 47>*/ 	switch (story_flags[702 /* us: 805A9B22 0x04, jp: 805ACDA2 0x04 */]) {
          	  case 0:
/*< 48>*/ 		switch (random(3)) {
          		  case 0:
          			flw_16:
/*< 16>*/ 			printf(/* textboxtype: 2, unk: 0, line: 63 */ "Kennst du die Geschichte des Kriegers, der einst\nwährend einer Schlacht eine Methode entwickelte,\n<0x10012:0x00000002>um Pfeile zu sammeln?\n[1-]Erzähl\nsie mir![2]Kein\nInteresse.")
/*< 13>*/ 			switch (choice(2)) {
          			  case 0:
/*< 15>*/ 				printf(/* textboxtype: 0, unk: 2, line: 64 */ "Der Krieger trug einen <color blue<Holzschild >coloroff>und näherte sich\neinem Felsen, auf dem er zahlreiche Bogenschützen\nder Bokblins ausgemacht hatte.\n\nEr wehrte die Pfeile der Bokblins mit seinem Schild\nab und entfernte sich langsam wieder von dem Felsen.\n\n\nNun musste er bloß noch die vielen Pfeile, <color red<die in\nseinem Schild steckten>coloroff>, herausziehen und sein Vorrat\nan Pfeilen war wieder aufgefüllt.")
          				flw_14:
/*< 14>*/ 				printf(/* textboxtype: 0, unk: 0, line: 65 */ "Auch du kannst auf diese Art und Weise an Pfeile\ngelangen, wenn du einen Holzschild trägst,\n<0x10012:0x00000002>mein Gebieter.\n\nAchte jedoch auf deine <color red<Schildanzeige>coloroff>. Sie nimmt ab,\nwenn dein Schild von einem Pfeil getroffen wird.")
          			  case 1:
          				goto flw_14
          			}
          		  case 1:
          			goto flw_16
          		  case 2:
          			flw_46:
/*< 46>*/ 			printf(/* textboxtype: 0, unk: 0, line: 62 */ "<color blue<Kleine Vogelfedern >coloroff>sind sehr nützlich beim\nVerbessern von Items.\n\n\nDie Wahrscheinlichkeit, dass zum Erlangen einer\nFeder ein bestimmtes Werkzeug notwendig ist,\nliegt meiner Berechnung zufolge bei 90 %.")
          		}
          	  case 1:
          		goto flw_46
          	}
          }

          void entrypoint_006_944() {
/*< 17>*/ 	start()
/*< 18>*/ 	switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          	  case 0:
/*< 19>*/ 		printf(/* textboxtype: 0, unk: 0, line: 68 */ "Dank der <color blue<Wasserdrachenschuppe >coloroff>ist es dir jedoch nun\nmöglich, dies zu tun.\n\n\nDie Wahrscheinlichkeit, dass du an bereits besuchten\nOrten nun neue Wege entdecken kannst, liegt meiner\nSchätzung nach bei 50 %.")
          	  case 1:
/*< 20>*/ 		printf(/* textboxtype: 0, unk: 2, line: 67 */ "Die <color blue<Wasserdrachenschuppe >coloroff>macht es jedoch möglich,\nsich lange Zeit unter Wasser fortzubewegen.")
          	}
          }

          void entrypoint_006_945() {
/*< 21>*/ 	start()
/*< 22>*/ 	switch (story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */]) {
          	  case 0:
/*< 23>*/ 		printf(/* textboxtype: 0, unk: 0, line: 71 */ "Dank der <color blue<Feuerohrringe >coloroff>ist es dir nun jedoch möglich,\ndich an solchen Orten aufzuhalten.\n\n\nIch empfehle dir, Orte zu besuchen, die du aufgrund\nder Hitze zuvor noch nicht betreten konntest.")
          	  case 1:
/*< 24>*/ 		printf(/* textboxtype: 0, unk: 2, line: 70 */ "Nur jemand, der die <color blue<Feuerohrringe >coloroff>besitzt,\nkann den hohen Temperaturen standhalten,\nohne sich zu verbrennen.")
          	}
          }

          void entrypoint_006_928() {
/*< 38>*/ 	start()
/*< 39>*/ 	switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          	  case 0:
/*< 41>*/ 		printf(/* textboxtype: 0, unk: 0, line: 44 */ "Kommt man ihm zu nahe, kann es sein, dass man von\nNarishas Flossen verletzt wird, auch wenn er selbst\ngar nicht die Absicht hegt, anzugreifen.")
          	  case 1:
/*< 40>*/ 		printf(/* textboxtype: 0, unk: 2, line: 43 */ "Er wuchs von Geburt an stetig weiter und hat\nmittlerweile die Größe einer ganzen Insel erreicht,\nwurde in letzter Zeit jedoch nicht mehr gesehen.")
          	}
          }

