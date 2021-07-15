          void entrypoint_006_950() {
/*< 25>*/ 	start()
/*< 26>*/ 	switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          	  case 0:
/*< 27>*/ 		printf("Wuchernder Efeu kann als Ziel für den\n<y<Greifhaken>> verwendet werden. Damit\nkannst du dich von einem entfernen\nOrt daran klammern.")
          	  case 1:
          	}
          }

          void entrypoint_006_916() {
/*< 55>*/ 	start()
/*< 56>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*< 58>*/ 		printf("Du kannst jederzeit sehen, wo sich\nTerris Laden befindet, wenn du die\n<b<Karte>> öffnest. Läute an der <r<großen\nGlocke>>, um Zutritt zu erhalten.")
          	  case 1:
/*< 57>*/ 		printf("Um <b<Terris>> fliegenden Laden betreten\nzu können, musst du an der großen\nGlocke läuten, die daran befestigt ist.\n\nDir \x0E\x01\x12\x04\x00\x02scheint jedoch ein passendes <r<Item>>\nzu fehlen, mit dem du die Glocke aus\nder Entfernung zum Läuten bringen\nkannst.")
          	}
          }

          void entrypoint_006_900() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf("In der Umgebung des <b<Wolken>><b<horts\n>>schweben zahlreiche Eilande, auf\ndenen sich alte Ruinen befinden.\n\nEs besteht eine Wahrscheinlichkeit von\n80 %, dass dort Schätze zu finden sind.")
          }

          void entrypoint_006_918() {
/*< 32>*/ 	start()
/*< 33>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*< 35>*/ 		printf("Es besteht eine Wahrscheinlichkeit von\n95 %, dass unter der kleinen Hütte am\nFriedhof die Person namens <b<Morsego\n>>haust.")
/*< 36>*/ 		switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          		  case 0:
/*< 54>*/ 			printf("Der freundliche Dämon Morsego ist\ndurch die <y<Juwelen der Güte >>zum\nMenschen geworden.\n\nDie Wahrscheinlichkeit, dass nun die\nGerüchte, die sich um ihn ranken, bald\nvergessen sein werden, liegt bei 60 %.\n\nDie Wahrscheinlichkeit, dass sie jedoch\naufgrund seines weiterhin dämonisch\nwirkenden Gesichts bestehen bleiben,\nliegt bei 40 %.")
          		  case 1:
/*< 37>*/ 			printf("Morsego sammelt <y<Juwelen der Güte>>,\num ein Mensch zu werden.\n\n\nEs besteht eine Wahrscheinlichkeit von\n85 %, \x0E\x01\x12\x04\x00\x02dass es für dich von Vorteil sein\nwird, ihm dabei zu helfen.")
          		}
          	  case 1:
/*< 34>*/ 		printf("Solltest du dich für dieses Gerücht\ninteressieren, empfehle ich, die\n<b<Kürbisbar>> zu besuchen. Viele Leute\ntauschen dort Gerüchte aus.")
          	}
          }

          void entrypoint_006_902() {
          	start()
/*<  1>*/ 	switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          	  case 0:
/*<  3>*/ 		printf("Der Ritterschüler <b<Stru >>macht sich\nregelmäßig auf, um nach diesem Ort\nzu suchen...\n\nMan sagt, er habe vor Kurzem eine\nInsel in der <b<Sturmwolke >>entdeckt, auf\nder perfekte Lebensbedingungen für\nInsekten herrschen.")
          	  case 1:
/*<  2>*/ 		printf("Es scheint jedoch noch niemand den\nWeg zu diesem Ort gefunden zu haben.")
          	}
          }

          void entrypoint_006_955() {
/*< 42>*/ 	start()
/*< 43>*/ 	switch (story_flags[702 /* us: 805A9B22 0x04, jp: 805ACDA2 0x04 */]) {
          	  case 0:
/*< 49>*/ 		switch (random(3)) {
          		  case 0:
          			flw_44:
/*< 44>*/ 			printf("<b<Verschossene Pfeile>> können jederzeit\naufgesammelt und erneut eingesetzt\nwerden.")
          		  case 1:
          			goto flw_44
          		  case 2:
          			flw_45:
/*< 45>*/ 			printf("Du kannst dünne Baumstämme mit dem\nSchwert entzweischneiden. Triffst du\nsie an einer leuchtenden Stelle, erhältst\ndu vielleicht einen Rubin.")
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
/*<  7>*/ 			printf("Auf dieser Insel kann man mit ein\nwenig Geschick eine große Menge\nRubine gewinnen.\n\nIst deine Geldbörse jedoch bereits voll,\ngehen gewonnene Rubine verloren. Sei\nalso stets aufmerksam, was den Inhalt\ndeiner Geldbörse betrifft.")
          		  case 1:
/*<  9>*/ 			printf("Auf dieser Insel kann man mit ein\nwenig Geschick eine große Menge\nRubine gewinnen.\n\nIch gehe jedoch davon aus, dass zur\nTeilnahme an diesem Spiel der Einsatz\nvon Eigenkapital notwendig ist.")
          		}
          	  case 1:
/*<  6>*/ 		printf("Auf dieser Insel soll ein Ort entstehen,\nan dem man mit ein wenig Geschick\nsehr viele Rubine gewinnen kann.")
          	}
          }

          void entrypoint_006_940() {
/*< 50>*/ 	start()
/*< 51>*/ 	switch (story_flags[89 /* us: 805A9AEC 0x08, jp: 805ACD6C 0x08 */]) {
          	  case 0:
/*< 52>*/ 		printf("Ich kann die freigesetzte Energie der\n<r<Artefakte der Göttin>>, welche überall\nim Erdland verstreut sind, spüren,\nwenn sie in das Wolkenmeer aufsteigt.\nIch markiere die Stellen, an denen ich\ndie Energiewellen empfange, auf der\nKarte, mein \x0E\x01\x12\x04\x00\x02Gebieter.")
          	  case 1:
/*< 53>*/ 		printf("Im Erdland gibt es an manchen Orten\n<r<mysteriöse Kisten>>, die das Symbol der\nGöttin tragen.\n\nEs wird gesagt, sie seien irgendwie mit\nden Schatztruhen im Wolkenmeer und\nim <b<Wolkenhort >>verbunden, die sich\nnicht öffnen lassen. ")
          	}
          }

          void entrypoint_006_908() {
/*< 28>*/ 	start()
/*< 29>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*< 31>*/ 		printf("Zudem scheint er sich nachts nicht im\n<b<Wolkenhort >>aufzuhalten. Ich gehe\ndavon aus, dass er sich auf eines\nder umliegenden Eilande zurückzieht.\nDu kannst diesen Ort jedoch ausfindig\nmachen, wenn du <r<bis zum Einbruch der\nNacht in seinem Laden verweilst>>.")
          	  case 1:
/*< 30>*/ 		printf("Dir \x0E\x01\x12\x04\x00\x02scheint jedoch ein passendes <r<Item>>\nzu fehlen, mit dem du die Glocke aus\nder Entfernung zum Läuten bringen\nkannst.")
          	}
          }

          void entrypoint_006_943() {
/*< 12>*/ 	start()
/*< 47>*/ 	switch (story_flags[702 /* us: 805A9B22 0x04, jp: 805ACDA2 0x04 */]) {
          	  case 0:
/*< 48>*/ 		switch (random(3)) {
          		  case 0:
          			flw_16:
/*< 16>*/ 			printf("Kennst du die Geschichte des Kriegers,\nder einst während einer Schlacht eine\nMethode entwickelte, \x0E\x01\x12\x04\x00\x02um Pfeile zu\nsammeln?\n[1]Erzähl\nsie mir![2-]Kein\nInteresse.")
/*< 13>*/ 			switch (choice(2)) {
          			  case 0:
/*< 15>*/ 				printf("Der Krieger trug einen <b<Holzschild >>und\nnäherte sich einem Felsen, auf dem er\nzahlreiche Bogenschützen der Bokblins\nausgemacht hatte.\nEr wehrte die Pfeile der Bokblins mit\nseinem Schild ab und entfernte sich\nlangsam wieder von dem Felsen.\n\nNun musste er bloß noch die vielen\nPfeile, <r<die in seinem Schild steckten>>,\nherausziehen und sein Vorrat an\nPfeilen war wieder aufgefüllt.")
          				flw_14:
/*< 14>*/ 				printf("Auch du kannst auf diese Art und Weise\nan Pfeile gelangen, wenn du einen\nHolzschild trägst, \x0E\x01\x12\x04\x00\x02mein Gebieter.\n\nAchte jedoch auf deine <r<Schildanzeige>>.\nSie nimmt ab, wenn dein Schild von\neinem Pfeil getroffen wird.")
          			  case 1:
          				goto flw_14
          			}
          		  case 1:
          			goto flw_16
          		  case 2:
          			flw_46:
/*< 46>*/ 			printf("<b<Kleine Vogelfedern >>sind sehr nützlich\nbeim Verbessern von Items.\n\n\nDie Wahrscheinlichkeit, dass zum\nErlangen einer Feder ein bestimmtes\nWerkzeug notwendig ist, liegt meiner\nBerechnung zufolge bei 90 %.")
          		}
          	  case 1:
          		goto flw_46
          	}
          }

          void entrypoint_006_944() {
/*< 17>*/ 	start()
/*< 18>*/ 	switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          	  case 0:
/*< 19>*/ 		printf("Dank der <b<Wasserdrachenschuppe >>ist\nes dir jedoch nun möglich, dies zu tun.\n\n\nDie Wahrscheinlichkeit, dass du an\nbereits besuchten Orten nun neue\nWege entdecken kannst, liegt meiner\nSchätzung nach bei 50 %.")
          	  case 1:
/*< 20>*/ 		printf("Die <b<Wasserdrachenschuppe >>macht es\njedoch möglich, sich lange Zeit unter\nWasser fortzubewegen.")
          	}
          }

          void entrypoint_006_945() {
/*< 21>*/ 	start()
/*< 22>*/ 	switch (story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */]) {
          	  case 0:
/*< 23>*/ 		printf("Dank der <b<Feuerohrringe >>ist es dir nun\njedoch möglich, dich an solchen Orten\naufzuhalten.\n\nIch empfehle dir, Orte zu besuchen, die\ndu aufgrund der Hitze zuvor noch nicht\nbetreten konntest.")
          	  case 1:
/*< 24>*/ 		printf("Nur jemand, der die <b<Feuerohrringe\n>>besitzt, kann den hohen Temperaturen\nstandhalten, ohne sich zu verbrennen.")
          	}
          }

          void entrypoint_006_928() {
/*< 38>*/ 	start()
/*< 39>*/ 	switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          	  case 0:
/*< 41>*/ 		printf("Kommt man ihm zu nahe, kann es sein,\ndass man von Narishas Flossen verletzt\nwird, auch wenn er selbst gar nicht die\nAbsicht hegt, anzugreifen.")
          	  case 1:
/*< 40>*/ 		printf("Er wuchs von Geburt an stetig weiter\nund hat mittlerweile die Größe einer\nganzen Insel erreicht, wurde in letzter\nZeit jedoch nicht mehr gesehen.")
          	}
          }

