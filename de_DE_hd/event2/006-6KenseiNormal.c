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
/*< 90>*/ 	printf("Ich habe keine genauen Daten zu dieser Bestie.\n\n\n\nIch kann jedoch feststellen, dass ihre Aura mächtiger\nist als die der Monster, denen du begegnet bist.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 91>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_239:
/*<239>*/ 		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
          		  case 0:
          			flw_89:
/*< 89>*/ 			printf("Auf dem Kopf der Bestie befindet sich der <r<Siegelstein>>,\nder zuvor am Grund des<b< Siegelhains >>platziert war.\n\n\nDu kannst dem Monster Schaden zufügen, indem du\ndiesen Siegelstein in seinen Kopf rammst.\n\n\nGreife erst\x0E\x01\x12\x04\x00\x02 seine Füße an, um den Verbannten zu Fall\nzu bringen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 93>*/ 			switch (choice(2)) {
          			  case 0:
/*< 94>*/ 				printf("Du kannst seine Bewegungen stoppen, indem du alle\nZehen an seinen Füßen abschlägst.\n\n\nVersuche, mit Hilfe der Windströme vor die Bestie\nzu gelangen. Ich rate davon ab, die Bestie zu Fuß zu\nverfolgen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 95>*/ 				switch (choice(2)) {
          				  case 0:
/*< 96>*/ 					printf("Wenn du dich gut vor seinen Zehen positioniert hast,\nnutze am besten die <g<Wirbelattacke>>, um mit einem\nSchlag möglichst viel Schaden anzurichten.\n\nEine andere Möglichkeit ist es, den Verbannten aus\nsicherer Entfernung heraus mit <y<Bomben >>anzugreifen.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<256>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_89
          			  case 1:
/*< 92>*/ 				printf("Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_653() {
/*< 97>*/ 	start()
/*< 99>*/ 	printf("Ich habe keine genauen Daten zu dieser Bestie.\n\n\n\nIch stelle jedoch fest, dass die Bestie nun über etwas\nverfügt, das wie zwei Hände aussieht.\n\n\nDas Monster scheint nun noch stärker zu sein als bei\nder letzten Begegnung mit ihm.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<100>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_240:
/*<240>*/ 		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
          		  case 0:
          			flw_98:
/*< 98>*/ 			printf("Ich rate dir, dasselbe Angriffsmuster wie\nbeim letzten Kampf anzuwenden.\n\n\nEs ist auch möglich, die Finger der Bestie\nabzuschneiden, doch ich gehe davon aus,\ndass daraus nur geringer Vorteil entsteht.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<102>*/ 			switch (choice(2)) {
          			  case 0:
/*<103>*/ 				printf("Die Wahrscheinlichkeit, dass <b<Bados >>Apparatur der\nBestie großen Schaden zufügen kann, liegt bei 100 %.\n\n\nEs ist möglich, die Bewegungen der Bestie damit\nkurzzeitig aufzuhalten, um Zeit für den Angriff\nzu gewinnen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<104>*/ 				switch (choice(2)) {
          				  case 0:
/*<105>*/ 					printf("Neige \x0E\x02\x04\x02\xECD, um die Position von <b<Bados >>Katapult\nzu ändern.\n\n\nSollte sich die Bestie in einem toten Winkel befinden,\nändere die Position von Bados Katapult.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<257>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_98
          			  case 1:
/*<101>*/ 				printf("Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_601() {
/*<294>*/ 	start()
/*<297>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<295>*/ 		printf("Ein kleines Tier, das im <b<Wolkenhort >>lebt. Nun, da sich\n<b<Morsego>> in einen Menschen verwandelt hat, wird es\nnachts nicht mehr aggressiv.")
          	  case 1:
/*<296>*/ 		printf("Dieses kleine Tier, das im <b<Wolkenhort >>lebt,\nist tagsüber stets friedlich und zutraulich,\nnachts jedoch eine wilde Bestie.")
          	}
          }

          void entrypoint_006_654() {
/*<106>*/ 	start()
/*<108>*/ 	printf("Dieses Wesen fungiert als Seelengefäß für den\n<b<Todbringer>>. Genauere Daten sind mir nicht bekannt.\n\n\nDes Weiteren scheint sich ein schwanzähnlicher Teil\ngebildet zu haben, der zuvor nicht vorhanden war.\n\n\nIch empfehle dir, <b<Bados>> Katapult zu deinem Vorteil\neinzusetzen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<109>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_241:
/*<241>*/ 		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
          		  case 0:
          			flw_107:
/*<107>*/ 			printf("Ich rate dir, dasselbe Angriffsmuster wie beim letzten\nKampf anzuwenden.\n\n\nEs ist auch möglich, die Finger oder Zehen der Bestie\nabzuschneiden.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<111>*/ 			switch (choice(2)) {
          			  case 0:
/*<112>*/ 				printf("Solltest du die Bestie zu Fall gebracht haben,\nist es möglich, dass ihr Körper den Weg zum\n<r<Siegelstein>> blockiert.\n\nSpringe in diesem Fall eine Ebene nach unten und\nnutze einen der Windströme, um zu seinem Kopf\nzu gelangen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<113>*/ 				switch (choice(2)) {
          				  case 0:
/*<114>*/ 					printf("Aufgrund der enormen Kraft der Bestie reicht dein\nSchwert allein nicht aus, um sie zu besiegen.\n\n\n<r<Steige selbst >>in Bados Katapult und bereite dem\nMonster ein Ende, mein \x0E\x01\x12\x04\x00\x02Gebieter.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<258>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_107
          			  case 1:
/*<110>*/ 				printf("Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_689() {
/*<124>*/ 	start()
/*<126>*/ 	printf("Verglichen mit der letzten Begegnung mit ihm hat\nsich seine Erscheinung zu 90 % verändert.\n\n\nZudem geht eine schwarze Aura von ihm aus,\ndie seinen gesamten Körper umhüllt.\n\n\nEr ist verwundet und hat nun seine Kampfstrategie\nverändert.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<127>*/ 	switch (choice(2)) {
          	  case 0:
/*<243>*/ 		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
          		  case 0:
          			flw_125:
/*<125>*/ 			printf("Die <r<Wunde in seiner Brust >>aus dem vorherigen Kampf\nist Ghirahims Schwachstelle.\n\n\nDie Wahrscheinlichkeit, dass er alle Angriffe auf diese\nStelle abwehrt, liegt im normalen Zustand bei 100 %.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<129>*/ 			switch (choice(2)) {
          			  case 0:
/*<130>*/ 				printf("Es ist möglich, Ghirahims Schwert, das die <r<Wunde in\nseiner Brust >>schützt, zur Seite zu schlagen, \x0E\x01\x12\x04\x00\x02Gebieter.\n\n\nIch empfehle, den richtigen Moment abzuwarten und\ndann unmittelbar zum Angriff überzugehen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<131>*/ 				switch (choice(2)) {
          				  case 0:
/*<132>*/ 					printf("Meiner Analyse zufolge ist es nicht möglich,\nGhirahims Schwert mit nur einem einzigen\nAngriff zur Seite zu schlagen.\n\nIch empfehle, <r<mehrere Angriffe in dieselbe Richtung\n>>auszuführen, um sein Schwert zur Seite zu schlagen.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<254>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_125
          			  case 1:
/*<128>*/ 				printf("Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_602() {
/*<298>*/ 	start()
/*<299>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<301>*/ 		printf("Ein kleines Tier, das im <b<Wolkenhort >>lebt. Nun, da sich\n<b<Morsego>> in einen Menschen verwandelt hat, wird es\nnachts nicht mehr aggressiv.")
          	  case 1:
/*<300>*/ 		printf("Tagsüber ist dieses Tier zutraulich und friedlich,\nnachts wird es jedoch zur wilden Bestie. Lasse dich\nnicht von seinem Äußeren täuschen.")
          	}
          }

          void entrypoint_006_655() {
/*<144>*/ 	start()
/*<145>*/ 	printf("Dieses Wesen gilt als die Quelle des Bösen, das die\nZeit überdauert und bis heute fortbestanden hat.\n\n\nUralte Legenden besagen, dass seine Erscheinung\nje nach Betrachter stark variiert und die Zeit sein\nAussehen mitgeprägt hat.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<146>*/ 	switch (choice(2)) {
          	  case 0:
/*<234>*/ 		printf("In dieser vom Todbringer beherrschten Welt steht der\n<r<Himmelsstrahl >>nicht zur Verfügung.[1]Mehr\nDetails[2-]Keine\nDetails")
/*<235>*/ 		switch (choice(2)) {
          		  case 0:
/*<148>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 124}) {
          			  case 0:
/*<260>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_151:
/*<151>*/ 					printf("Die Chance, dass einmalige Angriffe dem Todbringer\nSchaden zufügen können, liegt bei 0 %, \x0E\x01\x12\x04\x00\x02Gebieter.\n\n\nUm die starke Abwehr des Todbringers durchbrechen\nzu können, musst du ihn <r<mehrmals aus jeweils\nverschiedenen Richtungen angreifen>>.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<152>*/ 					switch (choice(2)) {
          					  case 0:
/*<153>*/ 						printf("Meiner Analyse zufolge kann der Todbringer\nangegriffen werden, sobald er sein Schwert in\ndie Höhe hält.\n\nAngriffe, die zu nahe am Schwert des Todbringers\nausgeführt werden, wehrt er jedoch zu 100 % ab.\n<pause0F>Sei vorsichtig.")
          					  case 1:
          					}
          				  case 1:
/*<149>*/ 					printf("Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
          				}
          			  case 1:
          				flw_147:
/*<147>*/ 				printf("Ich stelle fest, dass einzig und allein das <y<Master-\nSchwert>> dem Todbringer Schaden zufügen kann.\n\n\nAlle anderen Waffen haben offenbar keinerlei\nWirkung.\n[1]Mehr\nDetails[2-]Keine\nDetails")
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
/*<134>*/ 	printf("Verglichen mit der letzten Begegnung mit ihm\nhat sich seine Erscheinung zu 90 % verändert.\n\n\nZudem geht eine schwarze Aura von ihm aus,\ndie seinen gesamten Körper umhüllt.\n\n\nIch stelle fest, dass er eine bisher unbekannte\nWaffe einsetzt.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<135>*/ 	switch (choice(2)) {
          	  case 0:
/*<244>*/ 		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
          		  case 0:
          			flw_137:
/*<137>*/ 			printf("Meiner Analyse zufolge kannst du Ghirahims Schwert\nmit gezielten Angriffen <r<zerbrechen>>, \x0E\x01\x12\x04\x00\x02Gebieter.\n\n\nGhirahim nutzt seine Magie, um das Schwert\nzu erzeugen.\n\n\nDa Ghirahim stark verwundet ist, sollte sein Schwert\nnicht mehr allzu widerstandsfähig sein.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<138>*/ 			switch (choice(2)) {
          			  case 0:
/*<139>*/ 				printf("Vom Zentrum von Ghirahims Schwert geht dieselbe\nEnergie aus wie von seinem <r<Herzkern>>.\n\n\nSollte es dir gelingen, den <r<Kern seines Schwerts\n>>zu zerstören, kannst du auch das Schwert selbst\nzerstören.\n\nAchte auf die Bewegungen seines Schwerts und greife\nwiederholt <r<dieselbe Stelle >>an.")
          			  case 1:
          			}
          		  case 1:
/*<255>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_137
          			  case 1:
/*<136>*/ 				printf("Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_656() {
/*<161>*/ 	start()
/*<163>*/ 	printf("Dieses Wesen gilt als die Quelle des Bösen, das die\nZeit überdauert und bis heute fortbestanden hat.\n\n\nUralte Legenden besagen, dass seine Erscheinung\nje nach Betrachter stark variiert und die Zeit sein\nAussehen mitgeprägt hat.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<162>*/ 	switch (choice(2)) {
          	  case 0:
/*<236>*/ 		printf("In dieser vom Todbringer beherrschten Welt steht der\n<r<Himmelsstrahl >>nicht zur Verfügung.[1]Mehr\nDetails[2-]Keine\nDetails")
/*<224>*/ 		scene_flags[10 'Sealed Grounds'][120 /* 0xE 01 */] = true;
/*<237>*/ 		switch (choice(2)) {
          		  case 0:
/*<155>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 132}) {
          			  case 0:
/*<259>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_154:
/*<154>*/ 					printf("Es ist möglich, ebenfalls auf die elektrische Energie\ndes Todbringers zurückzugreifen, \x0E\x01\x12\x04\x00\x02mein Gebieter.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<157>*/ 					switch (choice(2)) {
          					  case 0:
/*<158>*/ 						printf("Du kannst die Blitzenergie in deinem <y<Master-Schwert\n>>konservieren und <r<anstelle des Himmelsstrahls\n>>einsetzen.\n\nWenn du in der Ferne einen Blitz siehst und der\nHimmel leuchtet, hebe dein Schwert gen Himmel.\n\n\nAchte jedoch darauf, dass du dabei nicht gelähmt\nwirst, da dies zur Folge hätte, dass du dem Todbringer\nschutzlos ausgeliefert bist.")
          					  case 1:
          					}
          				  case 1:
/*<159>*/ 					printf("Der Todbringer kann sein Schwert mit elektrischer\nEnergie aufladen, die er im Kampf einsetzt.\n\n\nTriffst du es im aufgeladenen Zustand, lähmt die\nElektrizität deinen Körper, \x0E\x01\x12\x04\x00\x02mein Gebieter.<pause0F>\n\n\nAchte beim Angriff auf den richtigen Zeitpunkt und\nsei höchst vorsichtig.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<160>*/ 					switch (choice(2)) {
          					  case 0:
/*<156>*/ 						printf("Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
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
/*<  5>*/ 	printf("Dieser gewaltige Parasit, den man auch\n\x201ERiesenparasit\x201C nennt, hat <b<Narisha >>befallen.\n\n\nEr kontrolliert seinen Wirt vollständig und steuert\nihn nach seinem Willen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<  6>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_242:
/*<242>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<  8>*/ 			printf("Meiner Analyse zufolge kannst du die Schleimbälle,\ndie <b<Baras Baras >>auf dich ausspuckt, mit deinem\nSchwert <r<zurückschleudern>>, \x0E\x01\x12\x04\x00\x02Gebieter.\n\nBeobachte seine Bewegungen, um ihn mit den\nSchleimbällen zu treffen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<  9>*/ 			switch (choice(2)) {
          			  case 0:
/*< 10>*/ 				printf("Seine Schwachstelle ist der <r<Augapfel >>im Zentrum.\n\n\n\nEr schützt ihn mit seinen <r<Flossen>>, doch Angriffe\nschaden ihm nur, wenn sein <r<Augapfel>> ungeschützt ist.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 11>*/ 				switch (choice(2)) {
          				  case 0:
/*< 12>*/ 					printf("Achte auf den Winkel deines Schlages,\nwenn du die Schleimbälle von Baras Baras\nauf ihn zurückschleuderst.\n\nSchwinge dein Schwert von links oder rechts,<pause0F>\noder führe einen Vertikalschlag aus, um ihn\nfrontal zu treffen.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<  7>*/ 			printf("Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_657() {
/*<164>*/ 	start()
/*<165>*/ 	printf("Ich habe dir etwas zu berichten,\n\x0E\x01\x12\x04\x00\x0BGebieter Link.\n\n\nMeine Analyse des Angriffsmusters dieses Gegners\nist abgeschlossen.\n\n\nVisiere den Gegner durch Drücken von (Z) an und\nrufe mich, indem du (v) drückst, um mehr über\ndiesen Gegner zu erfahren.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD\nMöchtest du dies nun tun?[1]Ja[2-]Nein")
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
/*< 53>*/ 					printf("Meiner Analyse zufolge reiht Ghirahim die Dolche,\ndie er auf dich abfeuert, in unterschiedlichen\nFormationen an.\n\nEs ist also möglich, sie alle mit einem einzigen\ngezielten Schlag wieder auf ihn zurückzuschleudern.\n\n\nIch schätze dies jedoch als sehr riskant\nein.[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 58>*/ 					switch (choice(2)) {
          					  case 0:
/*< 59>*/ 						printf("Ghirahim beherrscht die Kunst der Teleportation.\n\n\n\nMeiner Analyse zufolge harrt er jedoch direkt nach\nder Teleportation stets für einen kurzen Moment\nlang aus.\n\nDies ist eine sehr gute Gelegenheit, ihn anzugreifen.\nAchte dabei jedoch auf das Schwert, das er zu seinem\nSchutz bereithält.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 60>*/ 						switch (choice(2)) {
          						  case 0:
/*< 61>*/ 							printf("Ghirahim wird versuchen, deinem Angriff seitlich\nauszuweichen und einen Gegenangriff auszuführen,\n\x0E\x01\x12\x04\x00\x02mein Gebieter.\n\nIn diesem Fall musst du versuchen, sofort <r<in die\nRichtung zu schlagen>>, aus der Ghirahim dich angreift.\n\n\n\x0E\x01\x12\x04\x00\x02Gebieter, achte stets auf Ghirahims Körperhaltung\nvor dem Ausweichen, um zu erahnen, in welche\nRichtung er ausweicht.\n\nWenn du Probleme mit dem Timing hast, versuche\nGhirahim mit einer <g<Wirbelattacke>> Schaden zuzufügen.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<140>*/ 					printf("Ich stelle fest, dass Ghirahim seine Kampfstrategie\nim Laufe des Kampfes geändert hat.\n\n\nIch gehe davon aus, dass dies aufgrund des Schadens,\nden er erlitten hat, geschehen ist.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<141>*/ 					switch (choice(2)) {
          					  case 0:
/*< 57>*/ 						printf("Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
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
/*< 62>*/ 					printf("Er scheint sehr überzeugt von seiner Stärke zu sein.\n\x0E\x01\x12\x04\x00\x02Achte jedoch auf seine <r<rechte Hand>>, mit der er\nversucht, dein Schwert festzuhalten, \x0E\x01\x12\x04\x00\x02Gebieter.\n\nGhirahim beobachtet, <r<wie du dein Schwert hältst >>und\nbereitet sich so auf deinen Angriff vor.\n\n\nIch empfehle dir, ihn zu täuschen und aus der\nentgegengesetzten Richtung anzugreifen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 65>*/ 					switch (choice(2)) {
          					  case 0:
/*< 66>*/ 						printf("Hält er dein Schwert fest, achte auf die <r<Stellung von\nGhirahims Fingern >>und schwinge dein Schwert sofort\nin die <r<entgegengesetzte Richtung>>.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 67>*/ 						switch (choice(2)) {
          						  case 0:
/*< 68>*/ 							printf("Die Finger, mit denen Ghirahim dein Schwert festhält,\nzeigen meiner Daten zufolge stets nach oben,\n\x0E\x01\x12\x04\x00\x01mein Gebieter.\n\nDie Wahrscheinlichkeit, dass du seinem Block durch\neinen <r<Schwertstreich nach oben >>entgehen kannst,\nliegt bei 100 %.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<284>*/ 					printf("Er scheint sehr überzeugt von seiner Stärke zu sein.\n\x0E\x01\x12\x04\x00\x02Achte jedoch auf seine <r<rechte Hand>>, mit der er\nversucht, dein Schwert festzuhalten, \x0E\x01\x12\x04\x00\x02Gebieter.\n\nGhirahim beobachtet, <r<wie du dein Schwert hältst >>und\nbereitet sich so auf deinen Angriff vor.\n\n\nIch empfehle dir, ihn zu täuschen und aus der\nentgegengesetzten Richtung anzugreifen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<285>*/ 					switch (choice(2)) {
          					  case 0:
/*< 64>*/ 						printf("Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
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
/*<168>*/ 		printf("Ich habe verstanden, \x0E\x01\x12\x04\x00\x05Gebieter. Rufe mich, wenn du\ndas Ergebnis meiner Analyse erfahren möchtest.")
          	}
          }

          void entrypoint_006_658() {
/*<169>*/ 	start()
/*<170>*/ 	printf("Ich habe dir etwas zu berichten,\n\x0E\x01\x12\x04\x00\x0BGebieter Link.\n\n\nMeine Analyse des Angriffsmusters dieses Gegners\nist abgeschlossen.\n\n\nVisiere den Gegner durch Drücken von (Z) an und\nrufe mich, indem du (v) drückst, um mehr über\ndiesen Gegner zu erfahren.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD\nMöchtest du dies nun tun?[1]Ja[2-]Nein")
/*<171>*/ 	story_flags[773 /* us: 805A9B2A 0x20, jp: 805ACDAA 0x20 */] = true;
/*<172>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_231:
/*<231>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
          			flw_34:
/*< 34>*/ 			printf("Die Wahrscheinlichkeit, seinen von Felsen\nüberzogenen Körper mit dem Schwert zu\nverletzen, liegt bei 0 %.\n\nNutze etwas, das eine höhere Zerstörungskraft besitzt.[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 38>*/ 			switch (choice(2)) {
          			  case 0:
/*< 39>*/ 				printf("Schluckt Beradama eine <y<Bombe>>, so wird er mit einer\nWahrscheinlichkeit von 100 % explodieren.\n\n\nExplosionen, die nur seine Außenhülle treffen,\nschüren bloß seinen Zorn.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 40>*/ 				switch (choice(2)) {
          				  case 0:
/*< 41>*/ 					printf("Meiner Analyse zufolge können die Felsen auf\nBeradamas Körper von innen heraus weggesprengt\nwerden.\n\nVersuche, <r<eine Bombe in seinen Schlund zu werfen>>,\nwenn er Luft holt, um einen Glutball abzufeuern.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<247>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_34
          			  case 1:
/*< 37>*/ 				printf("Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
          			}
          		}
          	  case 1:
/*<173>*/ 		printf("Ich habe verstanden, \x0E\x01\x12\x04\x00\x05Gebieter. Rufe mich, wenn du\ndas Ergebnis meiner Analyse erfahren möchtest.")
          	}
          }

          void entrypoint_006_659() {
/*<174>*/ 	start()
/*<175>*/ 	printf("Ich habe dir etwas zu berichten,\n\x0E\x01\x12\x04\x00\x0BGebieter Link.\n\n\nMeine Analyse des Angriffsmusters dieses Gegners\nist abgeschlossen.\n\n\nVisiere den Gegner durch Drücken von (Z) an und\nrufe mich, indem du (v) drückst, um mehr über\ndiesen Gegner zu erfahren.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD\nMöchtest du dies nun tun?[1]Ja[2-]Nein")
/*<176>*/ 	story_flags[774 /* us: 805A9B2A 0x40, jp: 805ACDAA 0x40 */] = true;
/*<177>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_17:
/*< 17>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 10}) {
          		  case 0:
/*<245>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				flw_14:
/*< 14>*/ 				printf("Seine großen Scheren sind seine <r<Schwachpunkte>>,\nzugleich jedoch auch seine gefährlichsten Waffen.\n\n\nAchte auf die Neigung seiner Scheren, um ihm im\nrichtigen Moment Schaden zuzufügen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 19>*/ 				switch (choice(2)) {
          				  case 0:
/*< 20>*/ 					printf("Sollte Moldoghad verwundet werden, zieht er sich\nzurück und vergräbt sich im Sand.\n\n\nIn diesem Zustand wird er versuchen, dich aus seinem\nVersteck heraus mit dem Schwanz zu attackieren.\n\n\nDieser Angriff hat eine Gefahrenrate von 85 %.\n\n\n\nDu kannst den Sand, unter dem er sich versteckt,\n<r<wegpusten>>, um Moldoghad aus seinem Versteck\nhervorzulocken.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 21>*/ 					switch (choice(2)) {
          					  case 0:
/*< 22>*/ 						printf("Meiner Analyse zufolge entblößt er seinen wahren\nSchwachpunkt, das <r<zentrale Auge>>, sobald seine\nScheren zerstört sind.\n\nDas <r<Auge>> ist jedoch von einer harten Panzerschicht\numgeben. Schläge von der Seite oder von oben sind\nmeinen Daten zufolge wirkungslos.")
          					  case 1:
          					}
          				  case 1:
          				}
          			  case 1:
/*< 18>*/ 				printf("Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
          			}
          		  case 1:
          			goto flw_14
          		  case 2:
          			goto flw_14
          		  case 3:
          			goto flw_14
          		}
          	  case 1:
/*<178>*/ 		printf("Ich habe verstanden, \x0E\x01\x12\x04\x00\x05Gebieter. Rufe mich, wenn du\ndas Ergebnis meiner Analyse erfahren möchtest.")
          	}
          }

          void entrypoint_006_677() {
/*< 42>*/ 	start()
/*< 44>*/ 	printf("Sein Beiname \x201EUraltes Meeresgrauen\x201C lässt darauf\nschließen, dass Daidagos einst der Herrscher über\ndie Gezeiten war.\n\nSeine dicken <r<Tentakel>> können zwar durchtrennt\nwerden, heilen sich jedoch nach kurzer Zeit von selbst.\n[1]Mehr\nDetails[2-]Keine\nDetails")
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
/*<261>*/ 					printf("Um Daidagos' <r<Auge>> zu erreichen, ist es notwendig,\ndie zahlreichen Tentakel zu durchtrennen, mit denen\ner dich attackiert.\n\nMeiner Analyse zufolge sind die Tentakel an ihrer\nSpitze am leichtesten zu durchtrennen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<264>*/ 					switch (choice(2)) {
          					  case 0:
/*<265>*/ 						printf("Daidagos attackiert dich mit seinen zahlreichen\nTentakeln in sehr kurzen Zeitabständen.\n\n\nEs wäre gefährlich zu versuchen, jedes der Tentakel\neinzeln zu durchtrennen.\n\n\nGreife unentwegt an und versuche, mit deinen\nSchwertschlägen so viele wie möglich zur gleichen\nZeit zu treffen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<266>*/ 						switch (choice(2)) {
          						  case 0:
/*<267>*/ 							printf("Es besteht die Möglichkeit, durch das Durchtrennen\nvon Tentakeln <r<Herzen >>oder <r<Pfeile>> zu erhalten.\n\n\nSollten deine Herzen oder Pfeile knapp werden,\ndurchtrenne so viele Tentakel wie möglich,\nanstatt überhastet die Flucht anzutreten.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<263>*/ 					printf("Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
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
/*< 43>*/ 					printf("Meiner Analyse zufolge zeigt sich Daidagos,\nnachdem eine gewisse Anzahl seiner Tentakel\ndurchtrennt wurde, \x0E\x01\x12\x04\x00\x02Gebieter.\n\nDie Wahrscheinlichkeit, dass die Tentakel, die dir\ninnerhalb des Schiffes den Weg blockiert haben,\nvon Daidagos stammen, ist 99 %.\n\nDie <r<heilige Kraft >>scheint meinen Daten zufolge am\ngeeignetsten zu sein, um sie zu durchtrennen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 48>*/ 					switch (choice(2)) {
          					  case 0:
/*< 49>*/ 						printf("Meiner Analyse zufolge können seine Tentakel\ndurch die heilige Kraft des <r<Himmelsstrahls\n>>durchtrennt werden.\n\nDie eigentliche Schwäche von Daidagos ist sein <r<Auge>>,\ndoch der Himmelsstrahl reicht meinen Daten zufolge\nnicht so weit.\n\nNutze eine Waffe, die über eine noch längere\nReichweite als dein Schwert verfügt.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 50>*/ 						switch (choice(2)) {
          						  case 0:
/*< 51>*/ 							printf("Nutze den<y< Bogen >>um Daidagos' große Schwachstelle,\nsein <r<Auge>>, zu treffen.\n\n\nDu kannst dich durch Neigen von \x0E\x02\x04\x02\x8CD bewegen,\nwährend du den <y<Bogen >>bereithältst.\n\n\nWeiche so den Angriffen von Daidagos aus und\nfeuere dann einen <r<Pfeil>> ab.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*< 47>*/ 					printf("Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
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
/*<180>*/ 	printf("Ich habe dir etwas zu berichten,\n\x0E\x01\x12\x04\x00\x0BGebieter Link.\n\n\nMeine Analyse des Angriffsmusters dieses Gegners ist\nabgeschlossen. Soll ich dir das Ergebnis der Analyse\nmitteilen?[1]Ja[2-]Nein")
/*<181>*/ 	story_flags[775 /* us: 805A9B2A 0x80, jp: 805ACDAA 0x80 */] = true;
/*<182>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_27:
/*< 27>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 20}) {
          		  case 0:
/*<246>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				flw_24:
/*< 24>*/ 				printf("Zerstörst du das <r<kugelförmige rote Element>> an einem\nseiner Arme, fällt dieser Arm ab und Da Ilohm\nbricht auseinander.\n\nDiese Elemente sind jedoch unter den Schutzplatten\nan seinem Unterarm verborgen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 29>*/ 				switch (choice(2)) {
          				  case 0:
/*< 30>*/ 					printf("Die <r<kugelförmigen roten Elemente>> in seinen Armen\nliegen nur frei, wenn Da Ilohm seinen Arm zum\nAngriff ausstreckt.\n\nWeiche seinem Schlag aus und reagiere blitzschnell\nmit einem Gegenangriff.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 31>*/ 					switch (choice(2)) {
          					  case 0:
/*< 32>*/ 						printf("Ich empfehle dir, die <r<kugelförmigen roten Elemente\n>>an seinen Armen mit deiner <y<Peitsche>> zu lösen.\n\n\nVerliert Da Ilohm seine Arme, wird seine <r<Herzsphäre\n>>angreifbar.\n\n\nDa die <r<Herzsphäre>> nicht mit der <y<Peitsche >>herausgelöst\nwerden kann, musst du einen anderen Weg finden,\nsie zu zerstören.")
          					  case 1:
          					}
          				  case 1:
          				}
          			  case 1:
/*< 28>*/ 				printf("Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
          			}
          		  case 1:
          			goto flw_24
          		  case 2:
          			goto flw_24
          		  case 3:
          			goto flw_24
          		}
          	  case 1:
/*<183>*/ 		printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter. Visiere einen Gegner durch\nDrücken von (Z) an und drücke (v), um mich zu\nrufen und mehr über ihn zu erfahren.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_661() {
/*<184>*/ 	start()
/*<185>*/ 	printf("Ich habe dir etwas zu berichten,\n\x0E\x01\x12\x04\x00\x0BGebieter Link.\n\n\nMeine Analyse des Angriffsmusters dieses Gegners ist\nabgeschlossen. Soll ich dir das Ergebnis der Analyse\nmitteilen?[1]Ja[2-]Nein")
/*<186>*/ 	story_flags[776 /* us: 805A9B2D 0x01, jp: 805ACDAD 0x01 */] = true;
/*<187>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_268
          	  case 1:
/*<188>*/ 		printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter. Visiere einen Gegner durch\nDrücken von (Z) an und drücke (v), um mich zu\nrufen und mehr über ihn zu erfahren.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_610() {
/*< 13>*/ 	start()
/*< 15>*/ 	printf("Der \x201Edunkle Äonenskorpion\x201C, wie dieses Wesen\nauch genannt wird, ist ein 1000 Jahre alter und\nausgewachsener <b<Minighad>>.\n\nSein Körper ist zu 90 % von einer Panzerschicht\nüberzogen, die jegliche Schwertangriffe abwehrt.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 16>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_17
          	  case 1:
          	}
          }

          void entrypoint_006_662() {
/*<189>*/ 	start()
/*<190>*/ 	printf("Ich habe dir etwas zu berichten,\n\x0E\x01\x12\x04\x00\x0BGebieter Link.\n\n\nMeine Analyse des Angriffsmusters dieses Gegners ist\nabgeschlossen. Soll ich dir das Ergebnis der Analyse\nmitteilen?[1]Ja[2-]Nein")
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
/*< 71>*/ 					printf("Sollte Ghirahim seine Dolche auf dich abfeuern,\nkannst du sie sofort auf ihn zurückschleudern,\nindem du sie mit dem Schwert triffst.\n\nDabei ist es entscheidend, deinen Schwertschlag\nentsprechend der Richtung der Dolche auszuführen.\n\n\nSolltest du von Dolchen eingekreist werden,\nführe eine Technik aus, mit der du gleichzeitig\neinen <r<Angriff in alle Richtungen >>ausführen kannst.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 76>*/ 					switch (choice(2)) {
          					  case 0:
/*< 77>*/ 						printf("Solltest du es schaffen, Ghirahims Teleportations-\nAngriff auszuweichen, ergibt sich eine sehr gute\nMöglichkeit zum Konter.\n\nGhirahim führt verschiedene Arten des\nTeleportations-Angriffes aus, doch der Kopfangriff\nkündigt sich durch eine bestimmte Körperhaltung an.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 78>*/ 						switch (choice(2)) {
          						  case 0:
/*< 79>*/ 							printf("\x0E\x01\x12\x04\x00\x01Ghirahim wird versuchen, deinen Angriff abzuwehren,\nwozu er seine Waffen nutzt.\n\n\n\x0E\x01\x12\x04\x00\x02Da er zwei Schwerter trägt, kann er mit einer\nWahrscheinlichkeit von 100 % zwei deiner Angriffe\nin Folge parieren.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<142>*/ 					printf("Ich stelle fest, dass Ghirahim seine Kampfstrategie im\nLaufe des Kampfes geändert hat.\n\n\nIch gehe davon aus, dass dies aufgrund des Schadens,\nden er erlitten hat, geschehen ist.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<143>*/ 					switch (choice(2)) {
          					  case 0:
/*< 75>*/ 						printf("Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
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
/*< 80>*/ 					printf("Die Dolche, welche Ghirahim umgeben, dienen ihm\nals Schutz.\n\n\nZuerst die Dolche anzugreifen, um Ghirahims Abwehr\nzu schwächen, ist eine mögliche Methode, um siegreich\naus diesem Kampf hervorzugehen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 83>*/ 					switch (choice(2)) {
          					  case 0:
/*< 84>*/ 						printf("Ghirahim wird versuchen, dein Schwert mit seiner\nrechten Hand abzufangen und festzuhalten,\n\x0E\x01\x12\x04\x00\x02mein Gebieter.\n\nGeschieht dies, schwinge das Schwert <r<nach oben und\nunten>>, um dich wieder freizukämpfen.\n\n\nGhirahim ist jedoch sehr mächtig, weshalb es nicht\nausreicht, nur einen einzigen Schwung auszuführen,\num dich zu befreien.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 85>*/ 						switch (choice(2)) {
          						  case 0:
/*< 86>*/ 							printf("Ich empfehle, Ghirahim so zu attackieren,\ndass die Dolche und seine rechte Hand\ndeinen Angriff nicht behindern.\n\nGhirahim bewegt seine rechte Hand synchron\nzur Bewegung deines Schwerts, \x0E\x01\x12\x04\x00\x02mein Gebieter.\n\n\nEs kommt jedoch auch vor, dass Ghirahim seine\nBewegung <r<ein wenig verzögert >>ausführt.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*< 82>*/ 					printf("Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
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
/*<193>*/ 		printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter. Visiere einen Gegner durch\nDrücken von (Z) an und drücke (v), um mich zu\nrufen und mehr über ihn zu erfahren.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_663() {
/*<194>*/ 	start()
/*<195>*/ 	printf("Ich habe dir etwas zu berichten,\n\x0E\x01\x12\x04\x00\x0BGebieter Link.\n\n\nMeine Analyse des Angriffsmusters dieses Gegners ist\nabgeschlossen. Soll ich dir das Ergebnis der Analyse\nmitteilen?[1]Ja[2-]Nein")
/*<196>*/ 	story_flags[778 /* us: 805A9B2D 0x04, jp: 805ACDAD 0x04 */] = true;
/*<197>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_239
          	  case 1:
/*<198>*/ 		printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter. Visiere einen Gegner durch\nDrücken von (Z) an und drücke (v), um mich zu\nrufen und mehr über ihn zu erfahren.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_664() {
/*<199>*/ 	start()
/*<200>*/ 	printf("Ich habe dir etwas zu berichten,\n\x0E\x01\x12\x04\x00\x0BGebieter Link.\n\n\nMeine Analyse des Angriffsmusters dieses Gegners ist\nabgeschlossen. Soll ich dir das Ergebnis der Analyse\nmitteilen?[1]Ja[2-]Nein")
/*<201>*/ 	story_flags[779 /* us: 805A9B2D 0x08, jp: 805ACDAD 0x08 */] = true;
/*<202>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_240
          	  case 1:
/*<203>*/ 		printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter. Visiere einen Gegner durch\nDrücken von (Z) an und drücke (v), um mich zu\nrufen und mehr über ihn zu erfahren.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_699() {
/*<270>*/ 	start()
/*<271>*/ 	switch (story_flags[844 /* us: 805A9B35 0x08, jp: 805ACDB5 0x08 */]) {
          	  case 0:
/*<273>*/ 		printf("Diese überdimensional große Spinne lebt in den\nTiefen des Waldes und spinnt enorm lange Fäden.\n\n\nSie fängt ihre Beute in ihrem Netz und greift sie\ndanach an. Ihr Rücken ist gepanzert, ihr Bauch\njedoch ist sehr empfindlich.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<275>*/ 		switch (choice(2)) {
          		  case 0:
/*<281>*/ 			switch (story_flags[845 /* us: 805A9B35 0x10, jp: 805ACDB5 0x10 */]) {
          			  case 0:
/*<283>*/ 				printf("Um ihren wunden Punkt zu verbergen, wendet sie\nihrem Feind stets den Rücken zu.\n\n\nDu musst versuchen, die Skulltula umzudrehen,\num ihren Bauch treffen zu können.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<276>*/ 				switch (choice(2)) {
          				  case 0:
/*<277>*/ 					printf("Nur eine einzige Stelle im Zentrum des Bauches\nist verwundbar. Ich empfehle dir, den <g<Fangstoß\neinzusetzen>>.")
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
/*<282>*/ 				printf("Um ihren wunden Punkt zu verbergen, wendet sie\nihrem Feind stets den Rücken zu.\n\n\nDu musst versuchen, die Skulltula umzudrehen,\num ihren Bauch treffen zu können.")
/*<280>*/ 				story_flags[845 /* us: 805A9B35 0x10, jp: 805ACDB5 0x10 */] = true;
          				goto flw_279
          			}
          		  case 1:
          			goto flw_279
          		}
          	  case 1:
/*<272>*/ 		printf("Diese überdimensional große Spinne lebt in den\nTiefen des Waldes und spinnt enorm lange Fäden.\n\n\nSie fängt ihre Beute in ihrem Netz und greift sie\ndanach an. Ihr Rücken ist gepanzert, ihr Bauch\njedoch ist sehr empfindlich.\n\nIch bin gerade dabei, ihr Verhalten genauer zu\nanalysieren.")
/*<274>*/ 		story_flags[844 /* us: 805A9B35 0x08, jp: 805ACDB5 0x08 */] = true;
          		goto flw_279
          	}
          }

          void entrypoint_006_648() {
/*< 23>*/ 	start()
/*< 25>*/ 	printf("Es hat den Anschein, als wäre er durch Ghirahims\ndunklen Zauber verflucht und zu einem noch\nbedrohlicheren Wesen geworden.\n\nDie <r<kugelförmigen roten Elemente>> an seinen Armen\nund Rumpf schützt er um jeden Preis.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 26>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_27
          	  case 1:
          	}
          }

          void entrypoint_006_665() {
/*< 33>*/ 	start()
/*< 35>*/ 	printf("Sein Körper ist von Fels bedeckt und besitzt nur eine\neinzige Schwachstelle, und zwar sein <r<Auge>>.\n\n\nDeine Chancen, Beradama zu besiegen, erhöhen sich,\nwenn du eine Möglichkeit findest, die Felsen von\nseinem Körper zu lösen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 36>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_231
          	  case 1:
          	}
          }

          void entrypoint_006_649() {
/*< 52>*/ 	start()
/*< 54>*/ 	printf("Er nennt sich selbst \x201E<b<Dunkelfürst>>\x201C.\nÜber seine Herkunft ist mir jedoch nichts bekannt.\n\n\nMeiner Analyse zufolge ist er äußerst intelligent.\nZudem geht von ihm eine starke bösartige Aura aus.\n\n\nEs hat den Anschein, als nutze er im Augenblick nur\neinen Teil seiner wahren Macht.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 55>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_69
          	  case 1:
          	}
          }

          void entrypoint_006_666() {
/*<204>*/ 	start()
/*<205>*/ 	printf("Ich habe dir etwas zu berichten,\n\x0E\x01\x12\x04\x00\x0BGebieter Link.\n\n\nMeine Analyse des Angriffsmusters dieses Gegners ist\nabgeschlossen. Soll ich dir das Ergebnis der Analyse\nmitteilen?[1]Ja[2-]Nein")
/*<206>*/ 	story_flags[780 /* us: 805A9B2D 0x10, jp: 805ACDAD 0x10 */] = true;
/*<207>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_241
          	  case 1:
/*<208>*/ 		printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter. Visiere einen Gegner durch\nDrücken von (Z) an und drücke (v), um mich zu\nrufen und mehr über ihn zu erfahren.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_667() {
/*<209>*/ 	start()
/*<210>*/ 	printf("Ich habe dir etwas zu berichten,\n\x0E\x01\x12\x04\x00\x0BGebieter Link.\n\n\nMeine Analyse des Angriffsmusters dieses Gegners ist\nabgeschlossen. Soll ich dir das Ergebnis der Analyse\nmitteilen?[1]Ja[2-]Nein")
/*<211>*/ 	story_flags[781 /* us: 805A9B2D 0x20, jp: 805ACDAD 0x20 */] = true;
/*<212>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_242
          	  case 1:
/*<213>*/ 		printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter. Visiere einen Gegner durch\nDrücken von (Z) an und drücke (v), um mich zu\nrufen und mehr über ihn zu erfahren.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_650() {
/*< 70>*/ 	start()
/*< 72>*/ 	printf("Er kommandiert die Dämonen und wird auch\n<b<Dunkelfürst>> genannt. Ich stelle fest, dass er äußerst\nklug ist und die Kunst der Magie beherrscht.\n\nIm Normalfall verhält er sich ruhig und vornehm,\nreizt man ihn jedoch zu sehr, zeigt er sein wahres\nGesicht.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*< 73>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_87
          	  case 1:
          	}
          }

          void entrypoint_006_668() {
/*<214>*/ 	start()
/*<215>*/ 	printf("Ich habe dir etwas zu berichten,\n\x0E\x01\x12\x04\x00\x0BGebieter Link.\n\n\nMeine Analyse des Angriffsmusters dieses Gegners ist\nabgeschlossen. Soll ich dir das Ergebnis der Analyse\nmitteilen?[1]Ja[2-]Nein")
/*<216>*/ 	story_flags[782 /* us: 805A9B2D 0x40, jp: 805ACDAD 0x40 */] = true;
/*<217>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_238:
/*<238>*/ 		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
          		  case 0:
          			flw_116:
/*<116>*/ 			printf("Ghirahim kämpft nun mit voller Kraft. Es scheint\nbeinahe unmöglich, ihn mit gewöhnlichen Waffen\nzu verletzen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<120>*/ 			switch (choice(2)) {
          			  case 0:
/*<121>*/ 				printf("\x0E\x01\x12\x04\x00\x01Meiner Analyse zufolge kannst du Ghirahim durch\nAngriffe mit dem Schwert ein wenig <r<zurückdrängen>>.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<122>*/ 				switch (choice(2)) {
          				  case 0:
/*<123>*/ 					printf("Ghirahim versucht stets, sich im Inneren der\nPlattform zu positionieren und dich stetig nach\naußen zu drängen, \x0E\x01\x12\x04\x00\x02Gebieter.\n\nDie Wahrscheinlichkeit, dass er dadurch verhindern\nwill, von der Plattform zu stürzen, liegt bei 85 %.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<286>*/ 					switch (choice(2)) {
          					  case 0:
/*<287>*/ 						printf("Die Wahrscheinlichkeit, dass Ghirahim sich erneut <r<mit\nder bloßen Hand gegen dein Schwert verteidigen wird>>,\nliegt bei exakt 95 %, \x0E\x01\x12\x04\x00\x02Gebieter.\n\nSollte Ghirahim seine Körperhaltung verändern, achte\nsehr genau auf die <r<Position seiner Hand>>.")
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
/*<288>*/ 				printf("Ghirahim kämpft nun mit voller Kraft. Es scheint\nbeinahe unmöglich, ihn mit gewöhnlichen Waffen\nzu verletzen.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<289>*/ 				switch (choice(2)) {
          				  case 0:
/*<290>*/ 					printf("\x0E\x01\x12\x04\x00\x01Meiner Analyse zufolge kannst du Ghirahim durch\nAngriffe mit dem Schwert ein wenig <r<zurückdrängen>>.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<291>*/ 					switch (choice(2)) {
          					  case 0:
/*<292>*/ 						printf("Ghirahim versucht stets, sich im Inneren der\nPlattform zu positionieren und dich stetig nach\naußen zu drängen, \x0E\x01\x12\x04\x00\x02Gebieter.\n\nDie Wahrscheinlichkeit, dass er dadurch verhindern\nwill, von der Plattform zu stürzen, liegt bei 85 %.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<293>*/ 						switch (choice(2)) {
          						  case 0:
/*<119>*/ 							printf("Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, \x0E\x01\x12\x04\x00\x02Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.\x0E\x01\x11\x02\x9CD\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<r<Lagebericht>> an.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
          				}
          			}
          		}
          	  case 1:
/*<218>*/ 		printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter. Visiere einen Gegner durch\nDrücken von (Z) an und drücke (v), um mich zu\nrufen und mehr über ihn zu erfahren.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_651() {
/*<115>*/ 	start()
/*<117>*/ 	printf("Im Vergleich zur letzten Begegnung mit ihm hat sich\nsein Aussehen um bis zu 90 % verändert.\n\n\nZudem geht eine schwarze Aura von ihm aus,\ndie seinen gesamten Körper umhüllt.\n\n\n\x0E\x01\x12\x04\x00\x01Ich habe dir etwas zu berichten, Gebieter.\nEin kleiner Moment der Unaufmerksamkeit\nkann in diesem Kampf bereits zu viel sein.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<118>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_238
          	  case 1:
          	}
          }

          void entrypoint_006_669() {
/*<219>*/ 	start()
/*<220>*/ 	printf("Ich habe dir etwas zu berichten,\n\x0E\x01\x12\x04\x00\x0BGebieter Link.\nIch habe Neues über den <b<Todbringer >>herausgefunden.\n\nMöchtest du das Ergebnis meiner Analyse erfahren?[1]Ja[2-]Nein")
/*<221>*/ 	story_flags[783 /* us: 805A9B2D 0x80, jp: 805ACDAD 0x80 */] = true;
/*<222>*/ 	switch (choice(2)) {
          	  case 0:
/*<232>*/ 		printf("In dieser vom Todbringer beherrschten Welt steht der\n<r<Himmelsstrahl >>nicht zur Verfügung.[1]Mehr\nDetails[2-]Keine\nDetails")
/*<233>*/ 		switch (choice(2)) {
          		  case 0:
/*<225>*/ 			printf("Ich stelle fest, dass einzig und allein das <y<Master-\nSchwert>> dem Todbringer Schaden zufügen kann.\n\n\nAlle anderen Waffen haben offenbar keinerlei\nWirkung.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<226>*/ 			switch (choice(2)) {
          			  case 0:
/*<227>*/ 				switch (scene_flags[120 /* 0xE 01 */]) {
          				  case 0:
/*<228>*/ 					printf("Der Todbringer nutzt die Energie der einschlagenden\nBlitze, indem er sie in seinem Schwert speichert.\n\n\nAchte darauf, den Todbringer in diesem Fall nicht\nanzugreifen, da eine Berührung mit seinem Schwert\ndich lähmen kann, \x0E\x01\x12\x04\x00\x02Gebieter.\n[1]Mehr\nDetails[2-]Keine\nDetails")
/*<230>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_229:
/*<229>*/ 						printf("Ich bin noch damit beschäftigt, die Daten einzuordnen\nund benötige dafür noch ein wenig mehr Zeit.\n\n\nWarte eine Zeit lang, visiere dann den Todbringer\ndurch Drücken von (Z) an und drücke (v), um mich\nzu rufen.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
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
/*<223>*/ 		printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter. Visiere einen Gegner durch\nDrücken von (Z) an und drücke (v), um mich zu\nrufen und mehr über ihn zu erfahren.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

