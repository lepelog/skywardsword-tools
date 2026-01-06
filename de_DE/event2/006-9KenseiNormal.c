          void entrypoint_006_950() {
/*< 25>*/ 	start()
/*< 26>*/ 	switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          	  case 0:
/*< 27>*/ 		printf(/* textboxtype: 2, unk: 0, line: 77 */ "Wuchernder Efeu kann als Ziel für den\n<color yellow<Greifhaken>coloroff> verwendet werden. Damit\nkannst du dich von einem entfernen\nOrt daran klammern.")
          	  case 1:
          	}
          }

          void entrypoint_006_916() {
/*< 55>*/ 	start()
/*< 56>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*< 58>*/ 		printf(/* textboxtype: 2, unk: 0, line: 24 */ "Du kannst jederzeit sehen, wo sich\nTerris Laden befindet, wenn du die\n<color blue<Karte>coloroff> öffnest. Läute an der <color red<großen\nGlocke>coloroff>, um Zutritt zu erhalten.")
          	  case 1:
/*< 57>*/ 		printf(/* textboxtype: 2, unk: 0, line: 25 */ "Um <color blue<Terris>coloroff> fliegenden Laden betreten\nzu können, musst du an der großen\nGlocke läuten, die daran befestigt ist.\n\nDir <0x10012:0x00000002>scheint jedoch ein passendes <color red<Item>coloroff>\nzu fehlen, mit dem du die Glocke aus\nder Entfernung zum Läuten bringen\nkannst.")
          	}
          }

          void entrypoint_006_900() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "In der Umgebung des <color blue<Wolken>coloroff><color blue<horts\n>coloroff>schweben zahlreiche Eilande, auf\ndenen sich alte Ruinen befinden.\n\nEs besteht eine Wahrscheinlichkeit von\n80 %, dass dort Schätze zu finden sind.")
          }

          void entrypoint_006_918() {
/*< 32>*/ 	start()
/*< 33>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*< 35>*/ 		printf(/* textboxtype: 2, unk: 0, line: 29 */ "Es besteht eine Wahrscheinlichkeit von\n95 %, dass unter der kleinen Hütte am\nFriedhof die Person namens <color blue<Morsego\n>coloroff>haust.")
/*< 36>*/ 		switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          		  case 0:
/*< 54>*/ 			printf(/* textboxtype: 2, unk: 0, line: 31 */ "Der freundliche Dämon Morsego ist\ndurch die <color yellow<Juwelen der Güte >coloroff>zum\nMenschen geworden.\n\nDie Wahrscheinlichkeit, dass nun die\nGerüchte, die sich um ihn ranken, bald\nvergessen sein werden, liegt bei 60 %.\n\nDie Wahrscheinlichkeit, dass sie jedoch\naufgrund seines weiterhin dämonisch\nwirkenden Gesichts bestehen bleiben,\nliegt bei 40 %.")
          		  case 1:
/*< 37>*/ 			printf(/* textboxtype: 2, unk: 0, line: 30 */ "Morsego sammelt <color yellow<Juwelen der Güte>coloroff>,\num ein Mensch zu werden.\n\n\nEs besteht eine Wahrscheinlichkeit von\n85 %, <0x10012:0x00000002>dass es für dich von Vorteil sein\nwird, ihm dabei zu helfen.")
          		}
          	  case 1:
/*< 34>*/ 		printf(/* textboxtype: 2, unk: 0, line: 28 */ "Solltest du dich für dieses Gerücht\ninteressieren, empfehle ich, die\n<color blue<Kürbisbar>coloroff> zu besuchen. Viele Leute\ntauschen dort Gerüchte aus.")
          	}
          }

          void entrypoint_006_902() {
          	start()
/*<  1>*/ 	switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          	  case 0:
/*<  3>*/ 		printf(/* textboxtype: 2, unk: 0, line: 4 */ "Der Ritterschüler <color blue<Stru >coloroff>macht sich\nregelmäßig auf, um nach diesem Ort\nzu suchen...\n\nMan sagt, er habe vor Kurzem eine\nInsel in der <color blue<Sturmwolke >coloroff>entdeckt, auf\nder perfekte Lebensbedingungen für\nInsekten herrschen.")
          	  case 1:
/*<  2>*/ 		printf(/* textboxtype: 2, unk: 0, line: 3 */ "Es scheint jedoch noch niemand den\nWeg zu diesem Ort gefunden zu haben.")
          	}
          }

          void entrypoint_006_955() {
/*< 42>*/ 	start()
/*< 43>*/ 	switch (story_flags[702 /* us: 805A9B22 0x04, jp: 805ACDA2 0x04 */]) {
          	  case 0:
/*< 49>*/ 		switch (random(3)) {
          		  case 0:
          			flw_44:
/*< 44>*/ 			printf(/* textboxtype: 2, unk: 0, line: 84 */ "<color blue<Verschossene Pfeile>coloroff> können jederzeit\naufgesammelt und erneut eingesetzt\nwerden.")
          		  case 1:
          			goto flw_44
          		  case 2:
          			flw_45:
/*< 45>*/ 			printf(/* textboxtype: 2, unk: 0, line: 83 */ "Du kannst dünne Baumstämme mit dem\nSchwert entzweischneiden. Triffst du\nsie an einer leuchtenden Stelle, erhältst\ndu vielleicht einen Rubin.")
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
/*<  7>*/ 			printf(/* textboxtype: 2, unk: 0, line: 8 */ "Auf dieser Insel kann man mit ein\nwenig Geschick eine große Menge\nRubine gewinnen.\n\nIst deine Geldbörse jedoch bereits voll,\ngehen gewonnene Rubine verloren. Sei\nalso stets aufmerksam, was den Inhalt\ndeiner Geldbörse betrifft.")
          		  case 1:
/*<  9>*/ 			printf(/* textboxtype: 2, unk: 0, line: 9 */ "Auf dieser Insel kann man mit ein\nwenig Geschick eine große Menge\nRubine gewinnen.\n\nIch gehe jedoch davon aus, dass zur\nTeilnahme an diesem Spiel der Einsatz\nvon Eigenkapital notwendig ist.")
          		}
          	  case 1:
/*<  6>*/ 		printf(/* textboxtype: 2, unk: 0, line: 7 */ "Auf dieser Insel soll ein Ort entstehen,\nan dem man mit ein wenig Geschick\nsehr viele Rubine gewinnen kann.")
          	}
          }

          void entrypoint_006_940() {
/*< 50>*/ 	start()
/*< 51>*/ 	switch (story_flags[89 /* us: 805A9AEC 0x08, jp: 805ACD6C 0x08 */]) {
          	  case 0:
/*< 52>*/ 		printf(/* textboxtype: 2, unk: 0, line: 58 */ "Ich kann die freigesetzte Energie der\n<color red<Artefakte der Göttin>coloroff>, welche überall\nim Erdland verstreut sind, spüren,\nwenn sie in das Wolkenmeer aufsteigt.\nIch markiere die Stellen, an denen ich\ndie Energiewellen empfange, auf der\nKarte, mein <0x10012:0x00000002>Gebieter.")
          	  case 1:
/*< 53>*/ 		printf(/* textboxtype: 2, unk: 0, line: 57 */ "Im Erdland gibt es an manchen Orten\n<color red<mysteriöse Kisten>coloroff>, die das Symbol der\nGöttin tragen.\n\nEs wird gesagt, sie seien irgendwie mit\nden Schatztruhen im Wolkenmeer und\nim <color blue<Wolkenhort >coloroff>verbunden, die sich\nnicht öffnen lassen. ")
          	}
          }

          void entrypoint_006_908() {
/*< 28>*/ 	start()
/*< 29>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*< 31>*/ 		printf(/* textboxtype: 2, unk: 0, line: 15 */ "Zudem scheint er sich nachts nicht im\n<color blue<Wolkenhort >coloroff>aufzuhalten. Ich gehe\ndavon aus, dass er sich auf eines\nder umliegenden Eilande zurückzieht.\nDu kannst diesen Ort jedoch ausfindig\nmachen, wenn du <color red<bis zum Einbruch der\nNacht in seinem Laden verweilst>coloroff>.")
          	  case 1:
/*< 30>*/ 		printf(/* textboxtype: 2, unk: 0, line: 14 */ "Dir <0x10012:0x00000002>scheint jedoch ein passendes <color red<Item>coloroff>\nzu fehlen, mit dem du die Glocke aus\nder Entfernung zum Läuten bringen\nkannst.")
          	}
          }

          void entrypoint_006_943() {
/*< 12>*/ 	start()
/*< 47>*/ 	switch (story_flags[702 /* us: 805A9B22 0x04, jp: 805ACDA2 0x04 */]) {
          	  case 0:
/*< 48>*/ 		switch (random(3)) {
          		  case 0:
          			flw_16:
/*< 16>*/ 			printf(/* textboxtype: 2, unk: 0, line: 63 */ "Kennst du die Geschichte des Kriegers,\nder einst während einer Schlacht eine\nMethode entwickelte, <0x10012:0x00000002>um Pfeile zu\nsammeln?\n[1-]Erzähl\nsie mir![2]Kein\nInteresse.")
/*< 13>*/ 			switch (choice(2)) {
          			  case 0:
/*< 15>*/ 				printf(/* textboxtype: 2, unk: 0, line: 64 */ "Der Krieger trug einen <color blue<Holzschild >coloroff>und\nnäherte sich einem Felsen, auf dem er\nzahlreiche Bogenschützen der Bokblins\nausgemacht hatte.\nEr wehrte die Pfeile der Bokblins mit\nseinem Schild ab und entfernte sich\nlangsam wieder von dem Felsen.\n\nNun musste er bloß noch die vielen\nPfeile, <color red<die in seinem Schild steckten>coloroff>,\nherausziehen und sein Vorrat an\nPfeilen war wieder aufgefüllt.")
          				flw_14:
/*< 14>*/ 				printf(/* textboxtype: 2, unk: 0, line: 65 */ "Auch du kannst auf diese Art und Weise\nan Pfeile gelangen, wenn du einen\nHolzschild trägst, <0x10012:0x00000002>mein Gebieter.\n\nAchte jedoch auf deine <color red<Schildanzeige>coloroff>.\nSie nimmt ab, wenn dein Schild von\neinem Pfeil getroffen wird.")
          			  case 1:
          				goto flw_14
          			}
          		  case 1:
          			goto flw_16
          		  case 2:
          			flw_46:
/*< 46>*/ 			printf(/* textboxtype: 2, unk: 0, line: 62 */ "<color blue<Kleine Vogelfedern >coloroff>sind sehr nützlich\nbeim Verbessern von Items.\n\n\nDie Wahrscheinlichkeit, dass zum\nErlangen einer Feder ein bestimmtes\nWerkzeug notwendig ist, liegt meiner\nBerechnung zufolge bei 90 %.")
          		}
          	  case 1:
          		goto flw_46
          	}
          }

          void entrypoint_006_944() {
/*< 17>*/ 	start()
/*< 18>*/ 	switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          	  case 0:
/*< 19>*/ 		printf(/* textboxtype: 2, unk: 0, line: 68 */ "Dank der <color blue<Wasserdrachenschuppe >coloroff>ist\nes dir jedoch nun möglich, dies zu tun.\n\n\nDie Wahrscheinlichkeit, dass du an\nbereits besuchten Orten nun neue\nWege entdecken kannst, liegt meiner\nSchätzung nach bei 50 %.")
          	  case 1:
/*< 20>*/ 		printf(/* textboxtype: 2, unk: 0, line: 67 */ "Die <color blue<Wasserdrachenschuppe >coloroff>macht es\njedoch möglich, sich lange Zeit unter\nWasser fortzubewegen.")
          	}
          }

          void entrypoint_006_945() {
/*< 21>*/ 	start()
/*< 22>*/ 	switch (story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */]) {
          	  case 0:
/*< 23>*/ 		printf(/* textboxtype: 2, unk: 0, line: 71 */ "Dank der <color blue<Feuerohrringe >coloroff>ist es dir nun\njedoch möglich, dich an solchen Orten\naufzuhalten.\n\nIch empfehle dir, Orte zu besuchen, die\ndu aufgrund der Hitze zuvor noch nicht\nbetreten konntest.")
          	  case 1:
/*< 24>*/ 		printf(/* textboxtype: 2, unk: 0, line: 70 */ "Nur jemand, der die <color blue<Feuerohrringe\n>coloroff>besitzt, kann den hohen Temperaturen\nstandhalten, ohne sich zu verbrennen.")
          	}
          }

          void entrypoint_006_928() {
/*< 38>*/ 	start()
/*< 39>*/ 	switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          	  case 0:
/*< 41>*/ 		printf(/* textboxtype: 2, unk: 0, line: 44 */ "Kommt man ihm zu nahe, kann es sein,\ndass man von Narishas Flossen verletzt\nwird, auch wenn er selbst gar nicht die\nAbsicht hegt, anzugreifen.")
          	  case 1:
/*< 40>*/ 		printf(/* textboxtype: 2, unk: 0, line: 43 */ "Er wuchs von Geburt an stetig weiter\nund hat mittlerweile die Größe einer\nganzen Insel erreicht, wurde in letzter\nZeit jedoch nicht mehr gesehen.")
          	}
          }

