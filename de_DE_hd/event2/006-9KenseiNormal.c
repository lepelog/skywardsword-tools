          void entrypoint_006_950() {
/*< 25>*/ 	start()
/*< 26>*/ 	switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          	  case 0:
/*< 27>*/ 		printf("Wuchernder Efeu kann als Ziel für den <y<Greifhaken\n>>verwendet werden. Damit kannst du dich von einem\nentfernen Ort daran klammern.")
          	  case 1:
          	}
          }

          void entrypoint_006_916() {
/*< 55>*/ 	start()
/*< 56>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*< 58>*/ 		printf("Du kannst jederzeit sehen, wo sich Terris Laden\nbefindet, wenn du die <b<Karte>> öffnest. Läute an der\n<r<großen Glocke>>, um Zutritt zu erhalten.")
          	  case 1:
/*< 57>*/ 		printf("Um <b<Terris>> fliegenden Laden betreten zu können,\nmusst du an der großen Glocke läuten, die daran\nbefestigt ist.\n\nDir \x0E\x01\x12\x04\x00\x02scheint jedoch ein passendes <r<Item >>zu fehlen,\nmit dem du die Glocke aus der Entfernung zum\nLäuten bringen kannst.")
          	}
          }

          void entrypoint_006_900() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf("In der Umgebung des <b<Wolkenhorts >>schweben\nzahlreiche Eilande, auf denen sich alte Ruinen\nbefinden.\n\nEs besteht eine Wahrscheinlichkeit von 80 %,\ndass dort Schätze zu finden sind.")
          }

          void entrypoint_006_918() {
/*< 32>*/ 	start()
/*< 33>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*< 35>*/ 		printf("Es besteht eine Wahrscheinlichkeit von 95 %,\ndass unter der kleinen Hütte am Friedhof die\nPerson namens <b<Morsego >>haust.")
/*< 36>*/ 		switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          		  case 0:
/*< 54>*/ 			printf("Der freundliche Dämon Morsego ist durch die\n<y<Juwelen der Güte >>zum Menschen geworden.\n\n\nDie Wahrscheinlichkeit, dass nun die Gerüchte,\ndie sich um ihn ranken, bald vergessen sein werden,\nliegt bei 60 %.\n\nDie Wahrscheinlichkeit, dass sie jedoch aufgrund\nseines weiterhin dämonisch wirkenden Gesichts\nbestehen bleiben, liegt bei 40 %.")
          		  case 1:
/*< 37>*/ 			printf("Morsego sammelt <y<Juwelen der Güte>>, um ein Mensch\nzu werden.\n\n\nEs besteht eine Wahrscheinlichkeit von 85 %, \x0E\x01\x12\x04\x00\x02dass es\nfür dich von Vorteil sein wird, ihm dabei zu helfen.")
          		}
          	  case 1:
/*< 34>*/ 		printf("Solltest du dich für dieses Gerücht interessieren,\nempfehle ich, die <b<Kürbisbar>> zu besuchen. Viele Leute\ntauschen dort Gerüchte aus.")
          	}
          }

          void entrypoint_006_902() {
          	start()
/*<  1>*/ 	switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          	  case 0:
/*<  3>*/ 		printf("Der Ritterschüler <b<Stru >>macht sich regelmäßig auf,\num nach diesem Ort zu suchen...\n\n\nMan sagt, er habe vor Kurzem eine Insel in\nder <b<Sturmwolke >>entdeckt, auf der perfekte\nLebensbedingungen für Insekten herrschen.")
          	  case 1:
/*<  2>*/ 		printf("Es scheint jedoch noch niemand den Weg zu diesem\nOrt gefunden zu haben.")
          	}
          }

          void entrypoint_006_955() {
/*< 42>*/ 	start()
/*< 43>*/ 	switch (story_flags[702 /* us: 805A9B22 0x04, jp: 805ACDA2 0x04 */]) {
          	  case 0:
/*< 49>*/ 		switch (random(3)) {
          		  case 0:
          			flw_44:
/*< 44>*/ 			printf("<b<Verschossene Pfeile>> können jederzeit aufgesammelt\nund erneut eingesetzt werden.")
          		  case 1:
          			goto flw_44
          		  case 2:
          			flw_45:
/*< 45>*/ 			printf("Du kannst dünne Baumstämme mit dem Schwert\nentzweischneiden. Triffst du sie an einer leuchtenden\nStelle, erhältst du vielleicht einen Rubin.")
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
/*<  7>*/ 			printf("Auf dieser Insel kann man mit ein wenig Geschick\neine große Menge Rubine gewinnen.\n\n\nIst deine Geldbörse jedoch bereits voll,\ngehen gewonnene Rubine verloren. Sei also\nstets aufmerksam, was den Inhalt deiner\nGeldbörse betrifft.")
          		  case 1:
/*<  9>*/ 			printf("Auf dieser Insel kann man mit ein wenig Geschick\neine große Menge Rubine gewinnen.\n\n\nIch gehe jedoch davon aus, dass zur Teilnahme\nan diesem Spiel der Einsatz von Eigenkapital\nnotwendig ist.")
          		}
          	  case 1:
/*<  6>*/ 		printf("Auf dieser Insel soll ein Ort entstehen, an dem\nman mit ein wenig Geschick sehr viele Rubine\ngewinnen kann.")
          	}
          }

          void entrypoint_006_940() {
/*< 50>*/ 	start()
/*< 51>*/ 	switch (story_flags[89 /* us: 805A9AEC 0x08, jp: 805ACD6C 0x08 */]) {
          	  case 0:
/*< 52>*/ 		printf("Ich kann die freigesetzte Energie der <r<Artefakte der\nGöttin>>, welche überall im Erdland verstreut sind,\nspüren, wenn sie in das Wolkenmeer aufsteigt.\n\nIch markiere die Stellen, an denen ich die\nEnergiewellen empfange, auf der Karte,\nmein \x0E\x01\x12\x04\x00\x02Gebieter.")
          	  case 1:
/*< 53>*/ 		printf("Im Erdland gibt es an manchen Orten <r<mysteriöse\nKisten>>, die das Symbol der Göttin tragen.\n\n\nEs wird gesagt, sie seien irgendwie mit den\nSchatztruhen im Wolkenmeer und im <b<Wolkenhort\n>>verbunden, die sich nicht öffnen lassen.")
          	}
          }

          void entrypoint_006_908() {
/*< 28>*/ 	start()
/*< 29>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*< 31>*/ 		printf("Zudem scheint er sich nachts nicht im <b<Wolkenhort\n>>aufzuhalten. Ich gehe davon aus, dass er sich auf\neines der umliegenden Eilande zurückzieht.\n\nDu kannst diesen Ort jedoch ausfindig machen,\nwenn du <r<bis zum Einbruch der Nacht in seinem\nLaden verweilst>>.")
          	  case 1:
/*< 30>*/ 		printf("Dir \x0E\x01\x12\x04\x00\x02scheint jedoch ein passendes <r<Item >>zu fehlen,\nmit dem du die Glocke aus der Entfernung zum\nLäuten bringen kannst.")
          	}
          }

          void entrypoint_006_943() {
/*< 12>*/ 	start()
/*< 47>*/ 	switch (story_flags[702 /* us: 805A9B22 0x04, jp: 805ACDA2 0x04 */]) {
          	  case 0:
/*< 48>*/ 		switch (random(3)) {
          		  case 0:
          			flw_16:
/*< 16>*/ 			printf("Kennst du die Geschichte des Kriegers, der einst\nwährend einer Schlacht eine Methode entwickelte,\n\x0E\x01\x12\x04\x00\x02um Pfeile zu sammeln?\n[1]Erzähl\nsie mir![2-]Kein\nInteresse.")
/*< 13>*/ 			switch (choice(2)) {
          			  case 0:
/*< 15>*/ 				printf("Der Krieger trug einen <b<Holzschild >>und näherte sich\neinem Felsen, auf dem er zahlreiche Bogenschützen\nder Bokblins ausgemacht hatte.\n\nEr wehrte die Pfeile der Bokblins mit seinem Schild\nab und entfernte sich langsam wieder von dem Felsen.\n\n\nNun musste er bloß noch die vielen Pfeile, <r<die in\nseinem Schild steckten>>, herausziehen und sein Vorrat\nan Pfeilen war wieder aufgefüllt.")
          				flw_14:
/*< 14>*/ 				printf("Auch du kannst auf diese Art und Weise an Pfeile\ngelangen, wenn du einen Holzschild trägst,\n\x0E\x01\x12\x04\x00\x02mein Gebieter.\n\nAchte jedoch auf deine <r<Schildanzeige>>. Sie nimmt ab,\nwenn dein Schild von einem Pfeil getroffen wird.")
          			  case 1:
          				goto flw_14
          			}
          		  case 1:
          			goto flw_16
          		  case 2:
          			flw_46:
/*< 46>*/ 			printf("<b<Kleine Vogelfedern >>sind sehr nützlich beim\nVerbessern von Items.\n\n\nDie Wahrscheinlichkeit, dass zum Erlangen einer\nFeder ein bestimmtes Werkzeug notwendig ist,\nliegt meiner Berechnung zufolge bei 90 %.")
          		}
          	  case 1:
          		goto flw_46
          	}
          }

          void entrypoint_006_944() {
/*< 17>*/ 	start()
/*< 18>*/ 	switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          	  case 0:
/*< 19>*/ 		printf("Dank der <b<Wasserdrachenschuppe >>ist es dir jedoch nun\nmöglich, dies zu tun.\n\n\nDie Wahrscheinlichkeit, dass du an bereits besuchten\nOrten nun neue Wege entdecken kannst, liegt meiner\nSchätzung nach bei 50 %.")
          	  case 1:
/*< 20>*/ 		printf("Die <b<Wasserdrachenschuppe >>macht es jedoch möglich,\nsich lange Zeit unter Wasser fortzubewegen.")
          	}
          }

          void entrypoint_006_945() {
/*< 21>*/ 	start()
/*< 22>*/ 	switch (story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */]) {
          	  case 0:
/*< 23>*/ 		printf("Dank der <b<Feuerohrringe >>ist es dir nun jedoch möglich,\ndich an solchen Orten aufzuhalten.\n\n\nIch empfehle dir, Orte zu besuchen, die du aufgrund\nder Hitze zuvor noch nicht betreten konntest.")
          	  case 1:
/*< 24>*/ 		printf("Nur jemand, der die <b<Feuerohrringe >>besitzt,\nkann den hohen Temperaturen standhalten,\nohne sich zu verbrennen.")
          	}
          }

          void entrypoint_006_928() {
/*< 38>*/ 	start()
/*< 39>*/ 	switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          	  case 0:
/*< 41>*/ 		printf("Kommt man ihm zu nahe, kann es sein, dass man von\nNarishas Flossen verletzt wird, auch wenn er selbst\ngar nicht die Absicht hegt, anzugreifen.")
          	  case 1:
/*< 40>*/ 		printf("Er wuchs von Geburt an stetig weiter und hat\nmittlerweile die Größe einer ganzen Insel erreicht,\nwurde in letzter Zeit jedoch nicht mehr gesehen.")
          	}
          }

