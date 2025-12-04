          void entrypoint_006_600() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "Dies ist ein <color blue<Lemurin bei Tag>coloroff>.<entrypoint_6_601>")
/*<  3>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 21, 'param4': 2, 'param5': 0}) {
          	  case 0:
/*<  2>*/ 		printf(/* textboxtype: 2, unk: 1, line: 185 */ "Du hast diesen Gegnertypus insgesamt\n<numeric arg0 1>-mal besiegt. Du verhältst dich im\nKampf mit diesem Gegnertypus meiner\nAnalyse zufolge <string arg0>.")
          	  case 1:
          	}
          }

          void entrypoint_006_652() {
/*< 88>*/ 	start()
/*< 90>*/ 	printf(/* textboxtype: 2, unk: 0, line: 95 */ "Ich habe keine genauen Daten zu\ndieser Bestie.\n\n\nIch kann jedoch feststellen, dass ihre\nAura mächtiger ist als die der Monster,\ndenen du begegnet bist.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 91>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_239:
/*<239>*/ 		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
          		  case 0:
          			flw_89:
/*< 89>*/ 			printf(/* textboxtype: 2, unk: 0, line: 96 */ "Auf dem Kopf der Bestie befindet sich\nder <color red<Siegelstein>coloroff>, der zuvor am Grund\ndes<color blue< Siegelhains >coloroff>platziert war.\n\nDu kannst dem Monster Schaden\nzufügen, indem du diesen Siegelstein\nin seinen Kopf rammst.\n\nGreife erst<0x10012:0x00000002> seine Füße an, um den\nVerbannten zu Fall zu bringen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 93>*/ 			switch (choice(2)) {
          			  case 0:
/*< 94>*/ 				printf(/* textboxtype: 2, unk: 0, line: 97 */ "Du kannst seine Bewegungen stoppen,\nindem du alle Zehen an seinen Füßen\nabschlägst.\n\nVersuche, mit Hilfe der Windströme\nvor die Bestie zu gelangen. Ich rate\ndavon ab, die Bestie zu Fuß zu\nverfolgen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 95>*/ 				switch (choice(2)) {
          				  case 0:
/*< 96>*/ 					printf(/* textboxtype: 2, unk: 0, line: 98 */ "Wenn du dich gut vor seinen Zehen\npositioniert hast, nutze am besten die\n<color green<Wirbelattacke>coloroff>, um mit einem Schlag\nmöglichst viel Schaden anzurichten.\nEine andere Möglichkeit ist es, den\nVerbannten aus sicherer Entfernung\nheraus mit <color yellow<Bomben >coloroff>anzugreifen.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<256>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_89
          			  case 1:
/*< 92>*/ 				printf(/* textboxtype: 2, unk: 0, line: 13 */ "Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_653() {
/*< 97>*/ 	start()
/*< 99>*/ 	printf(/* textboxtype: 2, unk: 0, line: 100 */ "Ich habe keine genauen Daten zu\ndieser Bestie.\n\n\nIch stelle jedoch fest, dass die Bestie\nnun über etwas verfügt, das wie zwei\nHände aussieht.\n\nDas Monster scheint nun noch stärker\nzu sein als bei der letzten Begegnung\nmit ihm.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<100>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_240:
/*<240>*/ 		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
          		  case 0:
          			flw_98:
/*< 98>*/ 			printf(/* textboxtype: 2, unk: 0, line: 101 */ "Ich rate dir, dasselbe Angriffsmuster\nwie beim letzten Kampf anzuwenden.\n\n\nEs ist auch möglich, die Finger der\nBestie abzuschneiden, doch ich gehe\ndavon aus, dass daraus nur geringer\nVorteil entsteht.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<102>*/ 			switch (choice(2)) {
          			  case 0:
/*<103>*/ 				printf(/* textboxtype: 2, unk: 0, line: 102 */ "Die Wahrscheinlichkeit, dass <color blue<Bados\n>coloroff>Apparatur der Bestie großen Schaden\nzufügen kann, liegt bei 100 %.\n\nEs ist möglich, die Bewegungen der\nBestie damit kurzzeitig aufzuhalten,\num Zeit für den Angriff zu gewinnen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<104>*/ 				switch (choice(2)) {
          				  case 0:
/*<105>*/ 					printf(/* textboxtype: 2, unk: 0, line: 103 */ "Neige (ControlStick), um die Position von <color blue<Bados\n>coloroff>Katapult zu ändern.\n\n\nSollte sich die Bestie in einem toten\nWinkel befinden, ändere die Position\nvon Bados Katapult.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<257>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_98
          			  case 1:
/*<101>*/ 				printf(/* textboxtype: 2, unk: 0, line: 13 */ "Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_601() {
/*<294>*/ 	start()
/*<297>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<295>*/ 		printf(/* textboxtype: 2, unk: 0, line: 2 */ "Ein kleines Tier, das im <color blue<Wolkenhort>coloroff>\nlebt. Nun, da sich <color blue<Morsego>coloroff> in einen\nMenschen verwandelt hat, wird es\nnachts nicht mehr aggressiv.")
          	  case 1:
/*<296>*/ 		printf(/* textboxtype: 2, unk: 0, line: 1 */ "Dieses kleine Tier, das im <color blue<Wolkenhort>coloroff>\nlebt, ist tagsüber stets friedlich und\nzutraulich, nachts jedoch eine wilde\nBestie.")
          	}
          }

          void entrypoint_006_654() {
/*<106>*/ 	start()
/*<108>*/ 	printf(/* textboxtype: 2, unk: 0, line: 105 */ "Dieses Wesen fungiert als Seelengefäß\nfür den <color blue<Todbringer>coloroff>. Genauere Daten\nsind mir nicht bekannt.\n\nAn seinem Kopf befindet sich ein\nschwanzflossenähnlicher Teil, der\nzuvor nicht vorhanden war.\n\nIch empfehle dir, <color blue<Bados>coloroff> Katapult\nzu deinem Vorteil einzusetzen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<109>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_241:
/*<241>*/ 		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
          		  case 0:
          			flw_107:
/*<107>*/ 			printf(/* textboxtype: 2, unk: 0, line: 106 */ "Ich rate dir, dasselbe Angriffsmuster\nwie beim letzten Kampf anzuwenden.\n\n\nEs ist auch möglich, die Finger oder\nZehen der Bestie abzuschneiden.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<111>*/ 			switch (choice(2)) {
          			  case 0:
/*<112>*/ 				printf(/* textboxtype: 2, unk: 0, line: 107 */ "Solltest du die Bestie zu Fall gebracht\nhaben, ist es möglich, dass ihr Körper\nden Weg zum <color red<Siegelstein>coloroff> blockiert.\n\nSpringe in diesem Fall eine Ebene nach\nunten und nutze einen der Windströme,\num zu seinem Kopf zu gelangen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<113>*/ 				switch (choice(2)) {
          				  case 0:
/*<114>*/ 					printf(/* textboxtype: 2, unk: 0, line: 108 */ "Aufgrund der enormen Kraft der\nBestie reicht dein Schwert allein\nnicht aus, um sie zu besiegen.\n\n<color red<Steige selbst >coloroff>in Bados Katapult und\nbereite dem Monster ein Ende, mein\n<0x10012:0x00000002>Gebieter.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<258>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_107
          			  case 1:
/*<110>*/ 				printf(/* textboxtype: 2, unk: 0, line: 13 */ "Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_689() {
/*<124>*/ 	start()
/*<126>*/ 	printf(/* textboxtype: 2, unk: 0, line: 169 */ "Verglichen mit der letzten Begegnung\nmit ihm hat sich seine Erscheinung zu\n90 % verändert.\n\nZudem geht eine schwarze Aura von\nihm aus, die seinen gesamten Körper\numhüllt.\n\nEr ist verwundet und hat nun seine\nKampfstrategie verändert.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<127>*/ 	switch (choice(2)) {
          	  case 0:
/*<243>*/ 		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
          		  case 0:
          			flw_125:
/*<125>*/ 			printf(/* textboxtype: 2, unk: 0, line: 170 */ "Die <color red<Wunde in seiner Brust >coloroff>aus dem\nvorherigen Kampf ist Ghirahims\nSchwachstelle.\n\nDie Wahrscheinlichkeit, dass er alle\nAngriffe auf diese Stelle abwehrt,\nliegt im normalen Zustand bei 100 %.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<129>*/ 			switch (choice(2)) {
          			  case 0:
/*<130>*/ 				printf(/* textboxtype: 2, unk: 0, line: 171 */ "Es ist möglich, Ghirahims Schwert, das\ndie <color red<Wunde in seiner Brust >coloroff>schützt, zur\nSeite zu schlagen, <0x10012:0x00000002>Gebieter.\n\nIch empfehle, den richtigen Moment\nabzuwarten und dann unmittelbar zum\nAngriff überzugehen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<131>*/ 				switch (choice(2)) {
          				  case 0:
/*<132>*/ 					printf(/* textboxtype: 2, unk: 0, line: 172 */ "Meiner Analyse zufolge ist es nicht\nmöglich, Ghirahims Schwert mit nur\neinem einzigen Angriff zur Seite zu\nschlagen.\nIch empfehle, <color red<mehrere Angriffe in\ndieselbe Richtung >coloroff>auszuführen, um\nsein Schwert zur Seite zu schlagen.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<254>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_125
          			  case 1:
/*<128>*/ 				printf(/* textboxtype: 2, unk: 0, line: 13 */ "Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_602() {
/*<298>*/ 	start()
/*<299>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<301>*/ 		printf(/* textboxtype: 2, unk: 0, line: 2 */ "Ein kleines Tier, das im <color blue<Wolkenhort>coloroff>\nlebt. Nun, da sich <color blue<Morsego>coloroff> in einen\nMenschen verwandelt hat, wird es\nnachts nicht mehr aggressiv.")
          	  case 1:
/*<300>*/ 		printf(/* textboxtype: 2, unk: 0, line: 4 */ "Tagsüber ist dieses Tier zutraulich und\nfriedlich, nachts wird es jedoch zur\nwilden Bestie. Lasse dich nicht von\nseinem Äußeren täuschen.")
          	}
          }

          void entrypoint_006_655() {
/*<144>*/ 	start()
/*<145>*/ 	printf(/* textboxtype: 2, unk: 0, line: 110 */ "Dieses Wesen gilt als die Quelle des\nBösen, das die Zeit überdauert\nund bis heute fortbestanden hat.\n\nUralte Legenden besagen, dass seine\nErscheinung je nach Betrachter stark\nvariiert und die Zeit sein Aussehen\nmitgeprägt hat.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<146>*/ 	switch (choice(2)) {
          	  case 0:
/*<234>*/ 		printf(/* textboxtype: 2, unk: 0, line: 124 */ "In dieser vom Todbringer beherrschten\nWelt steht der <color red<Himmelsstrahl >coloroff>nicht zur\nVerfügung.[1-]Mehr\nDetails[2]Keine\nDetails")
/*<235>*/ 		switch (choice(2)) {
          		  case 0:
/*<148>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 124}) {
          			  case 0:
/*<260>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_151:
/*<151>*/ 					printf(/* textboxtype: 2, unk: 0, line: 112 */ "Die Chance, dass einmalige Angriffe\ndem Todbringer Schaden zufügen\nkönnen, liegt bei 0 %, <0x10012:0x00000002>Gebieter.\n\nUm die starke Abwehr des Todbringers\ndurchbrechen zu können, musst du ihn\n<color red<mehrmals aus jeweils verschiedenen\nRichtungen angreifen>coloroff>.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<152>*/ 					switch (choice(2)) {
          					  case 0:
/*<153>*/ 						printf(/* textboxtype: 2, unk: 0, line: 113 */ "Meiner Analyse zufolge kann der\nTodbringer angegriffen werden,\nsobald er sein Schwert in die Höhe hält.\n\nAngriffe, die zu nahe am Schwert des\nTodbringers ausgeführt werden, wehrt\ner jedoch zu 100 % ab. <pause 15>Sei vorsichtig.")
          					  case 1:
          					}
          				  case 1:
/*<149>*/ 					printf(/* textboxtype: 2, unk: 0, line: 13 */ "Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
          				}
          			  case 1:
          				flw_147:
/*<147>*/ 				printf(/* textboxtype: 2, unk: 0, line: 111 */ "Ich stelle fest, dass einzig und allein\ndas <color yellow<Master-Schwert>coloroff> dem Todbringer\nSchaden zufügen kann.\n\nAlle anderen Waffen haben offenbar\nkeinerlei Wirkung.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<150>*/ 				switch (choice(2)) {
          				  case 0:
          					goto flw_151
          				  case 1:
          				}
          			  case 2:
          				goto flw_147
          			  case 3:
          				goto flw_147
          			}
          		  case 1:
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_690() {
/*<133>*/ 	start()
/*<134>*/ 	printf(/* textboxtype: 2, unk: 0, line: 174 */ "Verglichen mit der letzten Begegnung\nmit ihm hat sich seine Erscheinung zu\n90 % verändert.\n\nZudem geht eine schwarze Aura von\nihm aus, die seinen gesamten Körper\numhüllt.\n\nIch stelle fest, dass er eine bisher\nunbekannte Waffe einsetzt.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<135>*/ 	switch (choice(2)) {
          	  case 0:
/*<244>*/ 		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
          		  case 0:
          			flw_137:
/*<137>*/ 			printf(/* textboxtype: 2, unk: 0, line: 176 */ "Meiner Analyse zufolge kannst du\nGhirahims Schwert mit gezielten\nAngriffen <color red<zerbrechen>coloroff>, <0x10012:0x00000002>Gebieter.\n\nGhirahim nutzt seine Magie, um das\nSchwert zu erzeugen.\n\n\nDa Ghirahim stark verwundet ist,\nsollte sein Schwert nicht mehr allzu\nwiderstandsfähig sein.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<138>*/ 			switch (choice(2)) {
          			  case 0:
/*<139>*/ 				printf(/* textboxtype: 2, unk: 0, line: 177 */ "Vom Zentrum von Ghirahims Schwert\ngeht dieselbe Energie aus wie von\nseinem <color red<Herzkern>coloroff>.\n\nSollte es dir gelingen, den <color red<Kern seines\nSchwerts >coloroff>zu zerstören, kannst du auch\ndas Schwert selbst zerstören.\n\nAchte auf die Bewegungen seines\nSchwerts und greife wiederholt\n<color red<dieselbe Stelle >coloroff>an.")
          			  case 1:
          			}
          		  case 1:
/*<255>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_137
          			  case 1:
/*<136>*/ 				printf(/* textboxtype: 2, unk: 0, line: 13 */ "Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_656() {
/*<161>*/ 	start()
/*<163>*/ 	printf(/* textboxtype: 2, unk: 0, line: 110 */ "Dieses Wesen gilt als die Quelle des\nBösen, das die Zeit überdauert\nund bis heute fortbestanden hat.\n\nUralte Legenden besagen, dass seine\nErscheinung je nach Betrachter stark\nvariiert und die Zeit sein Aussehen\nmitgeprägt hat.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<162>*/ 	switch (choice(2)) {
          	  case 0:
/*<236>*/ 		printf(/* textboxtype: 2, unk: 0, line: 124 */ "In dieser vom Todbringer beherrschten\nWelt steht der <color red<Himmelsstrahl >coloroff>nicht zur\nVerfügung.[1-]Mehr\nDetails[2]Keine\nDetails")
/*<224>*/ 		scene_flags[10 'Sealed Grounds'][120 /* 0xE 01 */] = true;
/*<237>*/ 		switch (choice(2)) {
          		  case 0:
/*<155>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 132}) {
          			  case 0:
/*<259>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_154:
/*<154>*/ 					printf(/* textboxtype: 2, unk: 0, line: 120 */ "Es ist möglich, ebenfalls auf die\nelektrische Energie des Todbringers\nzurückzugreifen, <0x10012:0x00000002>mein Gebieter.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<157>*/ 					switch (choice(2)) {
          					  case 0:
/*<158>*/ 						printf(/* textboxtype: 2, unk: 0, line: 121 */ "Du kannst die Blitzenergie in deinem\n<color yellow<Master-Schwert>coloroff> konservieren und\n<color red<anstelle des Himmelsstrahls >coloroff>einsetzen.\n\nWenn du in der Ferne einen Blitz siehst\nund der Himmel leuchtet, hebe dein\nSchwert gen Himmel.\n\nAchte jedoch darauf, dass du dabei\nnicht gelähmt wirst, da dies zur Folge\nhätte, dass du dem Todbringer\nschutzlos ausgeliefert bist.")
          					  case 1:
          					}
          				  case 1:
/*<159>*/ 					printf(/* textboxtype: 2, unk: 0, line: 119 */ "Der Todbringer kann sein Schwert\nmit elektrischer Energie aufladen,\ndie er im Kampf einsetzt.\n\nTriffst du es im aufgeladenen Zustand,\nlähmt die Elektrizität deinen Körper,\n<0x10012:0x00000002>mein Gebieter.<pause 15>\n\nAchte beim Angriff auf den richtigen\nZeitpunkt und sei höchst vorsichtig.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<160>*/ 					switch (choice(2)) {
          					  case 0:
/*<156>*/ 						printf(/* textboxtype: 2, unk: 0, line: 13 */ "Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
          					  case 1:
          					}
          				}
          			  case 1:
          				goto flw_154
          			  case 2:
          				goto flw_154
          			  case 3:
          				goto flw_154
          			}
          		  case 1:
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_605() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 2, unk: 0, line: 9 */ "Dieser gewaltige Parasit, den man auch\n„Riesenparasit“ nennt, hat <color blue<Narisha\n>coloroff>befallen.\n\nEr kontrolliert seinen Wirt vollständig\nund steuert ihn nach seinem Willen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<  6>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_242:
/*<242>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<  8>*/ 			printf(/* textboxtype: 2, unk: 0, line: 10 */ "Meiner Analyse zufolge kannst du die\nSchleimbälle, die <color blue<Baras Baras >coloroff>auf dich\nausspuckt, mit deinem Schwert\n<color red<zurückschleudern>coloroff>, <0x10012:0x00000002>Gebieter.\nBeobachte seine Bewegungen, um ihn\nmit den Schleimbällen zu treffen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<  9>*/ 			switch (choice(2)) {
          			  case 0:
/*< 10>*/ 				printf(/* textboxtype: 2, unk: 0, line: 11 */ "Seine Schwachstelle ist der <color red<Augapfel\n>coloroff>im Zentrum.\n\n\nEr schützt ihn mit seinen <color red<Flossen>coloroff>, doch\nAngriffe schaden ihm nur, wenn sein\n<color red<Augapfel>coloroff> ungeschützt ist.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 11>*/ 				switch (choice(2)) {
          				  case 0:
/*< 12>*/ 					printf(/* textboxtype: 2, unk: 0, line: 12 */ "Achte auf den Winkel deines Schlages,\nwenn du die Schleimbälle von Baras\nBaras auf ihn zurückschleuderst.\n\nSchwinge dein Schwert von links oder\nrechts,<pause 15> oder führe einen Vertikalschlag\naus, um ihn frontal zu treffen.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<  7>*/ 			printf(/* textboxtype: 2, unk: 0, line: 13 */ "Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_657() {
/*<164>*/ 	start()
/*<165>*/ 	printf(/* textboxtype: 2, unk: 0, line: 187 */ "Ich habe dir etwas zu berichten,\n<0x10012:0x0000000b>Gebieter <heroname>.\n\n\nMeine Analyse des Angriffsmusters\ndieses Gegners ist abgeschlossen.\n\n\nVisiere den Gegner durch Drücken\nvon (Z) an und rufe mich, indem du\n(v) drückst, um mehr über diesen\nGegner zu erfahren.<0x10011:0x07cd><0x10011:0x09cd>\nMöchtest du dies nun tun?[1-]Ja[2]Nein")
/*<166>*/ 	story_flags[772 /* us: 805A9B2A 0x10, jp: 805ACDAA 0x10 */] = true;
/*<167>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_69:
/*< 69>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*< 56>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 46}) {
          			  case 0:
/*<250>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_53:
/*< 53>*/ 					printf(/* textboxtype: 2, unk: 0, line: 76 */ "Meiner Analyse zufolge reiht Ghirahim\ndie Dolche, die er auf dich abfeuert, in\nunterschiedlichen Formationen an.\n\nEs ist also möglich, sie alle mit einem\neinzigen gezielten Schlag wieder auf\nihn zurückzuschleudern.\n\nIch schätze dies jedoch als sehr riskant\nein.[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 58>*/ 					switch (choice(2)) {
          					  case 0:
/*< 59>*/ 						printf(/* textboxtype: 2, unk: 0, line: 77 */ "Ghirahim beherrscht die Kunst der\nTeleportation.\n\n\nMeiner Analyse zufolge harrt er jedoch\ndirekt nach der Teleportation stets für\neinen kurzen Moment lang aus.\n\nDies ist eine sehr gute Gelegenheit, ihn\nanzugreifen. Achte dabei jedoch auf\ndas Schwert, das er zu seinem Schutz\nbereithält.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 60>*/ 						switch (choice(2)) {
          						  case 0:
/*< 61>*/ 							printf(/* textboxtype: 2, unk: 0, line: 78 */ "Ghirahim wird versuchen, deinem\nAngriff seitlich auszuweichen und\neinen Gegenangriff auszuführen,\n<0x10012:0x00000002>mein Gebieter.\nIn diesem Fall musst du versuchen,\nsofort <color red<in die Richtung zu schlagen>coloroff>,\naus der Ghirahim dich angreift.\n\n<0x10012:0x00000002>Gebieter, achte stets auf Ghirahims\nKörperhaltung vor dem Ausweichen,\num zu erahnen, in welche Richtung\ner ausweicht.\nWenn du Probleme mit dem Timing\nhast, versuche Ghirahim mit einer\n<color green<Wirbelattacke>coloroff> Schaden zuzufügen.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<140>*/ 					printf(/* textboxtype: 2, unk: 0, line: 75 */ "Ich stelle fest, dass Ghirahim seine\nKampfstrategie im Laufe des Kampfes\ngeändert hat.\n\nIch gehe davon aus, dass dies aufgrund\ndes Schadens, den er erlitten hat,\ngeschehen ist.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<141>*/ 					switch (choice(2)) {
          					  case 0:
/*< 57>*/ 						printf(/* textboxtype: 2, unk: 0, line: 13 */ "Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
          					  case 1:
          					}
          				}
          			  case 1:
          				goto flw_53
          			  case 2:
          				goto flw_53
          			  case 3:
          				goto flw_53
          			}
          		  case 1:
/*< 63>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 54}) {
          			  case 0:
/*<249>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_62:
/*< 62>*/ 					printf(/* textboxtype: 2, unk: 0, line: 72 */ "Er scheint sehr überzeugt von seiner\nStärke zu sein. <0x10012:0x00000002>Achte jedoch auf seine\n<color red<rechte Hand>coloroff>, mit der er versucht, dein\nSchwert festzuhalten, <0x10012:0x00000002>Gebieter.\nGhirahim beobachtet, <color red<wie du dein\nSchwert hältst >coloroff>und bereitet sich so\nauf deinen Angriff vor.\n\nIch empfehle dir, ihn zu täuschen und\naus der entgegengesetzten Richtung\nanzugreifen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 65>*/ 					switch (choice(2)) {
          					  case 0:
/*< 66>*/ 						printf(/* textboxtype: 2, unk: 0, line: 73 */ "Hält er dein Schwert fest, achte auf die\n<color red<Stellung von Ghirahims Fingern >coloroff>und\nschwinge dein Schwert sofort in die\n<color red<entgegengesetzte Richtung>coloroff>.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 67>*/ 						switch (choice(2)) {
          						  case 0:
/*< 68>*/ 							printf(/* textboxtype: 2, unk: 0, line: 74 */ "Die Finger, mit denen Ghirahim dein\nSchwert festhält, zeigen meiner Daten\nzufolge stets nach oben, <0x10012:0x00000001>mein Gebieter.\n\nDie Wahrscheinlichkeit, dass du seinem\nBlock durch einen <color red<Schwertstreich nach\noben >coloroff>entgehen kannst, liegt bei 100 %.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<284>*/ 					printf(/* textboxtype: 2, unk: 0, line: 72 */ "Er scheint sehr überzeugt von seiner\nStärke zu sein. <0x10012:0x00000002>Achte jedoch auf seine\n<color red<rechte Hand>coloroff>, mit der er versucht, dein\nSchwert festzuhalten, <0x10012:0x00000002>Gebieter.\nGhirahim beobachtet, <color red<wie du dein\nSchwert hältst >coloroff>und bereitet sich so\nauf deinen Angriff vor.\n\nIch empfehle dir, ihn zu täuschen und\naus der entgegengesetzten Richtung\nanzugreifen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<285>*/ 					switch (choice(2)) {
          					  case 0:
/*< 64>*/ 						printf(/* textboxtype: 2, unk: 0, line: 13 */ "Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
          					  case 1:
          					}
          				}
          			  case 1:
          				goto flw_62
          			  case 2:
          				goto flw_62
          			  case 3:
          				goto flw_62
          			}
          		}
          	  case 1:
/*<168>*/ 		printf(/* textboxtype: 2, unk: 0, line: 189 */ "Ich habe verstanden, <0x10012:0x00000005>Gebieter. Rufe\nmich, wenn du das Ergebnis meiner\nAnalyse erfahren möchtest.")
          	}
          }

          void entrypoint_006_658() {
/*<169>*/ 	start()
/*<170>*/ 	printf(/* textboxtype: 2, unk: 0, line: 187 */ "Ich habe dir etwas zu berichten,\n<0x10012:0x0000000b>Gebieter <heroname>.\n\n\nMeine Analyse des Angriffsmusters\ndieses Gegners ist abgeschlossen.\n\n\nVisiere den Gegner durch Drücken\nvon (Z) an und rufe mich, indem du\n(v) drückst, um mehr über diesen\nGegner zu erfahren.<0x10011:0x07cd><0x10011:0x09cd>\nMöchtest du dies nun tun?[1-]Ja[2]Nein")
/*<171>*/ 	story_flags[773 /* us: 805A9B2A 0x20, jp: 805ACDAA 0x20 */] = true;
/*<172>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_231:
/*<231>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
          			flw_34:
/*< 34>*/ 			printf(/* textboxtype: 2, unk: 0, line: 135 */ "Die Wahrscheinlichkeit, seinen von\nFelsen überzogenen Körper mit dem\nSchwert zu verletzen, liegt bei 0 %.\n\nNutze etwas, das eine höhere\nZerstörungskraft besitzt.[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 38>*/ 			switch (choice(2)) {
          			  case 0:
/*< 39>*/ 				printf(/* textboxtype: 2, unk: 0, line: 136 */ "Schluckt Beradama eine <color yellow<Bombe>coloroff>, so\nwird er mit einer Wahrscheinlichkeit\nvon 100 % explodieren.\n\nExplosionen, die nur seine Außenhülle\ntreffen, schüren bloß seinen Zorn.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 40>*/ 				switch (choice(2)) {
          				  case 0:
/*< 41>*/ 					printf(/* textboxtype: 2, unk: 0, line: 137 */ "Meiner Analyse zufolge können die\nFelsen auf Beradamas Körper von\nInnen heraus weggesprengt werden.\n\nVersuche, <color red<eine Bombe in seinen\nSchlund zu werfen>coloroff>, wenn er Luft\nholt, um einen Glutball abzufeuern.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<247>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_34
          			  case 1:
/*< 37>*/ 				printf(/* textboxtype: 2, unk: 0, line: 13 */ "Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
          			}
          		}
          	  case 1:
/*<173>*/ 		printf(/* textboxtype: 2, unk: 0, line: 189 */ "Ich habe verstanden, <0x10012:0x00000005>Gebieter. Rufe\nmich, wenn du das Ergebnis meiner\nAnalyse erfahren möchtest.")
          	}
          }

          void entrypoint_006_659() {
/*<174>*/ 	start()
/*<175>*/ 	printf(/* textboxtype: 2, unk: 0, line: 187 */ "Ich habe dir etwas zu berichten,\n<0x10012:0x0000000b>Gebieter <heroname>.\n\n\nMeine Analyse des Angriffsmusters\ndieses Gegners ist abgeschlossen.\n\n\nVisiere den Gegner durch Drücken\nvon (Z) an und rufe mich, indem du\n(v) drückst, um mehr über diesen\nGegner zu erfahren.<0x10011:0x07cd><0x10011:0x09cd>\nMöchtest du dies nun tun?[1-]Ja[2]Nein")
/*<176>*/ 	story_flags[774 /* us: 805A9B2A 0x40, jp: 805ACDAA 0x40 */] = true;
/*<177>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_17:
/*< 17>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 10}) {
          		  case 0:
/*<245>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				flw_14:
/*< 14>*/ 				printf(/* textboxtype: 2, unk: 0, line: 25 */ "Seine großen Scheren sind seine\n<color red<Schwachpunkte>coloroff>, zugleich jedoch\nauch seine gefährlichsten Waffen.\n\nAchte auf die Neigung seiner Scheren,\num ihm im richtigen Moment Schaden\nzuzufügen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 19>*/ 				switch (choice(2)) {
          				  case 0:
/*< 20>*/ 					printf(/* textboxtype: 2, unk: 0, line: 26 */ "Sollte Moldoghad verwundet werden,\nzieht er sich zurück und vergräbt sich\nim Sand.\n\nIn diesem Zustand wird er versuchen,\ndich aus seinem Versteck heraus mit\ndem Schwanz zu attackieren.\n\nDieser Angriff hat eine Gefahrenrate\nvon 85 %.\n\n\nDu kannst den Sand, unter dem er sich\nversteckt, <color red<wegpusten>coloroff>, um Moldoghad\naus seinem Versteck hervorzulocken.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 21>*/ 					switch (choice(2)) {
          					  case 0:
/*< 22>*/ 						printf(/* textboxtype: 2, unk: 0, line: 27 */ "Meiner Analyse zufolge entblößt er\nseinen wahren Schwachpunkt, das\n<color red<zentrale Auge>coloroff>, sobald seine Scheren\nzerstört sind.\nDas <color red<Auge>coloroff> ist jedoch von einer harten\nPanzerschicht umgeben. Schläge von\nder Seite oder von oben sind meinen\nDaten zufolge wirkungslos.")
          					  case 1:
          					}
          				  case 1:
          				}
          			  case 1:
/*< 18>*/ 				printf(/* textboxtype: 2, unk: 0, line: 13 */ "Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
          			}
          		  case 1:
          			goto flw_14
          		  case 2:
          			goto flw_14
          		  case 3:
          			goto flw_14
          		}
          	  case 1:
/*<178>*/ 		printf(/* textboxtype: 2, unk: 0, line: 189 */ "Ich habe verstanden, <0x10012:0x00000005>Gebieter. Rufe\nmich, wenn du das Ergebnis meiner\nAnalyse erfahren möchtest.")
          	}
          }

          void entrypoint_006_677() {
/*< 42>*/ 	start()
/*< 44>*/ 	printf(/* textboxtype: 2, unk: 0, line: 150 */ "Sein Beiname „Uraltes Meeresgrauen“\nlässt darauf schließen, dass Daidagos\neinst der Herrscher über die Gezeiten\nwar.\nSeine dicken <color red<Tentakel>coloroff> können zwar\ndurchtrennt werden, heilen sich jedoch\nnach kurzer Zeit von selbst.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 45>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_268:
/*<268>*/ 		switch (zone_temp_flags[20 /* 0x3 10 */]) {
          		  case 0:
/*<262>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 226}) {
          			  case 0:
/*<269>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_261:
/*<261>*/ 					printf(/* textboxtype: 2, unk: 0, line: 154 */ "Um Daidagos' <color red<Auge>coloroff> zu erreichen, ist es\nnotwendig, die zahlreichen Tentakel zu\ndurchtrennen, mit denen er dich\nattackiert.\nMeiner Analyse zufolge sind die\nTentakel an ihrer Spitze am leichtesten\nzu durchtrennen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<264>*/ 					switch (choice(2)) {
          					  case 0:
/*<265>*/ 						printf(/* textboxtype: 2, unk: 0, line: 155 */ "Daidagos attackiert dich mit seinen\nzahlreichen Tentakeln in sehr kurzen\nZeitabständen.\n\nEs wäre gefährlich zu versuchen, jedes\nder Tentakel einzeln zu durchtrennen.\n\n\nGreife unentwegt an und versuche, mit\ndeinen Schwertschlägen so viele wie\nmöglich zur gleichen Zeit zu treffen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<266>*/ 						switch (choice(2)) {
          						  case 0:
/*<267>*/ 							printf(/* textboxtype: 2, unk: 0, line: 156 */ "Es besteht die Möglichkeit, durch das\nDurchtrennen von Tentakeln <color red<Herzen\n>coloroff>oder <color red<Pfeile>coloroff> zu erhalten.\n\nSollten deine Herzen oder Pfeile knapp\nwerden, durchtrenne so viele Tentakel\nwie möglich, anstatt überhastet die\nFlucht anzutreten.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<263>*/ 					printf(/* textboxtype: 2, unk: 0, line: 13 */ "Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
          				}
          			  case 1:
          				goto flw_261
          			  case 2:
          				goto flw_261
          			  case 3:
          				goto flw_261
          			}
          		  case 1:
/*< 46>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 36}) {
          			  case 0:
/*<248>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_43:
/*< 43>*/ 					printf(/* textboxtype: 2, unk: 0, line: 151 */ "Meiner Analyse zufolge zeigt sich\nDaidagos, nachdem eine gewisse\nAnzahl seiner Tentakel durchtrennt\nwurde, <0x10012:0x00000002>Gebieter.\nDie Wahrscheinlichkeit, dass die\nTentakel, die dir innerhalb des\nSchiffes den Weg blockiert haben,\nvon Daidagos stammen, ist 99 %.\nDie <color red<heilige Kraft >coloroff>scheint meinen Daten\nzufolge am geeignetsten zu sein, um sie\nzu durchtrennen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 48>*/ 					switch (choice(2)) {
          					  case 0:
/*< 49>*/ 						printf(/* textboxtype: 2, unk: 0, line: 152 */ "Meiner Analyse zufolge können seine\nTentakel durch die heilige Kraft des\n<color red<Himmelsstrahls >coloroff>durchtrennt werden.\n\nDie eigentliche Schwäche von Daidagos\nist sein <color red<Auge>coloroff>, doch der Himmelsstrahl\nreicht meinen Daten zufolge nicht so\nweit.\nNutze eine Waffe, die über eine noch\nlängere Reichweite als dein Schwert\nverfügt.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 50>*/ 						switch (choice(2)) {
          						  case 0:
/*< 51>*/ 							printf(/* textboxtype: 2, unk: 0, line: 153 */ "Nutze den<color yellow< Bogen >coloroff>um Daidagos' große\nSchwachstelle, sein <color red<Auge>coloroff>, zu treffen.\n\n\nDu kannst dich durch Neigen von (ControlStick2)\nbewegen, während du den <color yellow<Bogen\n>coloroff>bereithältst.\n\nWeiche so den Angriffen von Daidagos\naus und feuere dann einen <color red<Pfeil>coloroff> ab.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*< 47>*/ 					printf(/* textboxtype: 2, unk: 0, line: 13 */ "Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
          				}
          			  case 1:
          				goto flw_43
          			  case 2:
          				goto flw_43
          			  case 3:
          				goto flw_43
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_660() {
/*<179>*/ 	start()
/*<180>*/ 	printf(/* textboxtype: 2, unk: 0, line: 188 */ "Ich habe dir etwas zu berichten,\n<0x10012:0x0000000b>Gebieter <heroname>.\n\n\nMeine Analyse des Angriffsmusters\ndieses Gegners ist abgeschlossen.\nSoll ich dir das Ergebnis der Analyse\nmitteilen?[1-]Ja[2]Nein")
/*<181>*/ 	story_flags[775 /* us: 805A9B2A 0x80, jp: 805ACDAA 0x80 */] = true;
/*<182>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_27:
/*< 27>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 20}) {
          		  case 0:
/*<246>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				flw_24:
/*< 24>*/ 				printf(/* textboxtype: 2, unk: 1, line: 67 */ "Zerstörst du das <color red<kugelförmige roten\nElement>coloroff> an einem seiner Arme, fällt\ndieser Arm ab und Da Ilohm bricht\nauseinander.\nDiese Elemente sind jedoch unter den\nSchutzplatten an seinem Unterarm\nverborgen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 29>*/ 				switch (choice(2)) {
          				  case 0:
/*< 30>*/ 					printf(/* textboxtype: 2, unk: 1, line: 68 */ "Die <color red<kugelförmigen roten Elemente>coloroff> in\nseinen Armen liegen nur frei, wenn\nDa Ilohm seinen Arm zum Angriff\nausstreckt.\nWeiche seinem Schlag aus und reagiere\nblitzschnell mit einem Gegenangriff.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 31>*/ 					switch (choice(2)) {
          					  case 0:
/*< 32>*/ 						printf(/* textboxtype: 2, unk: 1, line: 69 */ "Ich empfehle dir, die <color red<kugelförmigen\nroten Elemente>coloroff> an seinen Armen mit\ndeiner <color yellow<Peitsche>coloroff> zu lösen.\n\nVerliert Da Ilohm seine Arme, wird\nseine <color red<Herzsphäre>coloroff> angreifbar.\n\n\nDa die <color red<Herzsphäre>coloroff> nicht mit der\n<color yellow<Peitsche >coloroff>herausgelöst werden kann,\nmusst du einen anderen Weg finden,\nsie zu zerstören.")
          					  case 1:
          					}
          				  case 1:
          				}
          			  case 1:
/*< 28>*/ 				printf(/* textboxtype: 2, unk: 0, line: 13 */ "Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
          			}
          		  case 1:
          			goto flw_24
          		  case 2:
          			goto flw_24
          		  case 3:
          			goto flw_24
          		}
          	  case 1:
/*<183>*/ 		printf(/* textboxtype: 2, unk: 0, line: 190 */ "Sehr wohl, <0x10012:0x00000005>Gebieter. Visiere einen\nGegner durch Drücken von (Z) an und\ndrücke (v), um mich zu rufen und mehr\nüber ihn zu erfahren.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

          void entrypoint_006_661() {
/*<184>*/ 	start()
/*<185>*/ 	printf(/* textboxtype: 2, unk: 0, line: 188 */ "Ich habe dir etwas zu berichten,\n<0x10012:0x0000000b>Gebieter <heroname>.\n\n\nMeine Analyse des Angriffsmusters\ndieses Gegners ist abgeschlossen.\nSoll ich dir das Ergebnis der Analyse\nmitteilen?[1-]Ja[2]Nein")
/*<186>*/ 	story_flags[776 /* us: 805A9B2D 0x01, jp: 805ACDAD 0x01 */] = true;
/*<187>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_268
          	  case 1:
/*<188>*/ 		printf(/* textboxtype: 2, unk: 0, line: 190 */ "Sehr wohl, <0x10012:0x00000005>Gebieter. Visiere einen\nGegner durch Drücken von (Z) an und\ndrücke (v), um mich zu rufen und mehr\nüber ihn zu erfahren.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

          void entrypoint_006_610() {
/*< 13>*/ 	start()
/*< 15>*/ 	printf(/* textboxtype: 2, unk: 0, line: 24 */ "Der „dunkle Äonenskorpion“, wie\ndieses Wesen auch genannt wird, ist ein\n1000 Jahre alter und ausgewachsener\n<color blue<Minighad>coloroff>.\nSein Körper ist zu 90 % von einer\nPanzerschicht überzogen, die jegliche\nSchwertangriffe abwehrt.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 16>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_17
          	  case 1:
          	}
          }

          void entrypoint_006_662() {
/*<189>*/ 	start()
/*<190>*/ 	printf(/* textboxtype: 2, unk: 0, line: 188 */ "Ich habe dir etwas zu berichten,\n<0x10012:0x0000000b>Gebieter <heroname>.\n\n\nMeine Analyse des Angriffsmusters\ndieses Gegners ist abgeschlossen.\nSoll ich dir das Ergebnis der Analyse\nmitteilen?[1-]Ja[2]Nein")
/*<191>*/ 	story_flags[777 /* us: 805A9B2D 0x02, jp: 805ACDAD 0x02 */] = true;
/*<192>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_87:
/*< 87>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*< 74>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 66}) {
          			  case 0:
/*<252>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_71:
/*< 71>*/ 					printf(/* textboxtype: 2, unk: 0, line: 85 */ "Sollte Ghirahim seine Dolche auf dich\nabfeuern, kannst du sie sofort auf ihn\nzurückschleudern, indem du sie mit\ndem Schwert triffst.\nDabei ist es entscheidend, deinen\nSchwertschlag entsprechend der\nRichtung der Dolche auszuführen.\n\nSolltest du von Dolchen eingekreist\nwerden, führe eine Technik aus, mit\nder du gleichzeitig einen <color red<Angriff in\nalle Richtungen >coloroff>ausführen kannst.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 76>*/ 					switch (choice(2)) {
          					  case 0:
/*< 77>*/ 						printf(/* textboxtype: 2, unk: 0, line: 86 */ "Solltest du es schaffen, Ghirahims\nTeleportations-Angriff auszuweichen,\nergibt sich eine sehr gute Möglichkeit\nzum Konter.\nGhirahim führt verschiedene Arten des\nTeleportations-Angriffes aus, doch der\nKopfangriff kündigt sich durch eine\nbestimmte Körperhaltung an.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 78>*/ 						switch (choice(2)) {
          						  case 0:
/*< 79>*/ 							printf(/* textboxtype: 2, unk: 0, line: 87 */ "<0x10012:0x00000001>Ghirahim wird versuchen, deinen\nAngriff abzuwehren, wozu er seine\nWaffen nutzt.\n\n<0x10012:0x00000002>Da er zwei Schwerter trägt, kann er\nmit einer Wahrscheinlichkeit von\n100 % zwei deiner Angriffe in Folge\nparieren.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<142>*/ 					printf(/* textboxtype: 2, unk: 0, line: 84 */ "Ich stelle fest, dass Ghirahim seine\nKampfstrategie im Laufe des Kampfes\ngeändert hat.\n\nIch gehe davon aus, dass dies aufgrund\ndes Schadens, den er erlitten hat,\ngeschehen ist.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<143>*/ 					switch (choice(2)) {
          					  case 0:
/*< 75>*/ 						printf(/* textboxtype: 2, unk: 0, line: 13 */ "Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
          					  case 1:
          					}
          				}
          			  case 1:
          				goto flw_71
          			  case 2:
          				goto flw_71
          			  case 3:
          				goto flw_71
          			}
          		  case 1:
/*< 81>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 74}) {
          			  case 0:
/*<251>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_80:
/*< 80>*/ 					printf(/* textboxtype: 2, unk: 0, line: 81 */ "Die Dolche, welche Ghirahim umgeben,\ndienen ihm als Schutz.\n\n\nZuerst die Dolche anzugreifen, um\nGhirahims Abwehr zu schwächen, ist\neine mögliche Methode, um siegreich\naus diesem Kampf hervorzugehen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 83>*/ 					switch (choice(2)) {
          					  case 0:
/*< 84>*/ 						printf(/* textboxtype: 2, unk: 0, line: 82 */ "Ghirahim wird versuchen, dein\nSchwert mit seiner rechten Hand\nabzufangen und festzuhalten,\n<0x10012:0x00000002>mein Gebieter.\nGeschieht dies, schwinge das Schwert\n<color red<nach oben und unten>coloroff>, um dich wieder\nfreizukämpfen.\n\nGhirahim ist jedoch sehr mächtig,\nweshalb es nicht ausreicht, nur einen\neinzigen Schwung auszuführen, um\ndich zu befreien.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 85>*/ 						switch (choice(2)) {
          						  case 0:
/*< 86>*/ 							printf(/* textboxtype: 2, unk: 0, line: 83 */ "Ich empfehle, Ghirahim so zu\nattackieren, dass die Dolche\nund seine rechte Hand deinen\nAngriff nicht behindern.\nGhirahim bewegt seine rechte\nHand synchron zur Bewegung\ndeines Schwerts, <0x10012:0x00000002>mein Gebieter.\n\nEs kommt jedoch auch vor, dass\nGhirahim seine Bewegung <color red<ein\nwenig verzögert >coloroff>ausführt.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*< 82>*/ 					printf(/* textboxtype: 2, unk: 0, line: 13 */ "Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
          				}
          			  case 1:
          				goto flw_80
          			  case 2:
          				goto flw_80
          			  case 3:
          				goto flw_80
          			}
          		}
          	  case 1:
/*<193>*/ 		printf(/* textboxtype: 2, unk: 0, line: 190 */ "Sehr wohl, <0x10012:0x00000005>Gebieter. Visiere einen\nGegner durch Drücken von (Z) an und\ndrücke (v), um mich zu rufen und mehr\nüber ihn zu erfahren.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

          void entrypoint_006_663() {
/*<194>*/ 	start()
/*<195>*/ 	printf(/* textboxtype: 2, unk: 0, line: 188 */ "Ich habe dir etwas zu berichten,\n<0x10012:0x0000000b>Gebieter <heroname>.\n\n\nMeine Analyse des Angriffsmusters\ndieses Gegners ist abgeschlossen.\nSoll ich dir das Ergebnis der Analyse\nmitteilen?[1-]Ja[2]Nein")
/*<196>*/ 	story_flags[778 /* us: 805A9B2D 0x04, jp: 805ACDAD 0x04 */] = true;
/*<197>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_239
          	  case 1:
/*<198>*/ 		printf(/* textboxtype: 2, unk: 0, line: 190 */ "Sehr wohl, <0x10012:0x00000005>Gebieter. Visiere einen\nGegner durch Drücken von (Z) an und\ndrücke (v), um mich zu rufen und mehr\nüber ihn zu erfahren.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

          void entrypoint_006_664() {
/*<199>*/ 	start()
/*<200>*/ 	printf(/* textboxtype: 2, unk: 0, line: 188 */ "Ich habe dir etwas zu berichten,\n<0x10012:0x0000000b>Gebieter <heroname>.\n\n\nMeine Analyse des Angriffsmusters\ndieses Gegners ist abgeschlossen.\nSoll ich dir das Ergebnis der Analyse\nmitteilen?[1-]Ja[2]Nein")
/*<201>*/ 	story_flags[779 /* us: 805A9B2D 0x08, jp: 805ACDAD 0x08 */] = true;
/*<202>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_240
          	  case 1:
/*<203>*/ 		printf(/* textboxtype: 2, unk: 0, line: 190 */ "Sehr wohl, <0x10012:0x00000005>Gebieter. Visiere einen\nGegner durch Drücken von (Z) an und\ndrücke (v), um mich zu rufen und mehr\nüber ihn zu erfahren.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

          void entrypoint_006_699() {
/*<270>*/ 	start()
/*<271>*/ 	switch (story_flags[844 /* us: 805A9B35 0x08, jp: 805ACDB5 0x08 */]) {
          	  case 0:
/*<273>*/ 		printf(/* textboxtype: 2, unk: 0, line: 17 */ "Diese überdimensional große Spinne\nlebt in den Tiefen des Waldes und\nspinnt enorm lange Fäden.\n\nSie fängt ihre Beute in ihrem Netz und\ngreift sie danach an. Ihr Rücken ist\ngepanzert, ihr Bauch jedoch ist\nsehr empfindlich.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<275>*/ 		switch (choice(2)) {
          		  case 0:
/*<281>*/ 			switch (story_flags[845 /* us: 805A9B35 0x10, jp: 805ACDB5 0x10 */]) {
          			  case 0:
/*<283>*/ 				printf(/* textboxtype: 2, unk: 0, line: 19 */ "Um ihren wunden Punkt zu verbergen,\nwendet sie ihrem Feind stets den\nRücken zu.\n\nDu musst versuchen, die Skulltula\numzudrehen, um ihren Bauch treffen\nzu können.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<276>*/ 				switch (choice(2)) {
          				  case 0:
/*<277>*/ 					printf(/* textboxtype: 2, unk: 0, line: 20 */ "Nur eine einzige Stelle im Zentrum des\nBauches ist verwundbar. Ich empfehle\ndir, den <color green<Fangstoß einzusetzen>coloroff>.")
          					flw_279:
/*<279>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 21, 'param4': 2, 'param5': 244}) {
          					  case 0:
/*<278>*/ 						printf(/* textboxtype: 2, unk: 1, line: 185 */ "Du hast diesen Gegnertypus insgesamt\n<numeric arg0 1>-mal besiegt. Du verhältst dich im\nKampf mit diesem Gegnertypus meiner\nAnalyse zufolge <string arg0>.")
          					  case 1:
          					}
          				  case 1:
          					goto flw_279
          				}
          			  case 1:
/*<282>*/ 				printf(/* textboxtype: 2, unk: 0, line: 18 */ "Um ihren wunden Punkt zu verbergen,\nwendet sie ihrem Feind stets den\nRücken zu.\n\nDu musst versuchen, die Skulltula\numzudrehen, um ihren Bauch treffen\nzu können.")
/*<280>*/ 				story_flags[845 /* us: 805A9B35 0x10, jp: 805ACDB5 0x10 */] = true;
          				goto flw_279
          			}
          		  case 1:
          			goto flw_279
          		}
          	  case 1:
/*<272>*/ 		printf(/* textboxtype: 2, unk: 0, line: 16 */ "Diese überdimensional große Spinne\nlebt in den Tiefen des Waldes und\nspinnt enorm lange Fäden.\n\nSie fängt ihre Beute in ihrem Netz und\ngreift sie danach an. Ihr Rücken ist\ngepanzert, ihr Bauch jedoch ist sehr\nempfindlich.\nIch bin gerade dabei, ihr Verhalten\ngenauer zu analysieren.")
/*<274>*/ 		story_flags[844 /* us: 805A9B35 0x08, jp: 805ACDB5 0x08 */] = true;
          		goto flw_279
          	}
          }

          void entrypoint_006_648() {
/*< 23>*/ 	start()
/*< 25>*/ 	printf(/* textboxtype: 2, unk: 1, line: 66 */ "Es hat den Anschein, als wäre er durch\nGhirahims dunklen Zauber verflucht\nund zu einem noch bedrohlicheren\nWesen geworden.\nDie <color red<kugelförmigen roten Elemente>coloroff> an\nseinen Armen und Rumpf schützt er\num jeden Preis.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 26>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_27
          	  case 1:
          	}
          }

          void entrypoint_006_665() {
/*< 33>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 2, unk: 0, line: 134 */ "Sein Körper ist von Fels bedeckt und\nbesitzt nur eine einzige Schwachstelle,\nund zwar sein <color red<Auge>coloroff>.\n\nDeine Chancen, Beradama zu besiegen,\nerhöhen sich, wenn du eine Möglichkeit\nfindest, die Felsen von seinem Körper\nzu lösen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 36>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_231
          	  case 1:
          	}
          }

          void entrypoint_006_649() {
/*< 52>*/ 	start()
/*< 54>*/ 	printf(/* textboxtype: 2, unk: 0, line: 71 */ "Er nennt sich selbst „<color blue<Dunkelfürst>coloroff>“.\nÜber seine Herkunft ist mir jedoch\nnichts bekannt.\n\nMeiner Analyse zufolge ist er äußerst\nintelligent. Zudem geht von ihm eine\nstarke bösartige Aura aus.\n\nEs hat den Anschein, als nutze er im\nAugenblick nur einen Teil seiner\nwahren Macht.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 55>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_69
          	  case 1:
          	}
          }

          void entrypoint_006_666() {
/*<204>*/ 	start()
/*<205>*/ 	printf(/* textboxtype: 2, unk: 0, line: 188 */ "Ich habe dir etwas zu berichten,\n<0x10012:0x0000000b>Gebieter <heroname>.\n\n\nMeine Analyse des Angriffsmusters\ndieses Gegners ist abgeschlossen.\nSoll ich dir das Ergebnis der Analyse\nmitteilen?[1-]Ja[2]Nein")
/*<206>*/ 	story_flags[780 /* us: 805A9B2D 0x10, jp: 805ACDAD 0x10 */] = true;
/*<207>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_241
          	  case 1:
/*<208>*/ 		printf(/* textboxtype: 2, unk: 0, line: 190 */ "Sehr wohl, <0x10012:0x00000005>Gebieter. Visiere einen\nGegner durch Drücken von (Z) an und\ndrücke (v), um mich zu rufen und mehr\nüber ihn zu erfahren.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

          void entrypoint_006_667() {
/*<209>*/ 	start()
/*<210>*/ 	printf(/* textboxtype: 2, unk: 0, line: 188 */ "Ich habe dir etwas zu berichten,\n<0x10012:0x0000000b>Gebieter <heroname>.\n\n\nMeine Analyse des Angriffsmusters\ndieses Gegners ist abgeschlossen.\nSoll ich dir das Ergebnis der Analyse\nmitteilen?[1-]Ja[2]Nein")
/*<211>*/ 	story_flags[781 /* us: 805A9B2D 0x20, jp: 805ACDAD 0x20 */] = true;
/*<212>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_242
          	  case 1:
/*<213>*/ 		printf(/* textboxtype: 2, unk: 0, line: 190 */ "Sehr wohl, <0x10012:0x00000005>Gebieter. Visiere einen\nGegner durch Drücken von (Z) an und\ndrücke (v), um mich zu rufen und mehr\nüber ihn zu erfahren.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

          void entrypoint_006_650() {
/*< 70>*/ 	start()
/*< 72>*/ 	printf(/* textboxtype: 2, unk: 0, line: 80 */ "Er kommandiert die Dämonen und\nwird auch <color blue<Dunkelfürst>coloroff> genannt.\nIch stelle fest, dass er äußerst klug\nist und die Kunst der Magie beherrscht.\nIm Normalfall verhält er sich ruhig\nund vornehm, reizt man ihn jedoch\nzu sehr, zeigt er sein wahres Gesicht.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 73>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_87
          	  case 1:
          	}
          }

          void entrypoint_006_668() {
/*<214>*/ 	start()
/*<215>*/ 	printf(/* textboxtype: 2, unk: 0, line: 188 */ "Ich habe dir etwas zu berichten,\n<0x10012:0x0000000b>Gebieter <heroname>.\n\n\nMeine Analyse des Angriffsmusters\ndieses Gegners ist abgeschlossen.\nSoll ich dir das Ergebnis der Analyse\nmitteilen?[1-]Ja[2]Nein")
/*<216>*/ 	story_flags[782 /* us: 805A9B2D 0x40, jp: 805ACDAD 0x40 */] = true;
/*<217>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_238:
/*<238>*/ 		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
          		  case 0:
          			flw_116:
/*<116>*/ 			printf(/* textboxtype: 2, unk: 0, line: 90 */ "Ghirahim kämpft nun mit voller Kraft.\nEs scheint beinahe unmöglich, ihn mit\ngewöhnlichen Waffen zu verletzen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<120>*/ 			switch (choice(2)) {
          			  case 0:
/*<121>*/ 				printf(/* textboxtype: 2, unk: 0, line: 91 */ "<0x10012:0x00000001>Meiner Analyse zufolge kannst du\nGhirahim durch Angriffe mit dem\nSchwert ein wenig <color red<zurückdrängen>coloroff>.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<122>*/ 				switch (choice(2)) {
          				  case 0:
/*<123>*/ 					printf(/* textboxtype: 2, unk: 0, line: 92 */ "Ghirahim versucht stets, sich im\nInneren der Plattform zu positionieren\nund dich stetig nach außen zu drängen,\n<0x10012:0x00000002>Gebieter.\nDie Wahrscheinlichkeit, dass er\ndadurch verhindern will, von der\nPlattform zu stürzen, liegt bei 85 %.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<286>*/ 					switch (choice(2)) {
          					  case 0:
/*<287>*/ 						printf(/* textboxtype: 2, unk: 0, line: 93 */ "Die Wahrscheinlichkeit, dass Ghirahim\nsich erneut <color red<mit der bloßen Hand gegen\ndein Schwert verteidigen wird>coloroff>, liegt bei\nexakt 95 %, <0x10012:0x00000002>Gebieter.\nSollte Ghirahim seine Körperhaltung\nverändern, achte sehr genau auf die\n<color red<Position seiner Hand>coloroff>.")
          					  case 1:
          					}
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<253>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_116
          			  case 1:
/*<288>*/ 				printf(/* textboxtype: 2, unk: 0, line: 90 */ "Ghirahim kämpft nun mit voller Kraft.\nEs scheint beinahe unmöglich, ihn mit\ngewöhnlichen Waffen zu verletzen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<289>*/ 				switch (choice(2)) {
          				  case 0:
/*<290>*/ 					printf(/* textboxtype: 2, unk: 0, line: 91 */ "<0x10012:0x00000001>Meiner Analyse zufolge kannst du\nGhirahim durch Angriffe mit dem\nSchwert ein wenig <color red<zurückdrängen>coloroff>.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<291>*/ 					switch (choice(2)) {
          					  case 0:
/*<292>*/ 						printf(/* textboxtype: 2, unk: 0, line: 92 */ "Ghirahim versucht stets, sich im\nInneren der Plattform zu positionieren\nund dich stetig nach außen zu drängen,\n<0x10012:0x00000002>Gebieter.\nDie Wahrscheinlichkeit, dass er\ndadurch verhindern will, von der\nPlattform zu stürzen, liegt bei 85 %.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<293>*/ 						switch (choice(2)) {
          						  case 0:
/*<119>*/ 							printf(/* textboxtype: 2, unk: 0, line: 13 */ "Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
          				}
          			}
          		}
          	  case 1:
/*<218>*/ 		printf(/* textboxtype: 2, unk: 0, line: 190 */ "Sehr wohl, <0x10012:0x00000005>Gebieter. Visiere einen\nGegner durch Drücken von (Z) an und\ndrücke (v), um mich zu rufen und mehr\nüber ihn zu erfahren.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

          void entrypoint_006_651() {
/*<115>*/ 	start()
/*<117>*/ 	printf(/* textboxtype: 2, unk: 0, line: 89 */ "Im Vergleich zur letzten Begegnung\nmit ihm hat sich sein Aussehen um bis\nzu 90 % verändert.\n\nZudem geht eine schwarze Aura von\nihm aus, die seinen gesamten Körper\numhüllt.\n\n<0x10012:0x00000001>Ich habe dir etwas zu berichten,\nGebieter. Ein kleiner Moment\nder Unaufmerksamkeit kann in\ndiesem Kampf bereits zu viel sein.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<118>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_238
          	  case 1:
          	}
          }

          void entrypoint_006_669() {
/*<219>*/ 	start()
/*<220>*/ 	printf(/* textboxtype: 2, unk: 0, line: 191 */ "Ich habe dir etwas zu berichten,\n<0x10012:0x0000000b>Gebieter <heroname>.\nIch habe Neues über den <color blue<Todbringer>coloroff>\nherausgefunden.\nMöchtest du das Ergebnis meiner\nAnalyse erfahren?[1-]Ja[2]Nein")
/*<221>*/ 	story_flags[783 /* us: 805A9B2D 0x80, jp: 805ACDAD 0x80 */] = true;
/*<222>*/ 	switch (choice(2)) {
          	  case 0:
/*<232>*/ 		printf(/* textboxtype: 2, unk: 0, line: 124 */ "In dieser vom Todbringer beherrschten\nWelt steht der <color red<Himmelsstrahl >coloroff>nicht zur\nVerfügung.[1-]Mehr\nDetails[2]Keine\nDetails")
/*<233>*/ 		switch (choice(2)) {
          		  case 0:
/*<225>*/ 			printf(/* textboxtype: 2, unk: 0, line: 111 */ "Ich stelle fest, dass einzig und allein\ndas <color yellow<Master-Schwert>coloroff> dem Todbringer\nSchaden zufügen kann.\n\nAlle anderen Waffen haben offenbar\nkeinerlei Wirkung.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<226>*/ 			switch (choice(2)) {
          			  case 0:
/*<227>*/ 				switch (scene_flags[120 /* 0xE 01 */]) {
          				  case 0:
/*<228>*/ 					printf(/* textboxtype: 2, unk: 0, line: 122 */ "Der Todbringer nutzt die Energie der\neinschlagenden Blitze, indem er sie in\nseinem Schwert speichert.\n\nAchte darauf, den Todbringer in\ndiesem Fall nicht anzugreifen, da\neine Berührung mit seinem Schwert\ndich lähmen kann, <0x10012:0x00000002>Gebieter.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<230>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_229:
/*<229>*/ 						printf(/* textboxtype: 2, unk: 0, line: 123 */ "Ich bin noch damit beschäftigt, die\nDaten einzuordnen und benötige dafür\nnoch ein wenig mehr Zeit.\n\nWarte eine Zeit lang, visiere dann den\nTodbringer durch Drücken von (Z) an\nund drücke (v), um mich zu rufen.<0x10011:0x07cd><0x10011:0x09cd>")
          					  case 1:
          					}
          				  case 1:
          					goto flw_229
          				}
          			  case 1:
          			}
          		  case 1:
          		}
          	  case 1:
/*<223>*/ 		printf(/* textboxtype: 2, unk: 0, line: 190 */ "Sehr wohl, <0x10012:0x00000005>Gebieter. Visiere einen\nGegner durch Drücken von (Z) an und\ndrücke (v), um mich zu rufen und mehr\nüber ihn zu erfahren.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

