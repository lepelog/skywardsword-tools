          void entrypoint_006_600() {
          	start()
/*<  1>*/ 	printf("Dies ist ein <b<Lemurin bei Tag>>.<entrypoint_601>")
/*<  3>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 21, 'param4': 2, 'param5': 0}) {
          	  case 0:
/*<  2>*/ 		printf("Du hast diesen Gegnertypus insgesamt\n<numeric arg0(1)>-mal besiegt. Du verhältst dich im\nKampf mit diesem Gegnertypus meiner\nAnalyse zufolge <string arg0>.")
          	  case 1:
          	}
          }

          void entrypoint_006_652() {
/*< 88>*/ 	start()
/*< 90>*/ 	printf("Ich habe keine genauen Daten zu\ndieser Bestie.\n\n\nIch kann jedoch feststellen, dass ihre\nAura mächtiger ist als die der Monster,\ndenen du begegnet bist.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 91>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_239:
/*<239>*/ 		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
          		  case 0:
          			flw_89:
/*< 89>*/ 			printf("Auf dem Kopf der Bestie befindet sich\nder <r<Siegelstein>>, der zuvor am Grund\ndes<b< Siegelhains >>platziert war.\n\nDu kannst dem Monster Schaden\nzufügen, indem du diesen Siegelstein\nin seinen Kopf rammst.\n\nGreife erst\x0E\x01\x12\x04\x00\x02 seine Füße an, um den\nVerbannten zu Fall zu bringen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 93>*/ 			switch (choice(2)) {
          			  case 0:
/*< 94>*/ 				printf("Du kannst seine Bewegungen stoppen,\nindem du alle Zehen an seinen Füßen\nabschlägst.\n\nVersuche, mit Hilfe der Windströme\nvor die Bestie zu gelangen. Ich rate\ndavon ab, die Bestie zu Fuß zu\nverfolgen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 95>*/ 				switch (choice(2)) {
          				  case 0:
/*< 96>*/ 					printf("Wenn du dich gut vor seinen Zehen\npositioniert hast, nutze am besten die\n<g<Wirbelattacke>>, um mit einem Schlag\nmöglichst viel Schaden anzurichten.\nEine andere Möglichkeit ist es, den\nVerbannten aus sicherer Entfernung\nheraus mit <y<Bomben >>anzugreifen.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<256>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_89
          			  case 1:
/*< 92>*/ 				printf("Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_653() {
/*< 97>*/ 	start()
/*< 99>*/ 	printf("Ich habe keine genauen Daten zu\ndieser Bestie.\n\n\nIch stelle jedoch fest, dass die Bestie\nnun über etwas verfügt, das wie zwei\nHände aussieht.\n\nDas Monster scheint nun noch stärker\nzu sein als bei der letzten Begegnung\nmit ihm.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<100>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_240:
/*<240>*/ 		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
          		  case 0:
          			flw_98:
/*< 98>*/ 			printf("Ich rate dir, dasselbe Angriffsmuster\nwie beim letzten Kampf anzuwenden.\n\n\nEs ist auch möglich, die Finger der\nBestie abzuschneiden, doch ich gehe\ndavon aus, dass daraus nur geringer\nVorteil entsteht.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<102>*/ 			switch (choice(2)) {
          			  case 0:
/*<103>*/ 				printf("Die Wahrscheinlichkeit, dass <b<Bados\n>>Apparatur der Bestie großen Schaden\nzufügen kann, liegt bei 100 %.\n\nEs ist möglich, die Bewegungen der\nBestie damit kurzzeitig aufzuhalten,\num Zeit für den Angriff zu gewinnen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<104>*/ 				switch (choice(2)) {
          				  case 0:
/*<105>*/ 					printf("Neige \x0E\x02\x04\x02\xECD, um die Position von <b<Bados\n>>Katapult zu ändern.\n\n\nSollte sich die Bestie in einem toten\nWinkel befinden, ändere die Position\nvon Bados Katapult.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<257>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_98
          			  case 1:
/*<101>*/ 				printf("Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_601() {
/*<294>*/ 	start()
/*<297>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<295>*/ 		printf("Ein kleines Tier, das im <b<Wolkenhort>>\nlebt. Nun, da sich <b<Morsego>> in einen\nMenschen verwandelt hat, wird es\nnachts nicht mehr aggressiv.")
          	  case 1:
/*<296>*/ 		printf("Dieses kleine Tier, das im <b<Wolkenhort>>\nlebt, ist tagsüber stets friedlich und\nzutraulich, nachts jedoch eine wilde\nBestie.")
          	}
          }

          void entrypoint_006_654() {
/*<106>*/ 	start()
/*<108>*/ 	printf("Dieses Wesen fungiert als Seelengefäß\nfür den <b<Todbringer>>. Genauere Daten\nsind mir nicht bekannt.\n\nAn seinem Kopf befindet sich ein\nschwanzflossenähnlicher Teil, der\nzuvor nicht vorhanden war.\n\nIch empfehle dir, <b<Bados>> Katapult\nzu deinem Vorteil einzusetzen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<109>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_241:
/*<241>*/ 		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
          		  case 0:
          			flw_107:
/*<107>*/ 			printf("Ich rate dir, dasselbe Angriffsmuster\nwie beim letzten Kampf anzuwenden.\n\n\nEs ist auch möglich, die Finger oder\nZehen der Bestie abzuschneiden.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<111>*/ 			switch (choice(2)) {
          			  case 0:
/*<112>*/ 				printf("Solltest du die Bestie zu Fall gebracht\nhaben, ist es möglich, dass ihr Körper\nden Weg zum <r<Siegelstein>> blockiert.\n\nSpringe in diesem Fall eine Ebene nach\nunten und nutze einen der Windströme,\num zu seinem Kopf zu gelangen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<113>*/ 				switch (choice(2)) {
          				  case 0:
/*<114>*/ 					printf("Aufgrund der enormen Kraft der\nBestie reicht dein Schwert allein\nnicht aus, um sie zu besiegen.\n\n<r<Steige selbst >>in Bados Katapult und\nbereite dem Monster ein Ende, mein\n\x0E\x01\x12\x04\x00\x02Gebieter.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<258>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_107
          			  case 1:
/*<110>*/ 				printf("Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_689() {
/*<124>*/ 	start()
/*<126>*/ 	printf("Verglichen mit der letzten Begegnung\nmit ihm hat sich seine Erscheinung zu\n90 % verändert.\n\nZudem geht eine schwarze Aura von\nihm aus, die seinen gesamten Körper\numhüllt.\n\nEr ist verwundet und hat nun seine\nKampfstrategie verändert.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<127>*/ 	switch (choice(2)) {
          	  case 0:
/*<243>*/ 		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
          		  case 0:
          			flw_125:
/*<125>*/ 			printf("Die <r<Wunde in seiner Brust >>aus dem\nvorherigen Kampf ist Ghirahims\nSchwachstelle.\n\nDie Wahrscheinlichkeit, dass er alle\nAngriffe auf diese Stelle abwehrt,\nliegt im normalen Zustand bei 100 %.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<129>*/ 			switch (choice(2)) {
          			  case 0:
/*<130>*/ 				printf("Es ist möglich, Ghirahims Schwert, das\ndie <r<Wunde in seiner Brust >>schützt, zur\nSeite zu schlagen, \x0E\x01\x12\x04\x00\x02Gebieter.\n\nIch empfehle, den richtigen Moment\nabzuwarten und dann unmittelbar zum\nAngriff überzugehen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<131>*/ 				switch (choice(2)) {
          				  case 0:
/*<132>*/ 					printf("Meiner Analyse zufolge ist es nicht\nmöglich, Ghirahims Schwert mit nur\neinem einzigen Angriff zur Seite zu\nschlagen.\nIch empfehle, <r<mehrere Angriffe in\ndieselbe Richtung >>auszuführen, um\nsein Schwert zur Seite zu schlagen.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<254>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_125
          			  case 1:
/*<128>*/ 				printf("Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_602() {
/*<298>*/ 	start()
/*<299>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<301>*/ 		printf("Ein kleines Tier, das im <b<Wolkenhort>>\nlebt. Nun, da sich <b<Morsego>> in einen\nMenschen verwandelt hat, wird es\nnachts nicht mehr aggressiv.")
          	  case 1:
/*<300>*/ 		printf("Tagsüber ist dieses Tier zutraulich und\nfriedlich, nachts wird es jedoch zur\nwilden Bestie. Lasse dich nicht von\nseinem Äußeren täuschen.")
          	}
          }

          void entrypoint_006_655() {
/*<144>*/ 	start()
/*<145>*/ 	printf("Dieses Wesen gilt als die Quelle des\nBösen, das die Zeit überdauert\nund bis heute fortbestanden hat.\n\nUralte Legenden besagen, dass seine\nErscheinung je nach Betrachter stark\nvariiert und die Zeit sein Aussehen\nmitgeprägt hat.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<146>*/ 	switch (choice(2)) {
          	  case 0:
/*<234>*/ 		printf("In dieser vom Todbringer beherrschten\nWelt steht der <r<Himmelsstrahl >>nicht zur\nVerfügung.[1]Mehr\nDetails[2-]Keine\nDetails")
/*<235>*/ 		switch (choice(2)) {
          		  case 0:
/*<148>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 124}) {
          			  case 0:
/*<260>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_151:
/*<151>*/ 					printf("Die Chance, dass einmalige Angriffe\ndem Todbringer Schaden zufügen\nkönnen, liegt bei 0 %, \x0E\x01\x12\x04\x00\x02Gebieter.\n\nUm die starke Abwehr des Todbringers\ndurchbrechen zu können, musst du ihn\n<r<mehrmals aus jeweils verschiedenen\nRichtungen angreifen>>.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<152>*/ 					switch (choice(2)) {
          					  case 0:
/*<153>*/ 						printf("Meiner Analyse zufolge kann der\nTodbringer angegriffen werden,\nsobald er sein Schwert in die Höhe hält.\n\nAngriffe, die zu nahe am Schwert des\nTodbringers ausgeführt werden, wehrt\ner jedoch zu 100 % ab. <pause0F>Sei vorsichtig.")
          					  case 1:
          					}
          				  case 1:
/*<149>*/ 					printf("Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
          				}
          			  case 1:
          				flw_147:
/*<147>*/ 				printf("Ich stelle fest, dass einzig und allein\ndas <y<Master-Schwert>> dem Todbringer\nSchaden zufügen kann.\n\nAlle anderen Waffen haben offenbar\nkeinerlei Wirkung.\n[1]Mehr\nDetails[2-]Keine\nDetails")
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
/*<134>*/ 	printf("Verglichen mit der letzten Begegnung\nmit ihm hat sich seine Erscheinung zu\n90 % verändert.\n\nZudem geht eine schwarze Aura von\nihm aus, die seinen gesamten Körper\numhüllt.\n\nIch stelle fest, dass er eine bisher\nunbekannte Waffe einsetzt.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<135>*/ 	switch (choice(2)) {
          	  case 0:
/*<244>*/ 		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
          		  case 0:
          			flw_137:
/*<137>*/ 			printf("Meiner Analyse zufolge kannst du\nGhirahims Schwert mit gezielten\nAngriffen <r<zerbrechen>>, \x0E\x01\x12\x04\x00\x02Gebieter.\n\nGhirahim nutzt seine Magie, um das\nSchwert zu erzeugen.\n\n\nDa Ghirahim stark verwundet ist,\nsollte sein Schwert nicht mehr allzu\nwiderstandsfähig sein.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<138>*/ 			switch (choice(2)) {
          			  case 0:
/*<139>*/ 				printf("Vom Zentrum von Ghirahims Schwert\ngeht dieselbe Energie aus wie von\nseinem <r<Herzkern>>.\n\nSollte es dir gelingen, den <r<Kern seines\nSchwerts >>zu zerstören, kannst du auch\ndas Schwert selbst zerstören.\n\nAchte auf die Bewegungen seines\nSchwerts und greife wiederholt\n<r<dieselbe Stelle >>an.")
          			  case 1:
          			}
          		  case 1:
/*<255>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_137
          			  case 1:
/*<136>*/ 				printf("Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_656() {
/*<161>*/ 	start()
/*<163>*/ 	printf("Dieses Wesen gilt als die Quelle des\nBösen, das die Zeit überdauert\nund bis heute fortbestanden hat.\n\nUralte Legenden besagen, dass seine\nErscheinung je nach Betrachter stark\nvariiert und die Zeit sein Aussehen\nmitgeprägt hat.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<162>*/ 	switch (choice(2)) {
          	  case 0:
/*<236>*/ 		printf("In dieser vom Todbringer beherrschten\nWelt steht der <r<Himmelsstrahl >>nicht zur\nVerfügung.[1]Mehr\nDetails[2-]Keine\nDetails")
/*<224>*/ 		scene_flags[10 'Sealed Grounds'][120 /* 0xE 01 */] = true;
/*<237>*/ 		switch (choice(2)) {
          		  case 0:
/*<155>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 132}) {
          			  case 0:
/*<259>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_154:
/*<154>*/ 					printf("Es ist möglich, ebenfalls auf die\nelektrische Energie des Todbringers\nzurückzugreifen, \x0E\x01\x12\x04\x00\x02mein Gebieter.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<157>*/ 					switch (choice(2)) {
          					  case 0:
/*<158>*/ 						printf("Du kannst die Blitzenergie in deinem\n<y<Master-Schwert>> konservieren und\n<r<anstelle des Himmelsstrahls >>einsetzen.\n\nWenn du in der Ferne einen Blitz siehst\nund der Himmel leuchtet, hebe dein\nSchwert gen Himmel.\n\nAchte jedoch darauf, dass du dabei\nnicht gelähmt wirst, da dies zur Folge\nhätte, dass du dem Todbringer\nschutzlos ausgeliefert bist.")
          					  case 1:
          					}
          				  case 1:
/*<159>*/ 					printf("Der Todbringer kann sein Schwert\nmit elektrischer Energie aufladen,\ndie er im Kampf einsetzt.\n\nTriffst du es im aufgeladenen Zustand,\nlähmt die Elektrizität deinen Körper,\n\x0E\x01\x12\x04\x00\x02mein Gebieter.<pause0F>\n\nAchte beim Angriff auf den richtigen\nZeitpunkt und sei höchst vorsichtig.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<160>*/ 					switch (choice(2)) {
          					  case 0:
/*<156>*/ 						printf("Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
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
/*<  5>*/ 	printf("Dieser gewaltige Parasit, den man auch\n\x201ERiesenparasit\x201C nennt, hat <b<Narisha\n>>befallen.\n\nEr kontrolliert seinen Wirt vollständig\nund steuert ihn nach seinem Willen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<  6>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_242:
/*<242>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<  8>*/ 			printf("Meiner Analyse zufolge kannst du die\nSchleimbälle, die <b<Baras Baras >>auf dich\nausspuckt, mit deinem Schwert\n<r<zurückschleudern>>, \x0E\x01\x12\x04\x00\x02Gebieter.\nBeobachte seine Bewegungen, um ihn\nmit den Schleimbällen zu treffen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<  9>*/ 			switch (choice(2)) {
          			  case 0:
/*< 10>*/ 				printf("Seine Schwachstelle ist der <r<Augapfel\n>>im Zentrum.\n\n\nEr schützt ihn mit seinen <r<Flossen>>, doch\nAngriffe schaden ihm nur, wenn sein\n<r<Augapfel>> ungeschützt ist.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 11>*/ 				switch (choice(2)) {
          				  case 0:
/*< 12>*/ 					printf("Achte auf den Winkel deines Schlages,\nwenn du die Schleimbälle von Baras\nBaras auf ihn zurückschleuderst.\n\nSchwinge dein Schwert von links oder\nrechts,<pause0F> oder führe einen Vertikalschlag\naus, um ihn frontal zu treffen.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<  7>*/ 			printf("Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_657() {
/*<164>*/ 	start()
/*<165>*/ 	printf("Ich habe dir etwas zu berichten,\n\x0E\x01\x12\x04\x00\x0BGebieter Link.\n\n\nMeine Analyse des Angriffsmusters\ndieses Gegners ist abgeschlossen.\n\n\nVisiere den Gegner durch Drücken\nvon (Z) an und rufe mich, indem du\n(v) drückst, um mehr über diesen\nGegner zu erfahren.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD\nMöchtest du dies nun tun?[1]Ja[2-]Nein")
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
/*< 53>*/ 					printf("Meiner Analyse zufolge reiht Ghirahim\ndie Dolche, die er auf dich abfeuert, in\nunterschiedlichen Formationen an.\n\nEs ist also möglich, sie alle mit einem\neinzigen gezielten Schlag wieder auf\nihn zurückzuschleudern.\n\nIch schätze dies jedoch als sehr riskant\nein.[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 58>*/ 					switch (choice(2)) {
          					  case 0:
/*< 59>*/ 						printf("Ghirahim beherrscht die Kunst der\nTeleportation.\n\n\nMeiner Analyse zufolge harrt er jedoch\ndirekt nach der Teleportation stets für\neinen kurzen Moment lang aus.\n\nDies ist eine sehr gute Gelegenheit, ihn\nanzugreifen. Achte dabei jedoch auf\ndas Schwert, das er zu seinem Schutz\nbereithält.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 60>*/ 						switch (choice(2)) {
          						  case 0:
/*< 61>*/ 							printf("Ghirahim wird versuchen, deinem\nAngriff seitlich auszuweichen und\neinen Gegenangriff auszuführen,\n\x0E\x01\x12\x04\x00\x02mein Gebieter.\nIn diesem Fall musst du versuchen,\nsofort <r<in die Richtung zu schlagen>>,\naus der Ghirahim dich angreift.\n\n\x0E\x01\x12\x04\x00\x02Gebieter, achte stets auf Ghirahims\nKörperhaltung vor dem Ausweichen,\num zu erahnen, in welche Richtung\ner ausweicht.\nWenn du Probleme mit dem Timing\nhast, versuche Ghirahim mit einer\n<g<Wirbelattacke>> Schaden zuzufügen.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<140>*/ 					printf("Ich stelle fest, dass Ghirahim seine\nKampfstrategie im Laufe des Kampfes\ngeändert hat.\n\nIch gehe davon aus, dass dies aufgrund\ndes Schadens, den er erlitten hat,\ngeschehen ist.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<141>*/ 					switch (choice(2)) {
          					  case 0:
/*< 57>*/ 						printf("Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
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
/*< 62>*/ 					printf("Er scheint sehr überzeugt von seiner\nStärke zu sein. \x0E\x01\x12\x04\x00\x02Achte jedoch auf seine\n<r<rechte Hand>>, mit der er versucht, dein\nSchwert festzuhalten, \x0E\x01\x12\x04\x00\x02Gebieter.\nGhirahim beobachtet, <r<wie du dein\nSchwert hältst >>und bereitet sich so\nauf deinen Angriff vor.\n\nIch empfehle dir, ihn zu täuschen und\naus der entgegengesetzten Richtung\nanzugreifen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 65>*/ 					switch (choice(2)) {
          					  case 0:
/*< 66>*/ 						printf("Hält er dein Schwert fest, achte auf die\n<r<Stellung von Ghirahims Fingern >>und\nschwinge dein Schwert sofort in die\n<r<entgegengesetzte Richtung>>.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 67>*/ 						switch (choice(2)) {
          						  case 0:
/*< 68>*/ 							printf("Die Finger, mit denen Ghirahim dein\nSchwert festhält, zeigen meiner Daten\nzufolge stets nach oben, \x0E\x01\x12\x04\x00\x01mein Gebieter.\n\nDie Wahrscheinlichkeit, dass du seinem\nBlock durch einen <r<Schwertstreich nach\noben >>entgehen kannst, liegt bei 100 %.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<284>*/ 					printf("Er scheint sehr überzeugt von seiner\nStärke zu sein. \x0E\x01\x12\x04\x00\x02Achte jedoch auf seine\n<r<rechte Hand>>, mit der er versucht, dein\nSchwert festzuhalten, \x0E\x01\x12\x04\x00\x02Gebieter.\nGhirahim beobachtet, <r<wie du dein\nSchwert hältst >>und bereitet sich so\nauf deinen Angriff vor.\n\nIch empfehle dir, ihn zu täuschen und\naus der entgegengesetzten Richtung\nanzugreifen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<285>*/ 					switch (choice(2)) {
          					  case 0:
/*< 64>*/ 						printf("Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
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
/*<168>*/ 		printf("Ich habe verstanden, \x0E\x01\x12\x04\x00\x05Gebieter. Rufe\nmich, wenn du das Ergebnis meiner\nAnalyse erfahren möchtest.")
          	}
          }

          void entrypoint_006_658() {
/*<169>*/ 	start()
/*<170>*/ 	printf("Ich habe dir etwas zu berichten,\n\x0E\x01\x12\x04\x00\x0BGebieter Link.\n\n\nMeine Analyse des Angriffsmusters\ndieses Gegners ist abgeschlossen.\n\n\nVisiere den Gegner durch Drücken\nvon (Z) an und rufe mich, indem du\n(v) drückst, um mehr über diesen\nGegner zu erfahren.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD\nMöchtest du dies nun tun?[1]Ja[2-]Nein")
/*<171>*/ 	story_flags[773 /* us: 805A9B2A 0x20, jp: 805ACDAA 0x20 */] = true;
/*<172>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_231:
/*<231>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
          			flw_34:
/*< 34>*/ 			printf("Die Wahrscheinlichkeit, seinen von\nFelsen überzogenen Körper mit dem\nSchwert zu verletzen, liegt bei 0 %.\n\nNutze etwas, das eine höhere\nZerstörungskraft besitzt.[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 38>*/ 			switch (choice(2)) {
          			  case 0:
/*< 39>*/ 				printf("Schluckt Beradama eine <y<Bombe>>, so\nwird er mit einer Wahrscheinlichkeit\nvon 100 % explodieren.\n\nExplosionen, die nur seine Außenhülle\ntreffen, schüren bloß seinen Zorn.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 40>*/ 				switch (choice(2)) {
          				  case 0:
/*< 41>*/ 					printf("Meiner Analyse zufolge können die\nFelsen auf Beradamas Körper von\nInnen heraus weggesprengt werden.\n\nVersuche, <r<eine Bombe in seinen\nSchlund zu werfen>>, wenn er Luft\nholt, um einen Glutball abzufeuern.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<247>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_34
          			  case 1:
/*< 37>*/ 				printf("Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
          			}
          		}
          	  case 1:
/*<173>*/ 		printf("Ich habe verstanden, \x0E\x01\x12\x04\x00\x05Gebieter. Rufe\nmich, wenn du das Ergebnis meiner\nAnalyse erfahren möchtest.")
          	}
          }

          void entrypoint_006_659() {
/*<174>*/ 	start()
/*<175>*/ 	printf("Ich habe dir etwas zu berichten,\n\x0E\x01\x12\x04\x00\x0BGebieter Link.\n\n\nMeine Analyse des Angriffsmusters\ndieses Gegners ist abgeschlossen.\n\n\nVisiere den Gegner durch Drücken\nvon (Z) an und rufe mich, indem du\n(v) drückst, um mehr über diesen\nGegner zu erfahren.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD\nMöchtest du dies nun tun?[1]Ja[2-]Nein")
/*<176>*/ 	story_flags[774 /* us: 805A9B2A 0x40, jp: 805ACDAA 0x40 */] = true;
/*<177>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_17:
/*< 17>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 10}) {
          		  case 0:
/*<245>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				flw_14:
/*< 14>*/ 				printf("Seine großen Scheren sind seine\n<r<Schwachpunkte>>, zugleich jedoch\nauch seine gefährlichsten Waffen.\n\nAchte auf die Neigung seiner Scheren,\num ihm im richtigen Moment Schaden\nzuzufügen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 19>*/ 				switch (choice(2)) {
          				  case 0:
/*< 20>*/ 					printf("Sollte Moldoghad verwundet werden,\nzieht er sich zurück und vergräbt sich\nim Sand.\n\nIn diesem Zustand wird er versuchen,\ndich aus seinem Versteck heraus mit\ndem Schwanz zu attackieren.\n\nDieser Angriff hat eine Gefahrenrate\nvon 85 %.\n\n\nDu kannst den Sand, unter dem er sich\nversteckt, <r<wegpusten>>, um Moldoghad\naus seinem Versteck hervorzulocken.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 21>*/ 					switch (choice(2)) {
          					  case 0:
/*< 22>*/ 						printf("Meiner Analyse zufolge entblößt er\nseinen wahren Schwachpunkt, das\n<r<zentrale Auge>>, sobald seine Scheren\nzerstört sind.\nDas <r<Auge>> ist jedoch von einer harten\nPanzerschicht umgeben. Schläge von\nder Seite oder von oben sind meinen\nDaten zufolge wirkungslos.")
          					  case 1:
          					}
          				  case 1:
          				}
          			  case 1:
/*< 18>*/ 				printf("Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
          			}
          		  case 1:
          			goto flw_14
          		  case 2:
          			goto flw_14
          		  case 3:
          			goto flw_14
          		}
          	  case 1:
/*<178>*/ 		printf("Ich habe verstanden, \x0E\x01\x12\x04\x00\x05Gebieter. Rufe\nmich, wenn du das Ergebnis meiner\nAnalyse erfahren möchtest.")
          	}
          }

          void entrypoint_006_677() {
/*< 42>*/ 	start()
/*< 44>*/ 	printf("Sein Beiname \x201EUraltes Meeresgrauen\x201C\nlässt darauf schließen, dass Daidagos\neinst der Herrscher über die Gezeiten\nwar.\nSeine dicken <r<Tentakel>> können zwar\ndurchtrennt werden, heilen sich jedoch\nnach kurzer Zeit von selbst.\n[1]Mehr\nDetails[2-]Keine\nDetails")
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
/*<261>*/ 					printf("Um Daidagos' <r<Auge>> zu erreichen, ist es\nnotwendig, die zahlreichen Tentakel zu\ndurchtrennen, mit denen er dich\nattackiert.\nMeiner Analyse zufolge sind die\nTentakel an ihrer Spitze am leichtesten\nzu durchtrennen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<264>*/ 					switch (choice(2)) {
          					  case 0:
/*<265>*/ 						printf("Daidagos attackiert dich mit seinen\nzahlreichen Tentakeln in sehr kurzen\nZeitabständen.\n\nEs wäre gefährlich zu versuchen, jedes\nder Tentakel einzeln zu durchtrennen.\n\n\nGreife unentwegt an und versuche, mit\ndeinen Schwertschlägen so viele wie\nmöglich zur gleichen Zeit zu treffen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<266>*/ 						switch (choice(2)) {
          						  case 0:
/*<267>*/ 							printf("Es besteht die Möglichkeit, durch das\nDurchtrennen von Tentakeln <r<Herzen\n>>oder <r<Pfeile>> zu erhalten.\n\nSollten deine Herzen oder Pfeile knapp\nwerden, durchtrenne so viele Tentakel\nwie möglich, anstatt überhastet die\nFlucht anzutreten.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<263>*/ 					printf("Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
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
/*< 43>*/ 					printf("Meiner Analyse zufolge zeigt sich\nDaidagos, nachdem eine gewisse\nAnzahl seiner Tentakel durchtrennt\nwurde, \x0E\x01\x12\x04\x00\x02Gebieter.\nDie Wahrscheinlichkeit, dass die\nTentakel, die dir innerhalb des\nSchiffes den Weg blockiert haben,\nvon Daidagos stammen, ist 99 %.\nDie <r<heilige Kraft >>scheint meinen Daten\nzufolge am geeignetsten zu sein, um sie\nzu durchtrennen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 48>*/ 					switch (choice(2)) {
          					  case 0:
/*< 49>*/ 						printf("Meiner Analyse zufolge können seine\nTentakel durch die heilige Kraft des\n<r<Himmelsstrahls >>durchtrennt werden.\n\nDie eigentliche Schwäche von Daidagos\nist sein <r<Auge>>, doch der Himmelsstrahl\nreicht meinen Daten zufolge nicht so\nweit.\nNutze eine Waffe, die über eine noch\nlängere Reichweite als dein Schwert\nverfügt.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 50>*/ 						switch (choice(2)) {
          						  case 0:
/*< 51>*/ 							printf("Nutze den<y< Bogen >>um Daidagos' große\nSchwachstelle, sein <r<Auge>>, zu treffen.\n\n\nDu kannst dich durch Neigen von \x0E\x02\x04\x02\x8CD\nbewegen, während du den <y<Bogen\n>>bereithältst.\n\nWeiche so den Angriffen von Daidagos\naus und feuere dann einen <r<Pfeil>> ab.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*< 47>*/ 					printf("Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
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
/*<180>*/ 	printf("Ich habe dir etwas zu berichten,\n\x0E\x01\x12\x04\x00\x0BGebieter Link.\n\n\nMeine Analyse des Angriffsmusters\ndieses Gegners ist abgeschlossen.\nSoll ich dir das Ergebnis der Analyse\nmitteilen?[1]Ja[2-]Nein")
/*<181>*/ 	story_flags[775 /* us: 805A9B2A 0x80, jp: 805ACDAA 0x80 */] = true;
/*<182>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_27:
/*< 27>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 20}) {
          		  case 0:
/*<246>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				flw_24:
/*< 24>*/ 				printf("Zerstörst du das <r<kugelförmige roten\nElement>> an einem seiner Arme, fällt\ndieser Arm ab und Da Ilohm bricht\nauseinander.\nDiese Elemente sind jedoch unter den\nSchutzplatten an seinem Unterarm\nverborgen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 29>*/ 				switch (choice(2)) {
          				  case 0:
/*< 30>*/ 					printf("Die <r<kugelförmigen roten Elemente>> in\nseinen Armen liegen nur frei, wenn\nDa Ilohm seinen Arm zum Angriff\nausstreckt.\nWeiche seinem Schlag aus und reagiere\nblitzschnell mit einem Gegenangriff.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 31>*/ 					switch (choice(2)) {
          					  case 0:
/*< 32>*/ 						printf("Ich empfehle dir, die <r<kugelförmigen\nroten Elemente>> an seinen Armen mit\ndeiner <y<Peitsche>> zu lösen.\n\nVerliert Da Ilohm seine Arme, wird\nseine <r<Herzsphäre>> angreifbar.\n\n\nDa die <r<Herzsphäre>> nicht mit der\n<y<Peitsche >>herausgelöst werden kann,\nmusst du einen anderen Weg finden,\nsie zu zerstören.")
          					  case 1:
          					}
          				  case 1:
          				}
          			  case 1:
/*< 28>*/ 				printf("Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
          			}
          		  case 1:
          			goto flw_24
          		  case 2:
          			goto flw_24
          		  case 3:
          			goto flw_24
          		}
          	  case 1:
/*<183>*/ 		printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter. Visiere einen\nGegner durch Drücken von (Z) an und\ndrücke (v), um mich zu rufen und mehr\nüber ihn zu erfahren.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_661() {
/*<184>*/ 	start()
/*<185>*/ 	printf("Ich habe dir etwas zu berichten,\n\x0E\x01\x12\x04\x00\x0BGebieter Link.\n\n\nMeine Analyse des Angriffsmusters\ndieses Gegners ist abgeschlossen.\nSoll ich dir das Ergebnis der Analyse\nmitteilen?[1]Ja[2-]Nein")
/*<186>*/ 	story_flags[776 /* us: 805A9B2D 0x01, jp: 805ACDAD 0x01 */] = true;
/*<187>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_268
          	  case 1:
/*<188>*/ 		printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter. Visiere einen\nGegner durch Drücken von (Z) an und\ndrücke (v), um mich zu rufen und mehr\nüber ihn zu erfahren.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_610() {
/*< 13>*/ 	start()
/*< 15>*/ 	printf("Der \x201Edunkle Äonenskorpion\x201C, wie\ndieses Wesen auch genannt wird, ist ein\n1000 Jahre alter und ausgewachsener\n<b<Minighad>>.\nSein Körper ist zu 90 % von einer\nPanzerschicht überzogen, die jegliche\nSchwertangriffe abwehrt.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 16>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_17
          	  case 1:
          	}
          }

          void entrypoint_006_662() {
/*<189>*/ 	start()
/*<190>*/ 	printf("Ich habe dir etwas zu berichten,\n\x0E\x01\x12\x04\x00\x0BGebieter Link.\n\n\nMeine Analyse des Angriffsmusters\ndieses Gegners ist abgeschlossen.\nSoll ich dir das Ergebnis der Analyse\nmitteilen?[1]Ja[2-]Nein")
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
/*< 71>*/ 					printf("Sollte Ghirahim seine Dolche auf dich\nabfeuern, kannst du sie sofort auf ihn\nzurückschleudern, indem du sie mit\ndem Schwert triffst.\nDabei ist es entscheidend, deinen\nSchwertschlag entsprechend der\nRichtung der Dolche auszuführen.\n\nSolltest du von Dolchen eingekreist\nwerden, führe eine Technik aus, mit\nder du gleichzeitig einen <r<Angriff in\nalle Richtungen >>ausführen kannst.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 76>*/ 					switch (choice(2)) {
          					  case 0:
/*< 77>*/ 						printf("Solltest du es schaffen, Ghirahims\nTeleportations-Angriff auszuweichen,\nergibt sich eine sehr gute Möglichkeit\nzum Konter.\nGhirahim führt verschiedene Arten des\nTeleportations-Angriffes aus, doch der\nKopfangriff kündigt sich durch eine\nbestimmte Körperhaltung an.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 78>*/ 						switch (choice(2)) {
          						  case 0:
/*< 79>*/ 							printf("\x0E\x01\x12\x04\x00\x01Ghirahim wird versuchen, deinen\nAngriff abzuwehren, wozu er seine\nWaffen nutzt.\n\n\x0E\x01\x12\x04\x00\x02Da er zwei Schwerter trägt, kann er\nmit einer Wahrscheinlichkeit von\n100 % zwei deiner Angriffe in Folge\nparieren.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<142>*/ 					printf("Ich stelle fest, dass Ghirahim seine\nKampfstrategie im Laufe des Kampfes\ngeändert hat.\n\nIch gehe davon aus, dass dies aufgrund\ndes Schadens, den er erlitten hat,\ngeschehen ist.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<143>*/ 					switch (choice(2)) {
          					  case 0:
/*< 75>*/ 						printf("Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
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
/*< 80>*/ 					printf("Die Dolche, welche Ghirahim umgeben,\ndienen ihm als Schutz.\n\n\nZuerst die Dolche anzugreifen, um\nGhirahims Abwehr zu schwächen, ist\neine mögliche Methode, um siegreich\naus diesem Kampf hervorzugehen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 83>*/ 					switch (choice(2)) {
          					  case 0:
/*< 84>*/ 						printf("Ghirahim wird versuchen, dein\nSchwert mit seiner rechten Hand\nabzufangen und festzuhalten,\n\x0E\x01\x12\x04\x00\x02mein Gebieter.\nGeschieht dies, schwinge das Schwert\n<r<nach oben und unten>>, um dich wieder\nfreizukämpfen.\n\nGhirahim ist jedoch sehr mächtig,\nweshalb es nicht ausreicht, nur einen\neinzigen Schwung auszuführen, um\ndich zu befreien.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 85>*/ 						switch (choice(2)) {
          						  case 0:
/*< 86>*/ 							printf("Ich empfehle, Ghirahim so zu\nattackieren, dass die Dolche\nund seine rechte Hand deinen\nAngriff nicht behindern.\nGhirahim bewegt seine rechte\nHand synchron zur Bewegung\ndeines Schwerts, \x0E\x01\x12\x04\x00\x02mein Gebieter.\n\nEs kommt jedoch auch vor, dass\nGhirahim seine Bewegung <r<ein\nwenig verzögert >>ausführt.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*< 82>*/ 					printf("Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
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
/*<193>*/ 		printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter. Visiere einen\nGegner durch Drücken von (Z) an und\ndrücke (v), um mich zu rufen und mehr\nüber ihn zu erfahren.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_663() {
/*<194>*/ 	start()
/*<195>*/ 	printf("Ich habe dir etwas zu berichten,\n\x0E\x01\x12\x04\x00\x0BGebieter Link.\n\n\nMeine Analyse des Angriffsmusters\ndieses Gegners ist abgeschlossen.\nSoll ich dir das Ergebnis der Analyse\nmitteilen?[1]Ja[2-]Nein")
/*<196>*/ 	story_flags[778 /* us: 805A9B2D 0x04, jp: 805ACDAD 0x04 */] = true;
/*<197>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_239
          	  case 1:
/*<198>*/ 		printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter. Visiere einen\nGegner durch Drücken von (Z) an und\ndrücke (v), um mich zu rufen und mehr\nüber ihn zu erfahren.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_664() {
/*<199>*/ 	start()
/*<200>*/ 	printf("Ich habe dir etwas zu berichten,\n\x0E\x01\x12\x04\x00\x0BGebieter Link.\n\n\nMeine Analyse des Angriffsmusters\ndieses Gegners ist abgeschlossen.\nSoll ich dir das Ergebnis der Analyse\nmitteilen?[1]Ja[2-]Nein")
/*<201>*/ 	story_flags[779 /* us: 805A9B2D 0x08, jp: 805ACDAD 0x08 */] = true;
/*<202>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_240
          	  case 1:
/*<203>*/ 		printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter. Visiere einen\nGegner durch Drücken von (Z) an und\ndrücke (v), um mich zu rufen und mehr\nüber ihn zu erfahren.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_699() {
/*<270>*/ 	start()
/*<271>*/ 	switch (story_flags[844 /* us: 805A9B35 0x08, jp: 805ACDB5 0x08 */]) {
          	  case 0:
/*<273>*/ 		printf("Diese überdimensional große Spinne\nlebt in den Tiefen des Waldes und\nspinnt enorm lange Fäden.\n\nSie fängt ihre Beute in ihrem Netz und\ngreift sie danach an. Ihr Rücken ist\ngepanzert, ihr Bauch jedoch ist\nsehr empfindlich.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<275>*/ 		switch (choice(2)) {
          		  case 0:
/*<281>*/ 			switch (story_flags[845 /* us: 805A9B35 0x10, jp: 805ACDB5 0x10 */]) {
          			  case 0:
/*<283>*/ 				printf("Um ihren wunden Punkt zu verbergen,\nwendet sie ihrem Feind stets den\nRücken zu.\n\nDu musst versuchen, die Skulltula\numzudrehen, um ihren Bauch treffen\nzu können.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<276>*/ 				switch (choice(2)) {
          				  case 0:
/*<277>*/ 					printf("Nur eine einzige Stelle im Zentrum des\nBauches ist verwundbar. Ich empfehle\ndir, den <g<Fangstoß einzusetzen>>.")
          					flw_279:
/*<279>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 21, 'param4': 2, 'param5': 244}) {
          					  case 0:
/*<278>*/ 						printf("Du hast diesen Gegnertypus insgesamt\n<numeric arg0(1)>-mal besiegt. Du verhältst dich im\nKampf mit diesem Gegnertypus meiner\nAnalyse zufolge <string arg0>.")
          					  case 1:
          					}
          				  case 1:
          					goto flw_279
          				}
          			  case 1:
/*<282>*/ 				printf("Um ihren wunden Punkt zu verbergen,\nwendet sie ihrem Feind stets den\nRücken zu.\n\nDu musst versuchen, die Skulltula\numzudrehen, um ihren Bauch treffen\nzu können.")
/*<280>*/ 				story_flags[845 /* us: 805A9B35 0x10, jp: 805ACDB5 0x10 */] = true;
          				goto flw_279
          			}
          		  case 1:
          			goto flw_279
          		}
          	  case 1:
/*<272>*/ 		printf("Diese überdimensional große Spinne\nlebt in den Tiefen des Waldes und\nspinnt enorm lange Fäden.\n\nSie fängt ihre Beute in ihrem Netz und\ngreift sie danach an. Ihr Rücken ist\ngepanzert, ihr Bauch jedoch ist sehr\nempfindlich.\nIch bin gerade dabei, ihr Verhalten\ngenauer zu analysieren.")
/*<274>*/ 		story_flags[844 /* us: 805A9B35 0x08, jp: 805ACDB5 0x08 */] = true;
          		goto flw_279
          	}
          }

          void entrypoint_006_648() {
/*< 23>*/ 	start()
/*< 25>*/ 	printf("Es hat den Anschein, als wäre er durch\nGhirahims dunklen Zauber verflucht\nund zu einem noch bedrohlicheren\nWesen geworden.\nDie <r<kugelförmigen roten Elemente>> an\nseinen Armen und Rumpf schützt er\num jeden Preis.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 26>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_27
          	  case 1:
          	}
          }

          void entrypoint_006_665() {
/*< 33>*/ 	start()
/*< 35>*/ 	printf("Sein Körper ist von Fels bedeckt und\nbesitzt nur eine einzige Schwachstelle,\nund zwar sein <r<Auge>>.\n\nDeine Chancen, Beradama zu besiegen,\nerhöhen sich, wenn du eine Möglichkeit\nfindest, die Felsen von seinem Körper\nzu lösen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 36>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_231
          	  case 1:
          	}
          }

          void entrypoint_006_649() {
/*< 52>*/ 	start()
/*< 54>*/ 	printf("Er nennt sich selbst \x201E<b<Dunkelfürst>>\x201C.\nÜber seine Herkunft ist mir jedoch\nnichts bekannt.\n\nMeiner Analyse zufolge ist er äußerst\nintelligent. Zudem geht von ihm eine\nstarke bösartige Aura aus.\n\nEs hat den Anschein, als nutze er im\nAugenblick nur einen Teil seiner\nwahren Macht.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 55>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_69
          	  case 1:
          	}
          }

          void entrypoint_006_666() {
/*<204>*/ 	start()
/*<205>*/ 	printf("Ich habe dir etwas zu berichten,\n\x0E\x01\x12\x04\x00\x0BGebieter Link.\n\n\nMeine Analyse des Angriffsmusters\ndieses Gegners ist abgeschlossen.\nSoll ich dir das Ergebnis der Analyse\nmitteilen?[1]Ja[2-]Nein")
/*<206>*/ 	story_flags[780 /* us: 805A9B2D 0x10, jp: 805ACDAD 0x10 */] = true;
/*<207>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_241
          	  case 1:
/*<208>*/ 		printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter. Visiere einen\nGegner durch Drücken von (Z) an und\ndrücke (v), um mich zu rufen und mehr\nüber ihn zu erfahren.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_667() {
/*<209>*/ 	start()
/*<210>*/ 	printf("Ich habe dir etwas zu berichten,\n\x0E\x01\x12\x04\x00\x0BGebieter Link.\n\n\nMeine Analyse des Angriffsmusters\ndieses Gegners ist abgeschlossen.\nSoll ich dir das Ergebnis der Analyse\nmitteilen?[1]Ja[2-]Nein")
/*<211>*/ 	story_flags[781 /* us: 805A9B2D 0x20, jp: 805ACDAD 0x20 */] = true;
/*<212>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_242
          	  case 1:
/*<213>*/ 		printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter. Visiere einen\nGegner durch Drücken von (Z) an und\ndrücke (v), um mich zu rufen und mehr\nüber ihn zu erfahren.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_650() {
/*< 70>*/ 	start()
/*< 72>*/ 	printf("Er kommandiert die Dämonen und\nwird auch <b<Dunkelfürst>> genannt.\nIch stelle fest, dass er äußerst klug\nist und die Kunst der Magie beherrscht.\nIm Normalfall verhält er sich ruhig\nund vornehm, reizt man ihn jedoch\nzu sehr, zeigt er sein wahres Gesicht.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 73>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_87
          	  case 1:
          	}
          }

          void entrypoint_006_668() {
/*<214>*/ 	start()
/*<215>*/ 	printf("Ich habe dir etwas zu berichten,\n\x0E\x01\x12\x04\x00\x0BGebieter Link.\n\n\nMeine Analyse des Angriffsmusters\ndieses Gegners ist abgeschlossen.\nSoll ich dir das Ergebnis der Analyse\nmitteilen?[1]Ja[2-]Nein")
/*<216>*/ 	story_flags[782 /* us: 805A9B2D 0x40, jp: 805ACDAD 0x40 */] = true;
/*<217>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_238:
/*<238>*/ 		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
          		  case 0:
          			flw_116:
/*<116>*/ 			printf("Ghirahim kämpft nun mit voller Kraft.\nEs scheint beinahe unmöglich, ihn mit\ngewöhnlichen Waffen zu verletzen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<120>*/ 			switch (choice(2)) {
          			  case 0:
/*<121>*/ 				printf("\x0E\x01\x12\x04\x00\x01Meiner Analyse zufolge kannst du\nGhirahim durch Angriffe mit dem\nSchwert ein wenig <r<zurückdrängen>>.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<122>*/ 				switch (choice(2)) {
          				  case 0:
/*<123>*/ 					printf("Ghirahim versucht stets, sich im\nInneren der Plattform zu positionieren\nund dich stetig nach außen zu drängen,\n\x0E\x01\x12\x04\x00\x02Gebieter.\nDie Wahrscheinlichkeit, dass er\ndadurch verhindern will, von der\nPlattform zu stürzen, liegt bei 85 %.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<286>*/ 					switch (choice(2)) {
          					  case 0:
/*<287>*/ 						printf("Die Wahrscheinlichkeit, dass Ghirahim\nsich erneut <r<mit der bloßen Hand gegen\ndein Schwert verteidigen wird>>, liegt bei\nexakt 95 %, \x0E\x01\x12\x04\x00\x02Gebieter.\nSollte Ghirahim seine Körperhaltung\nverändern, achte sehr genau auf die\n<r<Position seiner Hand>>.")
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
/*<288>*/ 				printf("Ghirahim kämpft nun mit voller Kraft.\nEs scheint beinahe unmöglich, ihn mit\ngewöhnlichen Waffen zu verletzen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<289>*/ 				switch (choice(2)) {
          				  case 0:
/*<290>*/ 					printf("\x0E\x01\x12\x04\x00\x01Meiner Analyse zufolge kannst du\nGhirahim durch Angriffe mit dem\nSchwert ein wenig <r<zurückdrängen>>.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<291>*/ 					switch (choice(2)) {
          					  case 0:
/*<292>*/ 						printf("Ghirahim versucht stets, sich im\nInneren der Plattform zu positionieren\nund dich stetig nach außen zu drängen,\n\x0E\x01\x12\x04\x00\x02Gebieter.\nDie Wahrscheinlichkeit, dass er\ndadurch verhindern will, von der\nPlattform zu stürzen, liegt bei 85 %.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<293>*/ 						switch (choice(2)) {
          						  case 0:
/*<119>*/ 							printf("Dies sind alle Daten, die ich bisher in\nErfahrung bringen konnte.\n\n\nSollte ich neue Informationen haben,\nteile ich dir dies über das Leuchten\ndeines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner\nAusrüstung oder der aktuellen\nUmgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
          				}
          			}
          		}
          	  case 1:
/*<218>*/ 		printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter. Visiere einen\nGegner durch Drücken von (Z) an und\ndrücke (v), um mich zu rufen und mehr\nüber ihn zu erfahren.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_651() {
/*<115>*/ 	start()
/*<117>*/ 	printf("Im Vergleich zur letzten Begegnung\nmit ihm hat sich sein Aussehen um bis\nzu 90 % verändert.\n\nZudem geht eine schwarze Aura von\nihm aus, die seinen gesamten Körper\numhüllt.\n\n\x0E\x01\x12\x04\x00\x01Ich habe dir etwas zu berichten,\nGebieter. Ein kleiner Moment\nder Unaufmerksamkeit kann in\ndiesem Kampf bereits zu viel sein.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<118>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_238
          	  case 1:
          	}
          }

          void entrypoint_006_669() {
/*<219>*/ 	start()
/*<220>*/ 	printf("Ich habe dir etwas zu berichten,\n\x0E\x01\x12\x04\x00\x0BGebieter Link.\nIch habe Neues über den <b<Todbringer>>\nherausgefunden.\nMöchtest du das Ergebnis meiner\nAnalyse erfahren?[1]Ja[2-]Nein")
/*<221>*/ 	story_flags[783 /* us: 805A9B2D 0x80, jp: 805ACDAD 0x80 */] = true;
/*<222>*/ 	switch (choice(2)) {
          	  case 0:
/*<232>*/ 		printf("In dieser vom Todbringer beherrschten\nWelt steht der <r<Himmelsstrahl >>nicht zur\nVerfügung.[1]Mehr\nDetails[2-]Keine\nDetails")
/*<233>*/ 		switch (choice(2)) {
          		  case 0:
/*<225>*/ 			printf("Ich stelle fest, dass einzig und allein\ndas <y<Master-Schwert>> dem Todbringer\nSchaden zufügen kann.\n\nAlle anderen Waffen haben offenbar\nkeinerlei Wirkung.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<226>*/ 			switch (choice(2)) {
          			  case 0:
/*<227>*/ 				switch (scene_flags[120 /* 0xE 01 */]) {
          				  case 0:
/*<228>*/ 					printf("Der Todbringer nutzt die Energie der\neinschlagenden Blitze, indem er sie in\nseinem Schwert speichert.\n\nAchte darauf, den Todbringer in\ndiesem Fall nicht anzugreifen, da\neine Berührung mit seinem Schwert\ndich lähmen kann, \x0E\x01\x12\x04\x00\x02Gebieter.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<230>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_229:
/*<229>*/ 						printf("Ich bin noch damit beschäftigt, die\nDaten einzuordnen und benötige dafür\nnoch ein wenig mehr Zeit.\n\nWarte eine Zeit lang, visiere dann den\nTodbringer durch Drücken von (Z) an\nund drücke (v), um mich zu rufen.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
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
/*<223>*/ 		printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter. Visiere einen\nGegner durch Drücken von (Z) an und\ndrücke (v), um mich zu rufen und mehr\nüber ihn zu erfahren.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

