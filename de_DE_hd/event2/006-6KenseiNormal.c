          void entrypoint_006_600() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "Dies ist ein <color blue<Lemurin bei Tag>coloroff>.<entrypoint_6_601>")
/*<  3>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 21, 'param4': 2, 'param5': 0}) {
          	  case 0:
/*<  2>*/ 		printf(/* textboxtype: 0, unk: 0, line: 185 */ "Du hast diesen Gegnertypus insgesamt\n<numeric arg0 1>-mal besiegt. Du verhältst dich im\nKampf mit diesem Gegnertypus meiner\nAnalyse zufolge <string arg0>.")
          	  case 1:
          	}
          }

          void entrypoint_006_652() {
/*< 88>*/ 	start()
/*< 90>*/ 	printf(/* textboxtype: 0, unk: 0, line: 95 */ "Ich habe keine genauen Daten zu dieser Bestie.\n\n\n\nIch kann jedoch feststellen, dass ihre Aura mächtiger\nist als die der Monster, denen du begegnet bist.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 91>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_239:
/*<239>*/ 		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
          		  case 0:
          			flw_89:
/*< 89>*/ 			printf(/* textboxtype: 2, unk: 0, line: 96 */ "Auf dem Kopf der Bestie befindet sich der <color red<Siegelstein>coloroff>,\nder zuvor am Grund des<color blue< Siegelhains >coloroff>platziert war.\n\n\nDu kannst dem Monster Schaden zufügen, indem du\ndiesen Siegelstein in seinen Kopf rammst.\n\n\nGreife erst<0x10012:0x00000002> seine Füße an, um den Verbannten zu Fall\nzu bringen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 93>*/ 			switch (choice(2)) {
          			  case 0:
/*< 94>*/ 				printf(/* textboxtype: 0, unk: 2, line: 97 */ "Du kannst seine Bewegungen stoppen, indem du alle\nZehen an seinen Füßen abschlägst.\n\n\nVersuche, mit Hilfe der Windströme vor die Bestie\nzu gelangen. Ich rate davon ab, die Bestie zu Fuß zu\nverfolgen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 95>*/ 				switch (choice(2)) {
          				  case 0:
/*< 96>*/ 					printf(/* textboxtype: 0, unk: 0, line: 98 */ "Wenn du dich gut vor seinen Zehen positioniert hast,\nnutze am besten die <color green<Wirbelattacke>coloroff>, um mit einem\nSchlag möglichst viel Schaden anzurichten.\n\nEine andere Möglichkeit ist es, den Verbannten aus\nsicherer Entfernung heraus mit <color yellow<Bomben >coloroff>anzugreifen.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<256>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_89
          			  case 1:
/*< 92>*/ 				printf(/* textboxtype: 0, unk: 2, line: 13 */ "Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_653() {
/*< 97>*/ 	start()
/*< 99>*/ 	printf(/* textboxtype: 0, unk: 2, line: 100 */ "Ich habe keine genauen Daten zu dieser Bestie.\n\n\n\nIch stelle jedoch fest, dass die Bestie nun über etwas\nverfügt, das wie zwei Hände aussieht.\n\n\nDas Monster scheint nun noch stärker zu sein als bei\nder letzten Begegnung mit ihm.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<100>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_240:
/*<240>*/ 		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
          		  case 0:
          			flw_98:
/*< 98>*/ 			printf(/* textboxtype: 1, unk: 0, line: 101 */ "Ich rate dir, dasselbe Angriffsmuster wie\nbeim letzten Kampf anzuwenden.\n\n\nEs ist auch möglich, die Finger der Bestie\nabzuschneiden, doch ich gehe davon aus,\ndass daraus nur geringer Vorteil entsteht.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<102>*/ 			switch (choice(2)) {
          			  case 0:
/*<103>*/ 				printf(/* textboxtype: 2, unk: 1, line: 102 */ "Die Wahrscheinlichkeit, dass <color blue<Bados >coloroff>Apparatur der\nBestie großen Schaden zufügen kann, liegt bei 100 %.\n\n\nEs ist möglich, die Bewegungen der Bestie damit\nkurzzeitig aufzuhalten, um Zeit für den Angriff\nzu gewinnen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<104>*/ 				switch (choice(2)) {
          				  case 0:
/*<105>*/ 					printf(/* textboxtype: 0, unk: 2, line: 103 */ "Neige (ControlStick), um die Position von <color blue<Bados >coloroff>Katapult\nzu ändern.\n\n\nSollte sich die Bestie in einem toten Winkel befinden,\nändere die Position von Bados Katapult.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<257>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_98
          			  case 1:
/*<101>*/ 				printf(/* textboxtype: 0, unk: 2, line: 13 */ "Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_601() {
/*<294>*/ 	start()
/*<297>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<295>*/ 		printf(/* textboxtype: 0, unk: 0, line: 2 */ "Ein kleines Tier, das im <color blue<Wolkenhort >coloroff>lebt. Nun, da sich\n<color blue<Morsego>coloroff> in einen Menschen verwandelt hat, wird es\nnachts nicht mehr aggressiv.")
          	  case 1:
/*<296>*/ 		printf(/* textboxtype: 0, unk: 2, line: 1 */ "Dieses kleine Tier, das im <color blue<Wolkenhort >coloroff>lebt,\nist tagsüber stets friedlich und zutraulich,\nnachts jedoch eine wilde Bestie.")
          	}
          }

          void entrypoint_006_654() {
/*<106>*/ 	start()
/*<108>*/ 	printf(/* textboxtype: 2, unk: 0, line: 105 */ "Dieses Wesen fungiert als Seelengefäß für den\n<color blue<Todbringer>coloroff>. Genauere Daten sind mir nicht bekannt.\n\n\nDes Weiteren scheint sich ein schwanzähnlicher Teil\ngebildet zu haben, der zuvor nicht vorhanden war.\n\n\nIch empfehle dir, <color blue<Bados>coloroff> Katapult zu deinem Vorteil\neinzusetzen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<109>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_241:
/*<241>*/ 		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
          		  case 0:
          			flw_107:
/*<107>*/ 			printf(/* textboxtype: 0, unk: 2, line: 106 */ "Ich rate dir, dasselbe Angriffsmuster wie beim letzten\nKampf anzuwenden.\n\n\nEs ist auch möglich, die Finger oder Zehen der Bestie\nabzuschneiden.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<111>*/ 			switch (choice(2)) {
          			  case 0:
/*<112>*/ 				printf(/* textboxtype: 0, unk: 0, line: 107 */ "Solltest du die Bestie zu Fall gebracht haben,\nist es möglich, dass ihr Körper den Weg zum\n<color red<Siegelstein>coloroff> blockiert.\n\nSpringe in diesem Fall eine Ebene nach unten und\nnutze einen der Windströme, um zu seinem Kopf\nzu gelangen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<113>*/ 				switch (choice(2)) {
          				  case 0:
/*<114>*/ 					printf(/* textboxtype: 2, unk: 0, line: 108 */ "Aufgrund der enormen Kraft der Bestie reicht dein\nSchwert allein nicht aus, um sie zu besiegen.\n\n\n<color red<Steige selbst >coloroff>in Bados Katapult und bereite dem\nMonster ein Ende, mein <0x10012:0x00000002>Gebieter.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<258>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_107
          			  case 1:
/*<110>*/ 				printf(/* textboxtype: 0, unk: 2, line: 13 */ "Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_689() {
/*<124>*/ 	start()
/*<126>*/ 	printf(/* textboxtype: 0, unk: 2, line: 169 */ "Verglichen mit der letzten Begegnung mit ihm hat\nsich seine Erscheinung zu 90 % verändert.\n\n\nZudem geht eine schwarze Aura von ihm aus,\ndie seinen gesamten Körper umhüllt.\n\n\nEr ist verwundet und hat nun seine Kampfstrategie\nverändert.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<127>*/ 	switch (choice(2)) {
          	  case 0:
/*<243>*/ 		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
          		  case 0:
          			flw_125:
/*<125>*/ 			printf(/* textboxtype: 0, unk: 0, line: 170 */ "Die <color red<Wunde in seiner Brust >coloroff>aus dem vorherigen Kampf\nist Ghirahims Schwachstelle.\n\n\nDie Wahrscheinlichkeit, dass er alle Angriffe auf diese\nStelle abwehrt, liegt im normalen Zustand bei 100 %.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<129>*/ 			switch (choice(2)) {
          			  case 0:
/*<130>*/ 				printf(/* textboxtype: 2, unk: 0, line: 171 */ "Es ist möglich, Ghirahims Schwert, das die <color red<Wunde in\nseiner Brust >coloroff>schützt, zur Seite zu schlagen, <0x10012:0x00000002>Gebieter.\n\n\nIch empfehle, den richtigen Moment abzuwarten und\ndann unmittelbar zum Angriff überzugehen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<131>*/ 				switch (choice(2)) {
          				  case 0:
/*<132>*/ 					printf(/* textboxtype: 0, unk: 2, line: 172 */ "Meiner Analyse zufolge ist es nicht möglich,\nGhirahims Schwert mit nur einem einzigen\nAngriff zur Seite zu schlagen.\n\nIch empfehle, <color red<mehrere Angriffe in dieselbe Richtung\n>coloroff>auszuführen, um sein Schwert zur Seite zu schlagen.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<254>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_125
          			  case 1:
/*<128>*/ 				printf(/* textboxtype: 0, unk: 2, line: 13 */ "Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_602() {
/*<298>*/ 	start()
/*<299>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<301>*/ 		printf(/* textboxtype: 0, unk: 0, line: 2 */ "Ein kleines Tier, das im <color blue<Wolkenhort >coloroff>lebt. Nun, da sich\n<color blue<Morsego>coloroff> in einen Menschen verwandelt hat, wird es\nnachts nicht mehr aggressiv.")
          	  case 1:
/*<300>*/ 		printf(/* textboxtype: 0, unk: 2, line: 4 */ "Tagsüber ist dieses Tier zutraulich und friedlich,\nnachts wird es jedoch zur wilden Bestie. Lasse dich\nnicht von seinem Äußeren täuschen.")
          	}
          }

          void entrypoint_006_655() {
/*<144>*/ 	start()
/*<145>*/ 	printf(/* textboxtype: 0, unk: 0, line: 110 */ "Dieses Wesen gilt als die Quelle des Bösen, das die\nZeit überdauert und bis heute fortbestanden hat.\n\n\nUralte Legenden besagen, dass seine Erscheinung\nje nach Betrachter stark variiert und die Zeit sein\nAussehen mitgeprägt hat.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<146>*/ 	switch (choice(2)) {
          	  case 0:
/*<234>*/ 		printf(/* textboxtype: 0, unk: 2, line: 124 */ "In dieser vom Todbringer beherrschten Welt steht der\n<color red<Himmelsstrahl >coloroff>nicht zur Verfügung.[1-]Mehr\nDetails[2]Keine\nDetails")
/*<235>*/ 		switch (choice(2)) {
          		  case 0:
/*<148>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 124}) {
          			  case 0:
/*<260>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_151:
/*<151>*/ 					printf(/* textboxtype: 0, unk: 2, line: 112 */ "Die Chance, dass einmalige Angriffe dem Todbringer\nSchaden zufügen können, liegt bei 0 %, <0x10012:0x00000002>Gebieter.\n\n\nUm die starke Abwehr des Todbringers durchbrechen\nzu können, musst du ihn <color red<mehrmals aus jeweils\nverschiedenen Richtungen angreifen>coloroff>.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<152>*/ 					switch (choice(2)) {
          					  case 0:
/*<153>*/ 						printf(/* textboxtype: 0, unk: 0, line: 113 */ "Meiner Analyse zufolge kann der Todbringer\nangegriffen werden, sobald er sein Schwert in\ndie Höhe hält.\n\nAngriffe, die zu nahe am Schwert des Todbringers\nausgeführt werden, wehrt er jedoch zu 100 % ab.\n<pause 15>Sei vorsichtig.")
          					  case 1:
          					}
          				  case 1:
/*<149>*/ 					printf(/* textboxtype: 0, unk: 2, line: 13 */ "Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
          				}
          			  case 1:
          				flw_147:
/*<147>*/ 				printf(/* textboxtype: 2, unk: 0, line: 111 */ "Ich stelle fest, dass einzig und allein das <color yellow<Master-\nSchwert>coloroff> dem Todbringer Schaden zufügen kann.\n\n\nAlle anderen Waffen haben offenbar keinerlei\nWirkung.\n[1-]Mehr\nDetails[2]Keine\nDetails")
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
/*<134>*/ 	printf(/* textboxtype: 2, unk: 0, line: 174 */ "Verglichen mit der letzten Begegnung mit ihm\nhat sich seine Erscheinung zu 90 % verändert.\n\n\nZudem geht eine schwarze Aura von ihm aus,\ndie seinen gesamten Körper umhüllt.\n\n\nIch stelle fest, dass er eine bisher unbekannte\nWaffe einsetzt.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<135>*/ 	switch (choice(2)) {
          	  case 0:
/*<244>*/ 		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
          		  case 0:
          			flw_137:
/*<137>*/ 			printf(/* textboxtype: 0, unk: 0, line: 176 */ "Meiner Analyse zufolge kannst du Ghirahims Schwert\nmit gezielten Angriffen <color red<zerbrechen>coloroff>, <0x10012:0x00000002>Gebieter.\n\n\nGhirahim nutzt seine Magie, um das Schwert\nzu erzeugen.\n\n\nDa Ghirahim stark verwundet ist, sollte sein Schwert\nnicht mehr allzu widerstandsfähig sein.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<138>*/ 			switch (choice(2)) {
          			  case 0:
/*<139>*/ 				printf(/* textboxtype: 2, unk: 0, line: 177 */ "Vom Zentrum von Ghirahims Schwert geht dieselbe\nEnergie aus wie von seinem <color red<Herzkern>coloroff>.\n\n\nSollte es dir gelingen, den <color red<Kern seines Schwerts\n>coloroff>zu zerstören, kannst du auch das Schwert selbst\nzerstören.\n\nAchte auf die Bewegungen seines Schwerts und greife\nwiederholt <color red<dieselbe Stelle >coloroff>an.")
          			  case 1:
          			}
          		  case 1:
/*<255>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_137
          			  case 1:
/*<136>*/ 				printf(/* textboxtype: 0, unk: 2, line: 13 */ "Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_656() {
/*<161>*/ 	start()
/*<163>*/ 	printf(/* textboxtype: 0, unk: 0, line: 110 */ "Dieses Wesen gilt als die Quelle des Bösen, das die\nZeit überdauert und bis heute fortbestanden hat.\n\n\nUralte Legenden besagen, dass seine Erscheinung\nje nach Betrachter stark variiert und die Zeit sein\nAussehen mitgeprägt hat.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<162>*/ 	switch (choice(2)) {
          	  case 0:
/*<236>*/ 		printf(/* textboxtype: 0, unk: 2, line: 124 */ "In dieser vom Todbringer beherrschten Welt steht der\n<color red<Himmelsstrahl >coloroff>nicht zur Verfügung.[1-]Mehr\nDetails[2]Keine\nDetails")
/*<224>*/ 		scene_flags[10 'Sealed Grounds'][120 /* 0xE 01 */] = true;
/*<237>*/ 		switch (choice(2)) {
          		  case 0:
/*<155>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 132}) {
          			  case 0:
/*<259>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_154:
/*<154>*/ 					printf(/* textboxtype: 2, unk: 0, line: 120 */ "Es ist möglich, ebenfalls auf die elektrische Energie\ndes Todbringers zurückzugreifen, <0x10012:0x00000002>mein Gebieter.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<157>*/ 					switch (choice(2)) {
          					  case 0:
/*<158>*/ 						printf(/* textboxtype: 0, unk: 2, line: 121 */ "Du kannst die Blitzenergie in deinem <color yellow<Master-Schwert\n>coloroff>konservieren und <color red<anstelle des Himmelsstrahls\n>coloroff>einsetzen.\n\nWenn du in der Ferne einen Blitz siehst und der\nHimmel leuchtet, hebe dein Schwert gen Himmel.\n\n\nAchte jedoch darauf, dass du dabei nicht gelähmt\nwirst, da dies zur Folge hätte, dass du dem Todbringer\nschutzlos ausgeliefert bist.")
          					  case 1:
          					}
          				  case 1:
/*<159>*/ 					printf(/* textboxtype: 0, unk: 0, line: 119 */ "Der Todbringer kann sein Schwert mit elektrischer\nEnergie aufladen, die er im Kampf einsetzt.\n\n\nTriffst du es im aufgeladenen Zustand, lähmt die\nElektrizität deinen Körper, <0x10012:0x00000002>mein Gebieter.<pause 15>\n\n\nAchte beim Angriff auf den richtigen Zeitpunkt und\nsei höchst vorsichtig.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<160>*/ 					switch (choice(2)) {
          					  case 0:
/*<156>*/ 						printf(/* textboxtype: 0, unk: 2, line: 13 */ "Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
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
/*<  5>*/ 	printf(/* textboxtype: 2, unk: 0, line: 9 */ "Dieser gewaltige Parasit, den man auch\n„Riesenparasit“ nennt, hat <color blue<Narisha >coloroff>befallen.\n\n\nEr kontrolliert seinen Wirt vollständig und steuert\nihn nach seinem Willen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<  6>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_242:
/*<242>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<  8>*/ 			printf(/* textboxtype: 0, unk: 2, line: 10 */ "Meiner Analyse zufolge kannst du die Schleimbälle,\ndie <color blue<Baras Baras >coloroff>auf dich ausspuckt, mit deinem\nSchwert <color red<zurückschleudern>coloroff>, <0x10012:0x00000002>Gebieter.\n\nBeobachte seine Bewegungen, um ihn mit den\nSchleimbällen zu treffen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<  9>*/ 			switch (choice(2)) {
          			  case 0:
/*< 10>*/ 				printf(/* textboxtype: 0, unk: 0, line: 11 */ "Seine Schwachstelle ist der <color red<Augapfel >coloroff>im Zentrum.\n\n\n\nEr schützt ihn mit seinen <color red<Flossen>coloroff>, doch Angriffe\nschaden ihm nur, wenn sein <color red<Augapfel>coloroff> ungeschützt ist.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 11>*/ 				switch (choice(2)) {
          				  case 0:
/*< 12>*/ 					printf(/* textboxtype: 2, unk: 0, line: 12 */ "Achte auf den Winkel deines Schlages,\nwenn du die Schleimbälle von Baras Baras\nauf ihn zurückschleuderst.\n\nSchwinge dein Schwert von links oder rechts,<pause 15>\noder führe einen Vertikalschlag aus, um ihn\nfrontal zu treffen.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<  7>*/ 			printf(/* textboxtype: 0, unk: 2, line: 13 */ "Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_657() {
/*<164>*/ 	start()
/*<165>*/ 	printf(/* textboxtype: 0, unk: 2, line: 187 */ "Ich habe dir etwas zu berichten,\n<0x10012:0x0000000b>Gebieter <heroname>.\n\n\nMeine Analyse des Angriffsmusters dieses Gegners\nist abgeschlossen.\n\n\nVisiere den Gegner durch Drücken von (Z) an und\nrufe mich, indem du (v) drückst, um mehr über\ndiesen Gegner zu erfahren.<0x10011:0x07cd><0x10011:0x09cd>\nMöchtest du dies nun tun?[1-]Ja[2]Nein")
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
/*< 53>*/ 					printf(/* textboxtype: 0, unk: 2, line: 76 */ "Meiner Analyse zufolge reiht Ghirahim die Dolche,\ndie er auf dich abfeuert, in unterschiedlichen\nFormationen an.\n\nEs ist also möglich, sie alle mit einem einzigen\ngezielten Schlag wieder auf ihn zurückzuschleudern.\n\n\nIch schätze dies jedoch als sehr riskant\nein.[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 58>*/ 					switch (choice(2)) {
          					  case 0:
/*< 59>*/ 						printf(/* textboxtype: 0, unk: 0, line: 77 */ "Ghirahim beherrscht die Kunst der Teleportation.\n\n\n\nMeiner Analyse zufolge harrt er jedoch direkt nach\nder Teleportation stets für einen kurzen Moment\nlang aus.\n\nDies ist eine sehr gute Gelegenheit, ihn anzugreifen.\nAchte dabei jedoch auf das Schwert, das er zu seinem\nSchutz bereithält.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 60>*/ 						switch (choice(2)) {
          						  case 0:
/*< 61>*/ 							printf(/* textboxtype: 2, unk: 0, line: 78 */ "Ghirahim wird versuchen, deinem Angriff seitlich\nauszuweichen und einen Gegenangriff auszuführen,\n<0x10012:0x00000002>mein Gebieter.\n\nIn diesem Fall musst du versuchen, sofort <color red<in die\nRichtung zu schlagen>coloroff>, aus der Ghirahim dich angreift.\n\n\n<0x10012:0x00000002>Gebieter, achte stets auf Ghirahims Körperhaltung\nvor dem Ausweichen, um zu erahnen, in welche\nRichtung er ausweicht.\n\nWenn du Probleme mit dem Timing hast, versuche\nGhirahim mit einer <color green<Wirbelattacke>coloroff> Schaden zuzufügen.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<140>*/ 					printf(/* textboxtype: 2, unk: 0, line: 75 */ "Ich stelle fest, dass Ghirahim seine Kampfstrategie\nim Laufe des Kampfes geändert hat.\n\n\nIch gehe davon aus, dass dies aufgrund des Schadens,\nden er erlitten hat, geschehen ist.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<141>*/ 					switch (choice(2)) {
          					  case 0:
/*< 57>*/ 						printf(/* textboxtype: 0, unk: 2, line: 13 */ "Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
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
/*< 62>*/ 					printf(/* textboxtype: 2, unk: 0, line: 72 */ "Er scheint sehr überzeugt von seiner Stärke zu sein.\n<0x10012:0x00000002>Achte jedoch auf seine <color red<rechte Hand>coloroff>, mit der er\nversucht, dein Schwert festzuhalten, <0x10012:0x00000002>Gebieter.\n\nGhirahim beobachtet, <color red<wie du dein Schwert hältst >coloroff>und\nbereitet sich so auf deinen Angriff vor.\n\n\nIch empfehle dir, ihn zu täuschen und aus der\nentgegengesetzten Richtung anzugreifen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 65>*/ 					switch (choice(2)) {
          					  case 0:
/*< 66>*/ 						printf(/* textboxtype: 0, unk: 2, line: 73 */ "Hält er dein Schwert fest, achte auf die <color red<Stellung von\nGhirahims Fingern >coloroff>und schwinge dein Schwert sofort\nin die <color red<entgegengesetzte Richtung>coloroff>.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 67>*/ 						switch (choice(2)) {
          						  case 0:
/*< 68>*/ 							printf(/* textboxtype: 0, unk: 0, line: 74 */ "Die Finger, mit denen Ghirahim dein Schwert festhält,\nzeigen meiner Daten zufolge stets nach oben,\n<0x10012:0x00000001>mein Gebieter.\n\nDie Wahrscheinlichkeit, dass du seinem Block durch\neinen <color red<Schwertstreich nach oben >coloroff>entgehen kannst,\nliegt bei 100 %.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<284>*/ 					printf(/* textboxtype: 2, unk: 0, line: 72 */ "Er scheint sehr überzeugt von seiner Stärke zu sein.\n<0x10012:0x00000002>Achte jedoch auf seine <color red<rechte Hand>coloroff>, mit der er\nversucht, dein Schwert festzuhalten, <0x10012:0x00000002>Gebieter.\n\nGhirahim beobachtet, <color red<wie du dein Schwert hältst >coloroff>und\nbereitet sich so auf deinen Angriff vor.\n\n\nIch empfehle dir, ihn zu täuschen und aus der\nentgegengesetzten Richtung anzugreifen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<285>*/ 					switch (choice(2)) {
          					  case 0:
/*< 64>*/ 						printf(/* textboxtype: 0, unk: 2, line: 13 */ "Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
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
/*<168>*/ 		printf(/* textboxtype: 2, unk: 0, line: 189 */ "Ich habe verstanden, <0x10012:0x00000005>Gebieter. Rufe mich, wenn du\ndas Ergebnis meiner Analyse erfahren möchtest.")
          	}
          }

          void entrypoint_006_658() {
/*<169>*/ 	start()
/*<170>*/ 	printf(/* textboxtype: 0, unk: 2, line: 187 */ "Ich habe dir etwas zu berichten,\n<0x10012:0x0000000b>Gebieter <heroname>.\n\n\nMeine Analyse des Angriffsmusters dieses Gegners\nist abgeschlossen.\n\n\nVisiere den Gegner durch Drücken von (Z) an und\nrufe mich, indem du (v) drückst, um mehr über\ndiesen Gegner zu erfahren.<0x10011:0x07cd><0x10011:0x09cd>\nMöchtest du dies nun tun?[1-]Ja[2]Nein")
/*<171>*/ 	story_flags[773 /* us: 805A9B2A 0x20, jp: 805ACDAA 0x20 */] = true;
/*<172>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_231:
/*<231>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
          			flw_34:
/*< 34>*/ 			printf(/* textboxtype: 2, unk: 0, line: 135 */ "Die Wahrscheinlichkeit, seinen von Felsen\nüberzogenen Körper mit dem Schwert zu\nverletzen, liegt bei 0 %.\n\nNutze etwas, das eine höhere Zerstörungskraft besitzt.[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 38>*/ 			switch (choice(2)) {
          			  case 0:
/*< 39>*/ 				printf(/* textboxtype: 0, unk: 2, line: 136 */ "Schluckt Beradama eine <color yellow<Bombe>coloroff>, so wird er mit einer\nWahrscheinlichkeit von 100 % explodieren.\n\n\nExplosionen, die nur seine Außenhülle treffen,\nschüren bloß seinen Zorn.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 40>*/ 				switch (choice(2)) {
          				  case 0:
/*< 41>*/ 					printf(/* textboxtype: 0, unk: 0, line: 137 */ "Meiner Analyse zufolge können die Felsen auf\nBeradamas Körper von innen heraus weggesprengt\nwerden.\n\nVersuche, <color red<eine Bombe in seinen Schlund zu werfen>coloroff>,\nwenn er Luft holt, um einen Glutball abzufeuern.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<247>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_34
          			  case 1:
/*< 37>*/ 				printf(/* textboxtype: 0, unk: 2, line: 13 */ "Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
          			}
          		}
          	  case 1:
/*<173>*/ 		printf(/* textboxtype: 2, unk: 0, line: 189 */ "Ich habe verstanden, <0x10012:0x00000005>Gebieter. Rufe mich, wenn du\ndas Ergebnis meiner Analyse erfahren möchtest.")
          	}
          }

          void entrypoint_006_659() {
/*<174>*/ 	start()
/*<175>*/ 	printf(/* textboxtype: 0, unk: 2, line: 187 */ "Ich habe dir etwas zu berichten,\n<0x10012:0x0000000b>Gebieter <heroname>.\n\n\nMeine Analyse des Angriffsmusters dieses Gegners\nist abgeschlossen.\n\n\nVisiere den Gegner durch Drücken von (Z) an und\nrufe mich, indem du (v) drückst, um mehr über\ndiesen Gegner zu erfahren.<0x10011:0x07cd><0x10011:0x09cd>\nMöchtest du dies nun tun?[1-]Ja[2]Nein")
/*<176>*/ 	story_flags[774 /* us: 805A9B2A 0x40, jp: 805ACDAA 0x40 */] = true;
/*<177>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_17:
/*< 17>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 10}) {
          		  case 0:
/*<245>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				flw_14:
/*< 14>*/ 				printf(/* textboxtype: 0, unk: 2, line: 25 */ "Seine großen Scheren sind seine <color red<Schwachpunkte>coloroff>,\nzugleich jedoch auch seine gefährlichsten Waffen.\n\n\nAchte auf die Neigung seiner Scheren, um ihm im\nrichtigen Moment Schaden zuzufügen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 19>*/ 				switch (choice(2)) {
          				  case 0:
/*< 20>*/ 					printf(/* textboxtype: 0, unk: 0, line: 26 */ "Sollte Moldoghad verwundet werden, zieht er sich\nzurück und vergräbt sich im Sand.\n\n\nIn diesem Zustand wird er versuchen, dich aus seinem\nVersteck heraus mit dem Schwanz zu attackieren.\n\n\nDieser Angriff hat eine Gefahrenrate von 85 %.\n\n\n\nDu kannst den Sand, unter dem er sich versteckt,\n<color red<wegpusten>coloroff>, um Moldoghad aus seinem Versteck\nhervorzulocken.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 21>*/ 					switch (choice(2)) {
          					  case 0:
/*< 22>*/ 						printf(/* textboxtype: 2, unk: 0, line: 27 */ "Meiner Analyse zufolge entblößt er seinen wahren\nSchwachpunkt, das <color red<zentrale Auge>coloroff>, sobald seine\nScheren zerstört sind.\n\nDas <color red<Auge>coloroff> ist jedoch von einer harten Panzerschicht\numgeben. Schläge von der Seite oder von oben sind\nmeinen Daten zufolge wirkungslos.")
          					  case 1:
          					}
          				  case 1:
          				}
          			  case 1:
/*< 18>*/ 				printf(/* textboxtype: 0, unk: 2, line: 13 */ "Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
          			}
          		  case 1:
          			goto flw_14
          		  case 2:
          			goto flw_14
          		  case 3:
          			goto flw_14
          		}
          	  case 1:
/*<178>*/ 		printf(/* textboxtype: 2, unk: 0, line: 189 */ "Ich habe verstanden, <0x10012:0x00000005>Gebieter. Rufe mich, wenn du\ndas Ergebnis meiner Analyse erfahren möchtest.")
          	}
          }

          void entrypoint_006_677() {
/*< 42>*/ 	start()
/*< 44>*/ 	printf(/* textboxtype: 2, unk: 0, line: 150 */ "Sein Beiname „Uraltes Meeresgrauen“ lässt darauf\nschließen, dass Daidagos einst der Herrscher über\ndie Gezeiten war.\n\nSeine dicken <color red<Tentakel>coloroff> können zwar durchtrennt\nwerden, heilen sich jedoch nach kurzer Zeit von selbst.\n[1-]Mehr\nDetails[2]Keine\nDetails")
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
/*<261>*/ 					printf(/* textboxtype: 0, unk: 2, line: 154 */ "Um Daidagos' <color red<Auge>coloroff> zu erreichen, ist es notwendig,\ndie zahlreichen Tentakel zu durchtrennen, mit denen\ner dich attackiert.\n\nMeiner Analyse zufolge sind die Tentakel an ihrer\nSpitze am leichtesten zu durchtrennen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<264>*/ 					switch (choice(2)) {
          					  case 0:
/*<265>*/ 						printf(/* textboxtype: 0, unk: 0, line: 155 */ "Daidagos attackiert dich mit seinen zahlreichen\nTentakeln in sehr kurzen Zeitabständen.\n\n\nEs wäre gefährlich zu versuchen, jedes der Tentakel\neinzeln zu durchtrennen.\n\n\nGreife unentwegt an und versuche, mit deinen\nSchwertschlägen so viele wie möglich zur gleichen\nZeit zu treffen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<266>*/ 						switch (choice(2)) {
          						  case 0:
/*<267>*/ 							printf(/* textboxtype: 2, unk: 0, line: 156 */ "Es besteht die Möglichkeit, durch das Durchtrennen\nvon Tentakeln <color red<Herzen >coloroff>oder <color red<Pfeile>coloroff> zu erhalten.\n\n\nSollten deine Herzen oder Pfeile knapp werden,\ndurchtrenne so viele Tentakel wie möglich,\nanstatt überhastet die Flucht anzutreten.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<263>*/ 					printf(/* textboxtype: 0, unk: 2, line: 13 */ "Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
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
/*< 43>*/ 					printf(/* textboxtype: 0, unk: 2, line: 151 */ "Meiner Analyse zufolge zeigt sich Daidagos,\nnachdem eine gewisse Anzahl seiner Tentakel\ndurchtrennt wurde, <0x10012:0x00000002>Gebieter.\n\nDie Wahrscheinlichkeit, dass die Tentakel, die dir\ninnerhalb des Schiffes den Weg blockiert haben,\nvon Daidagos stammen, ist 99 %.\n\nDie <color red<heilige Kraft >coloroff>scheint meinen Daten zufolge am\ngeeignetsten zu sein, um sie zu durchtrennen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 48>*/ 					switch (choice(2)) {
          					  case 0:
/*< 49>*/ 						printf(/* textboxtype: 0, unk: 0, line: 152 */ "Meiner Analyse zufolge können seine Tentakel\ndurch die heilige Kraft des <color red<Himmelsstrahls\n>coloroff>durchtrennt werden.\n\nDie eigentliche Schwäche von Daidagos ist sein <color red<Auge>coloroff>,\ndoch der Himmelsstrahl reicht meinen Daten zufolge\nnicht so weit.\n\nNutze eine Waffe, die über eine noch längere\nReichweite als dein Schwert verfügt.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 50>*/ 						switch (choice(2)) {
          						  case 0:
/*< 51>*/ 							printf(/* textboxtype: 2, unk: 0, line: 153 */ "Nutze den<color yellow< Bogen >coloroff>um Daidagos' große Schwachstelle,\nsein <color red<Auge>coloroff>, zu treffen.\n\n\nDu kannst dich durch Neigen von (ControlStick2) bewegen,\nwährend du den <color yellow<Bogen >coloroff>bereithältst.\n\n\nWeiche so den Angriffen von Daidagos aus und\nfeuere dann einen <color red<Pfeil>coloroff> ab.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*< 47>*/ 					printf(/* textboxtype: 0, unk: 2, line: 13 */ "Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
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
/*<180>*/ 	printf(/* textboxtype: 0, unk: 0, line: 188 */ "Ich habe dir etwas zu berichten,\n<0x10012:0x0000000b>Gebieter <heroname>.\n\n\nMeine Analyse des Angriffsmusters dieses Gegners ist\nabgeschlossen. Soll ich dir das Ergebnis der Analyse\nmitteilen?[1-]Ja[2]Nein")
/*<181>*/ 	story_flags[775 /* us: 805A9B2A 0x80, jp: 805ACDAA 0x80 */] = true;
/*<182>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_27:
/*< 27>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 20}) {
          		  case 0:
/*<246>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				flw_24:
/*< 24>*/ 				printf(/* textboxtype: 0, unk: 2, line: 67 */ "Zerstörst du das <color red<kugelförmige rote Element>coloroff> an einem\nseiner Arme, fällt dieser Arm ab und Da Ilohm\nbricht auseinander.\n\nDiese Elemente sind jedoch unter den Schutzplatten\nan seinem Unterarm verborgen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 29>*/ 				switch (choice(2)) {
          				  case 0:
/*< 30>*/ 					printf(/* textboxtype: 0, unk: 0, line: 68 */ "Die <color red<kugelförmigen roten Elemente>coloroff> in seinen Armen\nliegen nur frei, wenn Da Ilohm seinen Arm zum\nAngriff ausstreckt.\n\nWeiche seinem Schlag aus und reagiere blitzschnell\nmit einem Gegenangriff.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 31>*/ 					switch (choice(2)) {
          					  case 0:
/*< 32>*/ 						printf(/* textboxtype: 2, unk: 0, line: 69 */ "Ich empfehle dir, die <color red<kugelförmigen roten Elemente\n>coloroff>an seinen Armen mit deiner <color yellow<Peitsche>coloroff> zu lösen.\n\n\nVerliert Da Ilohm seine Arme, wird seine <color red<Herzsphäre\n>coloroff>angreifbar.\n\n\nDa die <color red<Herzsphäre>coloroff> nicht mit der <color yellow<Peitsche >coloroff>herausgelöst\nwerden kann, musst du einen anderen Weg finden,\nsie zu zerstören.")
          					  case 1:
          					}
          				  case 1:
          				}
          			  case 1:
/*< 28>*/ 				printf(/* textboxtype: 0, unk: 2, line: 13 */ "Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
          			}
          		  case 1:
          			goto flw_24
          		  case 2:
          			goto flw_24
          		  case 3:
          			goto flw_24
          		}
          	  case 1:
/*<183>*/ 		printf(/* textboxtype: 0, unk: 2, line: 190 */ "Sehr wohl, <0x10012:0x00000005>Gebieter. Visiere einen Gegner durch\nDrücken von (Z) an und drücke (v), um mich zu\nrufen und mehr über ihn zu erfahren.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

          void entrypoint_006_661() {
/*<184>*/ 	start()
/*<185>*/ 	printf(/* textboxtype: 0, unk: 0, line: 188 */ "Ich habe dir etwas zu berichten,\n<0x10012:0x0000000b>Gebieter <heroname>.\n\n\nMeine Analyse des Angriffsmusters dieses Gegners ist\nabgeschlossen. Soll ich dir das Ergebnis der Analyse\nmitteilen?[1-]Ja[2]Nein")
/*<186>*/ 	story_flags[776 /* us: 805A9B2D 0x01, jp: 805ACDAD 0x01 */] = true;
/*<187>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_268
          	  case 1:
/*<188>*/ 		printf(/* textboxtype: 0, unk: 2, line: 190 */ "Sehr wohl, <0x10012:0x00000005>Gebieter. Visiere einen Gegner durch\nDrücken von (Z) an und drücke (v), um mich zu\nrufen und mehr über ihn zu erfahren.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

          void entrypoint_006_610() {
/*< 13>*/ 	start()
/*< 15>*/ 	printf(/* textboxtype: 2, unk: 0, line: 24 */ "Der „dunkle Äonenskorpion“, wie dieses Wesen\nauch genannt wird, ist ein 1000 Jahre alter und\nausgewachsener <color blue<Minighad>coloroff>.\n\nSein Körper ist zu 90 % von einer Panzerschicht\nüberzogen, die jegliche Schwertangriffe abwehrt.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 16>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_17
          	  case 1:
          	}
          }

          void entrypoint_006_662() {
/*<189>*/ 	start()
/*<190>*/ 	printf(/* textboxtype: 0, unk: 0, line: 188 */ "Ich habe dir etwas zu berichten,\n<0x10012:0x0000000b>Gebieter <heroname>.\n\n\nMeine Analyse des Angriffsmusters dieses Gegners ist\nabgeschlossen. Soll ich dir das Ergebnis der Analyse\nmitteilen?[1-]Ja[2]Nein")
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
/*< 71>*/ 					printf(/* textboxtype: 0, unk: 2, line: 85 */ "Sollte Ghirahim seine Dolche auf dich abfeuern,\nkannst du sie sofort auf ihn zurückschleudern,\nindem du sie mit dem Schwert triffst.\n\nDabei ist es entscheidend, deinen Schwertschlag\nentsprechend der Richtung der Dolche auszuführen.\n\n\nSolltest du von Dolchen eingekreist werden,\nführe eine Technik aus, mit der du gleichzeitig\neinen <color red<Angriff in alle Richtungen >coloroff>ausführen kannst.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 76>*/ 					switch (choice(2)) {
          					  case 0:
/*< 77>*/ 						printf(/* textboxtype: 0, unk: 0, line: 86 */ "Solltest du es schaffen, Ghirahims Teleportations-\nAngriff auszuweichen, ergibt sich eine sehr gute\nMöglichkeit zum Konter.\n\nGhirahim führt verschiedene Arten des\nTeleportations-Angriffes aus, doch der Kopfangriff\nkündigt sich durch eine bestimmte Körperhaltung an.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 78>*/ 						switch (choice(2)) {
          						  case 0:
/*< 79>*/ 							printf(/* textboxtype: 2, unk: 0, line: 87 */ "<0x10012:0x00000001>Ghirahim wird versuchen, deinen Angriff abzuwehren,\nwozu er seine Waffen nutzt.\n\n\n<0x10012:0x00000002>Da er zwei Schwerter trägt, kann er mit einer\nWahrscheinlichkeit von 100 % zwei deiner Angriffe\nin Folge parieren.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<142>*/ 					printf(/* textboxtype: 2, unk: 0, line: 84 */ "Ich stelle fest, dass Ghirahim seine Kampfstrategie im\nLaufe des Kampfes geändert hat.\n\n\nIch gehe davon aus, dass dies aufgrund des Schadens,\nden er erlitten hat, geschehen ist.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<143>*/ 					switch (choice(2)) {
          					  case 0:
/*< 75>*/ 						printf(/* textboxtype: 0, unk: 2, line: 13 */ "Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
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
/*< 80>*/ 					printf(/* textboxtype: 2, unk: 0, line: 81 */ "Die Dolche, welche Ghirahim umgeben, dienen ihm\nals Schutz.\n\n\nZuerst die Dolche anzugreifen, um Ghirahims Abwehr\nzu schwächen, ist eine mögliche Methode, um siegreich\naus diesem Kampf hervorzugehen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 83>*/ 					switch (choice(2)) {
          					  case 0:
/*< 84>*/ 						printf(/* textboxtype: 0, unk: 2, line: 82 */ "Ghirahim wird versuchen, dein Schwert mit seiner\nrechten Hand abzufangen und festzuhalten,\n<0x10012:0x00000002>mein Gebieter.\n\nGeschieht dies, schwinge das Schwert <color red<nach oben und\nunten>coloroff>, um dich wieder freizukämpfen.\n\n\nGhirahim ist jedoch sehr mächtig, weshalb es nicht\nausreicht, nur einen einzigen Schwung auszuführen,\num dich zu befreien.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 85>*/ 						switch (choice(2)) {
          						  case 0:
/*< 86>*/ 							printf(/* textboxtype: 0, unk: 0, line: 83 */ "Ich empfehle, Ghirahim so zu attackieren,\ndass die Dolche und seine rechte Hand\ndeinen Angriff nicht behindern.\n\nGhirahim bewegt seine rechte Hand synchron\nzur Bewegung deines Schwerts, <0x10012:0x00000002>mein Gebieter.\n\n\nEs kommt jedoch auch vor, dass Ghirahim seine\nBewegung <color red<ein wenig verzögert >coloroff>ausführt.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*< 82>*/ 					printf(/* textboxtype: 0, unk: 2, line: 13 */ "Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
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
/*<193>*/ 		printf(/* textboxtype: 0, unk: 2, line: 190 */ "Sehr wohl, <0x10012:0x00000005>Gebieter. Visiere einen Gegner durch\nDrücken von (Z) an und drücke (v), um mich zu\nrufen und mehr über ihn zu erfahren.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

          void entrypoint_006_663() {
/*<194>*/ 	start()
/*<195>*/ 	printf(/* textboxtype: 0, unk: 0, line: 188 */ "Ich habe dir etwas zu berichten,\n<0x10012:0x0000000b>Gebieter <heroname>.\n\n\nMeine Analyse des Angriffsmusters dieses Gegners ist\nabgeschlossen. Soll ich dir das Ergebnis der Analyse\nmitteilen?[1-]Ja[2]Nein")
/*<196>*/ 	story_flags[778 /* us: 805A9B2D 0x04, jp: 805ACDAD 0x04 */] = true;
/*<197>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_239
          	  case 1:
/*<198>*/ 		printf(/* textboxtype: 0, unk: 2, line: 190 */ "Sehr wohl, <0x10012:0x00000005>Gebieter. Visiere einen Gegner durch\nDrücken von (Z) an und drücke (v), um mich zu\nrufen und mehr über ihn zu erfahren.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

          void entrypoint_006_664() {
/*<199>*/ 	start()
/*<200>*/ 	printf(/* textboxtype: 0, unk: 0, line: 188 */ "Ich habe dir etwas zu berichten,\n<0x10012:0x0000000b>Gebieter <heroname>.\n\n\nMeine Analyse des Angriffsmusters dieses Gegners ist\nabgeschlossen. Soll ich dir das Ergebnis der Analyse\nmitteilen?[1-]Ja[2]Nein")
/*<201>*/ 	story_flags[779 /* us: 805A9B2D 0x08, jp: 805ACDAD 0x08 */] = true;
/*<202>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_240
          	  case 1:
/*<203>*/ 		printf(/* textboxtype: 0, unk: 2, line: 190 */ "Sehr wohl, <0x10012:0x00000005>Gebieter. Visiere einen Gegner durch\nDrücken von (Z) an und drücke (v), um mich zu\nrufen und mehr über ihn zu erfahren.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

          void entrypoint_006_699() {
/*<270>*/ 	start()
/*<271>*/ 	switch (story_flags[844 /* us: 805A9B35 0x08, jp: 805ACDB5 0x08 */]) {
          	  case 0:
/*<273>*/ 		printf(/* textboxtype: 0, unk: 0, line: 17 */ "Diese überdimensional große Spinne lebt in den\nTiefen des Waldes und spinnt enorm lange Fäden.\n\n\nSie fängt ihre Beute in ihrem Netz und greift sie\ndanach an. Ihr Rücken ist gepanzert, ihr Bauch\njedoch ist sehr empfindlich.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<275>*/ 		switch (choice(2)) {
          		  case 0:
/*<281>*/ 			switch (story_flags[845 /* us: 805A9B35 0x10, jp: 805ACDB5 0x10 */]) {
          			  case 0:
/*<283>*/ 				printf(/* textboxtype: 0, unk: 2, line: 19 */ "Um ihren wunden Punkt zu verbergen, wendet sie\nihrem Feind stets den Rücken zu.\n\n\nDu musst versuchen, die Skulltula umzudrehen,\num ihren Bauch treffen zu können.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<276>*/ 				switch (choice(2)) {
          				  case 0:
/*<277>*/ 					printf(/* textboxtype: 0, unk: 0, line: 20 */ "Nur eine einzige Stelle im Zentrum des Bauches\nist verwundbar. Ich empfehle dir, den <color green<Fangstoß\neinzusetzen>coloroff>.")
          					flw_279:
/*<279>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 21, 'param4': 2, 'param5': 244}) {
          					  case 0:
/*<278>*/ 						printf(/* textboxtype: 0, unk: 0, line: 185 */ "Du hast diesen Gegnertypus insgesamt\n<numeric arg0 1>-mal besiegt. Du verhältst dich im\nKampf mit diesem Gegnertypus meiner\nAnalyse zufolge <string arg0>.")
          					  case 1:
          					}
          				  case 1:
          					goto flw_279
          				}
          			  case 1:
/*<282>*/ 				printf(/* textboxtype: 2, unk: 0, line: 18 */ "Um ihren wunden Punkt zu verbergen, wendet sie\nihrem Feind stets den Rücken zu.\n\n\nDu musst versuchen, die Skulltula umzudrehen,\num ihren Bauch treffen zu können.")
/*<280>*/ 				story_flags[845 /* us: 805A9B35 0x10, jp: 805ACDB5 0x10 */] = true;
          				goto flw_279
          			}
          		  case 1:
          			goto flw_279
          		}
          	  case 1:
/*<272>*/ 		printf(/* textboxtype: 0, unk: 2, line: 16 */ "Diese überdimensional große Spinne lebt in den\nTiefen des Waldes und spinnt enorm lange Fäden.\n\n\nSie fängt ihre Beute in ihrem Netz und greift sie\ndanach an. Ihr Rücken ist gepanzert, ihr Bauch\njedoch ist sehr empfindlich.\n\nIch bin gerade dabei, ihr Verhalten genauer zu\nanalysieren.")
/*<274>*/ 		story_flags[844 /* us: 805A9B35 0x08, jp: 805ACDB5 0x08 */] = true;
          		goto flw_279
          	}
          }

          void entrypoint_006_648() {
/*< 23>*/ 	start()
/*< 25>*/ 	printf(/* textboxtype: 2, unk: 0, line: 66 */ "Es hat den Anschein, als wäre er durch Ghirahims\ndunklen Zauber verflucht und zu einem noch\nbedrohlicheren Wesen geworden.\n\nDie <color red<kugelförmigen roten Elemente>coloroff> an seinen Armen\nund Rumpf schützt er um jeden Preis.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 26>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_27
          	  case 1:
          	}
          }

          void entrypoint_006_665() {
/*< 33>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 0, unk: 0, line: 134 */ "Sein Körper ist von Fels bedeckt und besitzt nur eine\neinzige Schwachstelle, und zwar sein <color red<Auge>coloroff>.\n\n\nDeine Chancen, Beradama zu besiegen, erhöhen sich,\nwenn du eine Möglichkeit findest, die Felsen von\nseinem Körper zu lösen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 36>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_231
          	  case 1:
          	}
          }

          void entrypoint_006_649() {
/*< 52>*/ 	start()
/*< 54>*/ 	printf(/* textboxtype: 0, unk: 0, line: 71 */ "Er nennt sich selbst „<color blue<Dunkelfürst>coloroff>“.\nÜber seine Herkunft ist mir jedoch nichts bekannt.\n\n\nMeiner Analyse zufolge ist er äußerst intelligent.\nZudem geht von ihm eine starke bösartige Aura aus.\n\n\nEs hat den Anschein, als nutze er im Augenblick nur\neinen Teil seiner wahren Macht.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 55>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_69
          	  case 1:
          	}
          }

          void entrypoint_006_666() {
/*<204>*/ 	start()
/*<205>*/ 	printf(/* textboxtype: 0, unk: 0, line: 188 */ "Ich habe dir etwas zu berichten,\n<0x10012:0x0000000b>Gebieter <heroname>.\n\n\nMeine Analyse des Angriffsmusters dieses Gegners ist\nabgeschlossen. Soll ich dir das Ergebnis der Analyse\nmitteilen?[1-]Ja[2]Nein")
/*<206>*/ 	story_flags[780 /* us: 805A9B2D 0x10, jp: 805ACDAD 0x10 */] = true;
/*<207>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_241
          	  case 1:
/*<208>*/ 		printf(/* textboxtype: 0, unk: 2, line: 190 */ "Sehr wohl, <0x10012:0x00000005>Gebieter. Visiere einen Gegner durch\nDrücken von (Z) an und drücke (v), um mich zu\nrufen und mehr über ihn zu erfahren.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

          void entrypoint_006_667() {
/*<209>*/ 	start()
/*<210>*/ 	printf(/* textboxtype: 0, unk: 0, line: 188 */ "Ich habe dir etwas zu berichten,\n<0x10012:0x0000000b>Gebieter <heroname>.\n\n\nMeine Analyse des Angriffsmusters dieses Gegners ist\nabgeschlossen. Soll ich dir das Ergebnis der Analyse\nmitteilen?[1-]Ja[2]Nein")
/*<211>*/ 	story_flags[781 /* us: 805A9B2D 0x20, jp: 805ACDAD 0x20 */] = true;
/*<212>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_242
          	  case 1:
/*<213>*/ 		printf(/* textboxtype: 0, unk: 2, line: 190 */ "Sehr wohl, <0x10012:0x00000005>Gebieter. Visiere einen Gegner durch\nDrücken von (Z) an und drücke (v), um mich zu\nrufen und mehr über ihn zu erfahren.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

          void entrypoint_006_650() {
/*< 70>*/ 	start()
/*< 72>*/ 	printf(/* textboxtype: 0, unk: 0, line: 80 */ "Er kommandiert die Dämonen und wird auch\n<color blue<Dunkelfürst>coloroff> genannt. Ich stelle fest, dass er äußerst\nklug ist und die Kunst der Magie beherrscht.\n\nIm Normalfall verhält er sich ruhig und vornehm,\nreizt man ihn jedoch zu sehr, zeigt er sein wahres\nGesicht.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*< 73>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_87
          	  case 1:
          	}
          }

          void entrypoint_006_668() {
/*<214>*/ 	start()
/*<215>*/ 	printf(/* textboxtype: 0, unk: 0, line: 188 */ "Ich habe dir etwas zu berichten,\n<0x10012:0x0000000b>Gebieter <heroname>.\n\n\nMeine Analyse des Angriffsmusters dieses Gegners ist\nabgeschlossen. Soll ich dir das Ergebnis der Analyse\nmitteilen?[1-]Ja[2]Nein")
/*<216>*/ 	story_flags[782 /* us: 805A9B2D 0x40, jp: 805ACDAD 0x40 */] = true;
/*<217>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_238:
/*<238>*/ 		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
          		  case 0:
          			flw_116:
/*<116>*/ 			printf(/* textboxtype: 2, unk: 0, line: 90 */ "Ghirahim kämpft nun mit voller Kraft. Es scheint\nbeinahe unmöglich, ihn mit gewöhnlichen Waffen\nzu verletzen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<120>*/ 			switch (choice(2)) {
          			  case 0:
/*<121>*/ 				printf(/* textboxtype: 0, unk: 2, line: 91 */ "<0x10012:0x00000001>Meiner Analyse zufolge kannst du Ghirahim durch\nAngriffe mit dem Schwert ein wenig <color red<zurückdrängen>coloroff>.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<122>*/ 				switch (choice(2)) {
          				  case 0:
/*<123>*/ 					printf(/* textboxtype: 0, unk: 0, line: 92 */ "Ghirahim versucht stets, sich im Inneren der\nPlattform zu positionieren und dich stetig nach\naußen zu drängen, <0x10012:0x00000002>Gebieter.\n\nDie Wahrscheinlichkeit, dass er dadurch verhindern\nwill, von der Plattform zu stürzen, liegt bei 85 %.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<286>*/ 					switch (choice(2)) {
          					  case 0:
/*<287>*/ 						printf(/* textboxtype: 2, unk: 0, line: 93 */ "Die Wahrscheinlichkeit, dass Ghirahim sich erneut <color red<mit\nder bloßen Hand gegen dein Schwert verteidigen wird>coloroff>,\nliegt bei exakt 95 %, <0x10012:0x00000002>Gebieter.\n\nSollte Ghirahim seine Körperhaltung verändern, achte\nsehr genau auf die <color red<Position seiner Hand>coloroff>.")
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
/*<288>*/ 				printf(/* textboxtype: 2, unk: 0, line: 90 */ "Ghirahim kämpft nun mit voller Kraft. Es scheint\nbeinahe unmöglich, ihn mit gewöhnlichen Waffen\nzu verletzen.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<289>*/ 				switch (choice(2)) {
          				  case 0:
/*<290>*/ 					printf(/* textboxtype: 0, unk: 2, line: 91 */ "<0x10012:0x00000001>Meiner Analyse zufolge kannst du Ghirahim durch\nAngriffe mit dem Schwert ein wenig <color red<zurückdrängen>coloroff>.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<291>*/ 					switch (choice(2)) {
          					  case 0:
/*<292>*/ 						printf(/* textboxtype: 0, unk: 0, line: 92 */ "Ghirahim versucht stets, sich im Inneren der\nPlattform zu positionieren und dich stetig nach\naußen zu drängen, <0x10012:0x00000002>Gebieter.\n\nDie Wahrscheinlichkeit, dass er dadurch verhindern\nwill, von der Plattform zu stürzen, liegt bei 85 %.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<293>*/ 						switch (choice(2)) {
          						  case 0:
/*<119>*/ 							printf(/* textboxtype: 0, unk: 2, line: 13 */ "Dies sind alle Daten, die ich bisher in Erfahrung\nbringen konnte.\n\n\nSollte ich neue Informationen haben, teile ich dir dies\nüber das Leuchten deines Schwertes mit, <0x10012:0x00000002>Gebieter.\n\n\nRufe mich dann, indem du (v) drückst.<0x10011:0x09cd>\n\n\n\nSolltest du Informationen zu deiner Ausrüstung oder\nder aktuellen Umgebung benötigen, fordere meinen\n<color red<Lagebericht>coloroff> an.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
          				}
          			}
          		}
          	  case 1:
/*<218>*/ 		printf(/* textboxtype: 0, unk: 2, line: 190 */ "Sehr wohl, <0x10012:0x00000005>Gebieter. Visiere einen Gegner durch\nDrücken von (Z) an und drücke (v), um mich zu\nrufen und mehr über ihn zu erfahren.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

          void entrypoint_006_651() {
/*<115>*/ 	start()
/*<117>*/ 	printf(/* textboxtype: 0, unk: 0, line: 89 */ "Im Vergleich zur letzten Begegnung mit ihm hat sich\nsein Aussehen um bis zu 90 % verändert.\n\n\nZudem geht eine schwarze Aura von ihm aus,\ndie seinen gesamten Körper umhüllt.\n\n\n<0x10012:0x00000001>Ich habe dir etwas zu berichten, Gebieter.\nEin kleiner Moment der Unaufmerksamkeit\nkann in diesem Kampf bereits zu viel sein.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<118>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_238
          	  case 1:
          	}
          }

          void entrypoint_006_669() {
/*<219>*/ 	start()
/*<220>*/ 	printf(/* textboxtype: 0, unk: 0, line: 191 */ "Ich habe dir etwas zu berichten,\n<0x10012:0x0000000b>Gebieter <heroname>.\nIch habe Neues über den <color blue<Todbringer >coloroff>herausgefunden.\n\nMöchtest du das Ergebnis meiner Analyse erfahren?[1-]Ja[2]Nein")
/*<221>*/ 	story_flags[783 /* us: 805A9B2D 0x80, jp: 805ACDAD 0x80 */] = true;
/*<222>*/ 	switch (choice(2)) {
          	  case 0:
/*<232>*/ 		printf(/* textboxtype: 0, unk: 2, line: 124 */ "In dieser vom Todbringer beherrschten Welt steht der\n<color red<Himmelsstrahl >coloroff>nicht zur Verfügung.[1-]Mehr\nDetails[2]Keine\nDetails")
/*<233>*/ 		switch (choice(2)) {
          		  case 0:
/*<225>*/ 			printf(/* textboxtype: 2, unk: 0, line: 111 */ "Ich stelle fest, dass einzig und allein das <color yellow<Master-\nSchwert>coloroff> dem Todbringer Schaden zufügen kann.\n\n\nAlle anderen Waffen haben offenbar keinerlei\nWirkung.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<226>*/ 			switch (choice(2)) {
          			  case 0:
/*<227>*/ 				switch (scene_flags[120 /* 0xE 01 */]) {
          				  case 0:
/*<228>*/ 					printf(/* textboxtype: 0, unk: 0, line: 122 */ "Der Todbringer nutzt die Energie der einschlagenden\nBlitze, indem er sie in seinem Schwert speichert.\n\n\nAchte darauf, den Todbringer in diesem Fall nicht\nanzugreifen, da eine Berührung mit seinem Schwert\ndich lähmen kann, <0x10012:0x00000002>Gebieter.\n[1-]Mehr\nDetails[2]Keine\nDetails")
/*<230>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_229:
/*<229>*/ 						printf(/* textboxtype: 2, unk: 0, line: 123 */ "Ich bin noch damit beschäftigt, die Daten einzuordnen\nund benötige dafür noch ein wenig mehr Zeit.\n\n\nWarte eine Zeit lang, visiere dann den Todbringer\ndurch Drücken von (Z) an und drücke (v), um mich\nzu rufen.<0x10011:0x07cd><0x10011:0x09cd>")
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
/*<223>*/ 		printf(/* textboxtype: 0, unk: 2, line: 190 */ "Sehr wohl, <0x10012:0x00000005>Gebieter. Visiere einen Gegner durch\nDrücken von (Z) an und drücke (v), um mich zu\nrufen und mehr über ihn zu erfahren.<0x10011:0x07cd><0x10011:0x09cd>")
          	}
          }

