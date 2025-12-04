          void entrypoint_108_03() {
/*< 32>*/ 	start()
/*<255>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 113, 'next': 33, 'param3': 24}
/*< 33>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10008:0x01cd>Los!<0x10005:0x000f0000>")
          }

          void entrypoint_108_20() {
/*<156>*/ 	start()
/*<289>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<290>*/ 		printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x00000001>Die Statue der Göttin mag aus dem\nWolkenhort verschwunden sein, doch\ndie Göttin selbst trage ich stets in\nmeinem Herzen.\nGeht es dir ähnlich, <heroname>?")
          	  case 1:
/*<282>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*<283>*/ 			printf(/* textboxtype: 1, unk: 0, line: 97 */ "<0x10009:0x00000001>Du scheinst mir gut voranzukommen!\nMach weiter so!")
          		  case 1:
/*<278>*/ 			switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          			  case 0:
/*<281>*/ 				printf(/* textboxtype: 1, unk: 0, line: 96 */ "<0x10009:0x00000001>Was, Narisha?<pause 40> Also über ihn habe ich\nnur Gerüchte gehört...\n\n\nLeider weiß ich jedoch nicht allzu viel\nüber ihn...\n\n\nSprich besser mit deinem Lehrer für\nden praktischen Unterricht, Meister\n<color blue<Otus>coloroff>.")
          			  case 1:
/*<279>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<280>*/ 					printf(/* textboxtype: 1, unk: 0, line: 95 */ "<0x10009:0x00000001>Ach, Mia ist ja sooo süß!<pause 30>\nHm? Triforce?<pause 40>\nHat das was mit Mia zu tun?")
          				  case 1:
/*<157>*/ 					printf(/* textboxtype: 1, unk: 0, line: 94 */ "<0x10009:0x00000001>Der Direktor hat mich gebeten, mich\num Mia zu kümmern.\n\n\nDie ist vielleicht niedlich!\nIch überlege, mir selbst auch so ein\nHaustier anzuschaffen!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_04() {
/*< 34>*/ 	start()
/*<151>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 59, 'param3': 32}
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': -1, 'next': 153, 'param3': 50}
/*<153>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 150, 'param3': 49}
/*<150>*/ 	make_actor_do_something(0, 10)
/*<152>*/ 	{'type': 'type3', 'subType': 4, 'param1': 2578, 'param2': 2562, 'next': 35, 'param3': 13}
/*< 35>*/ 	printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x1000D:0x1906><0x10008:0x01cd>Hey, <heroname>! Hier!")
/*< 57>*/ 	set_camera(11, 0)
/*<244>*/ 	make_actor_do_something(1, 10)
/*<213>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 10, 'next': 261, 'param3': 17}
/*<261>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<262>*/ 		printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x0a0e0a01>Guten Morgen, <heroname>!\nWie ich sehe, stellst du dich dem\n<color red<Helden-Modus>coloroff>? Du bist ja ganz\nschön mutig!\nHeute ist die <color red<Vogelreiter-Zeremonie>coloroff>,\nwie fühlst du dich?\n\n\nIch möchte etwas mit dir besprechen.\nHalte (Z) gedrückt, sieh zu mir und\ndrücke dann (A), um mit mir zu reden.<0x10011:0x07cd>")
          		flw_64:
/*< 64>*/ 		scene_flags[0 'Skyloft'][36 /* 0x5 10 */] = true;
/*< 75>*/ 		story_flags[565 /* us: 805A9B19 0x10, jp: 805ACD99 0x10 */] = true;
/*<254>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*< 56>*/ 		printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0a0e0a01>Guten Morgen, <heroname>!\nHeute ist die <color red<Vogelreiter-Zeremonie>coloroff>,\nwie fühlst du dich?\n\nIch möchte etwas mit dir besprechen.\nHalte (Z) gedrückt, sieh zu mir und\ndrücke dann (A), um mit mir zu reden.<0x10011:0x07cd>")
          		goto flw_64
          	}
          }

          void entrypoint_108_21() {
/*<186>*/ 	start()
/*<192>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 190, 'param3': 32}
/*<190>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 187, 'param3': 13}
/*<187>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10008:0x01cd>Hey, <heroname>!")
/*<188>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x1000A:0x001200cd><0x10009:0x000a0202>Um auf dieses Dach zu gelangen, reicht\nes nicht, wenn du durch Drücken von\n(A) <color green<sprintest>coloroff>.")
/*<191>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 193, 'param3': 17}
/*<193>*/ 	wait_frames(15)
/*<189>*/ 	set_camera(19, 0)
/*<230>*/ 	printf(/* textboxtype: 1, unk: 0, line: 23 */ "Du hast bestimmt bereits die Holzkiste\nentdeckt, oder?\nStell dich davor und halte (A) gedrückt,\num sie zu <color green<verschieben>coloroff>.\n<color green<Sprinte>coloroff> dann durch Drücken von (A)\nauf die Kiste zu oder halte direkt davor\n(StickUp) gedrückt, um auf sie zu klettern.")
          }

          void entrypoint_108_05() {
/*< 36>*/ 	start()
/*<267>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<268>*/ 		printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x000b0a03>Wie es aussieht, weißt du bereits, dass\ndu durch Drücken von (A) sprinten\nkannst.\n\nAber überanstreng dich nicht, wenn\ndeine <color red<Ausdaueranzeige>coloroff> leer ist, geht\ndir die Puste aus.\n\nWillst du noch einen weiteren Hinweis\nhören?\n[1-]Ja[2]Nein")
/*<270>*/ 		switch (choice(2)) {
          		  case 0:
/*<271>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "Über diese Lücke kannst du springen,\nindem du dich einfach darauf\nzubewegst... Das ist der <color green<automatische\nSprung>coloroff>!\nAutomatisch<0x10006:0xfccd>...<pause 15>\n<0x10006:0x00cd>Ich liebe dieses Wort!")
          		  case 1:
/*<269>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Dann komm so schnell wie möglich her!")
          		}
          	  case 1:
/*<266>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x000b0a03>Und? Es ist praktisch, durch Drücken\nvon (A) zu <color green<sprinten>coloroff>, oder?\n\n\nWenn dabei deine <color red<Ausdaueranzeige\n>coloroff>leer wird, geht dir jedoch leider die\nPuste aus. Wenn sie beinahe leer ist,\nsolltest du dich kurz ausruhen.\nUnd weiter geht's!\n\n\n\nÜber Lücken wie diese kannst du durch\nnormale Bewegung springen. Das ist\nder <color green<automatische Sprung>coloroff>!\n\nAutomatisch<0x10006:0xfccd>...<0x10006:0x00cd> Klingt gut!")
          	}
          }

          void entrypoint_108_22() {
/*<208>*/ 	start()
/*<210>*/ 	switch (scene_flags[92 /* 0xA 10 */]) {
          	  case 0:
/*<211>*/ 		printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x00000001>Der Beginn der Zeremonie wird\nverschoben, bis du deinen Wolkenvogel \ngefunden hast.\n\nDu kannst ihn also in Ruhe suchen\ngehen.")
          	  case 1:
/*<212>*/ 		printf(/* textboxtype: 1, unk: 0, line: 100 */ "<0x10009:0x00000001>Der Beginn der Vogelreiter-Zeremonie\nwurde verschoben, damit du deinen\nWolkenvogel suchen kannst.\nEine gute Nachricht, was?")
          	}
          }

          void entrypoint_108_06() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf(/* textboxtype: 1, unk: 2, line: 44 */ "<0x10009:0x000b0a52>Aber, <heroname>!\nDu kannst deinen Lehrer doch nicht\neinfach ignorieren!\n\nHalte (Z) gedrückt, sieh zu mir und\ndrücke (A), um mit mir zu reden!<0x10011:0x07cd>")
          }

          void entrypoint_108_23() {
/*<217>*/ 	start()
/*<225>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<226>*/ 		printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x00000001>Und, <heroname>?\nKommst du gut voran?\n\n\nWenn du noch Fragen hast, kannst du\ndich gern an mich wenden!")
          	  case 1:
/*<221>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*<224>*/ 			printf(/* textboxtype: 1, unk: 0, line: 104 */ "<0x10009:0x00000001>Der Tornadostoß ist auch für die Vögel\nsehr anstrengend.\n\n\nAber ich denke, für deinen roten\nWolkenvogel ist das kein Problem.")
          		  case 1:
/*<220>*/ 			switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          			  case 0:
/*<223>*/ 				printf(/* textboxtype: 1, unk: 0, line: 103 */ "<0x10009:0x00000005>Hm? <heroname>?\nWas machst du hier so spät?\n\n\nNarisha? Das ist kein Gespräch, das\nwir mitten in der Nacht führen sollten.\n\n\nKomm morgen früh wieder, dann\nkönnen wir reden!")
          			  case 1:
/*<219>*/ 				switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          				  case 0:
/*<222>*/ 					printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x00000001><heroname>...\nDu wirst Zelda doch finden, oder?\n\n\nAch, schau nicht so betrübt.\nIch bin mir ganz sicher, dass du es\nschaffen kannst. Ich glaube fest an\ndich!")
          				  case 1:
/*<218>*/ 					printf(/* textboxtype: 1, unk: 0, line: 101 */ "<0x10009:0x00000001>Ihr Schüler dürft nachts keine\nWolkenvögel fliegen.\n\n\nDu kannst also jetzt nicht nach Zelda\nsuchen! Leg dich ins Bett und brich\nmorgen früh ausgeruht auf.\n\nWenn du nicht ab und zu mal Pause\nmachst, wird es dir nicht gelingen,\neinen kühlen Kopf zu bewahren!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_07() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x000a0a00><0x10008:0x02cd><heroname>!\n<0x10008:0x02cd>Was machst du denn?!?")
          }

          void entrypoint_108_24() {
/*<232>*/ 	start()
/*<245>*/ 	switch (scene_flags[41 /* 0x4 02 */]) {
          	  case 0:
/*<238>*/ 		printf(/* textboxtype: 1, unk: 0, line: 107 */ "<0x10009:0x00000002><heroname>!\nJetzt ist keine Zeit zum Trödeln!\n\n\nGeh und such deinen Wolkenvogel!\nFrag mal die anderen Schüler drinnen,\nvielleicht wissen sie etwas.")
          	  case 1:
/*<239>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<246>*/ 			printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x00000002><heroname>, warum läufst du\neinfach an deinem Lehrer vorbei?\n\n\nKomm einen Moment her!")
          		  case 1:
/*<233>*/ 			printf(/* textboxtype: 1, unk: 0, line: 106 */ "<0x10009:0x00000002>Aber, aber, <heroname>!\nIgnorierst du etwa deinen alten\nLehrer?\n\nKomm her und hör mir ein wenig zu!")
          		}
          	}
          }

          void entrypoint_108_08() {
/*< 76>*/ 	start()
/*< 88>*/ 	switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          	  case 0:
/*<209>*/ 		printf(/* textboxtype: 1, unk: 0, line: 76 */ "")
          	  case 1:
/*< 83>*/ 		switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          		  case 0:
/*< 85>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 77, 'param3': 31}
/*< 77>*/ 			printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x00000001>Na, <heroname>?\nWas macht deine Suche nach Zelda?\nHast du sie gefunden?\n\n<0x10009:0x00000005>Wer?<pause 40> Narisha?\nDu hast wohl mit dem Direktor\ngeredet...\n\nNarisha befindet sich in der\nSturmwolke.\n\n\nAber<0x10006:0xfecd>...<0x10006:0x00cd><pause 25> Es ist nicht der Narisha,\nden wir kannten...\n\n\n<0x10006:0xfecd>Er ist ein... <pause 40><0x10006:0x01cd><color red<Monster>coloroff>!\n\n\n\n<0x10009:0x0000000f>Er mag wie Narisha aussehen, aber als\nich mich ihm das letzte Mal näherte,\nhat er mich angegriffen!\n\nNarishas Blick war so voller Hass...\n\n\n\nEr hat sich verändert...\n<0x10006:0xfecd>Irgendwas...<0x10006:0x00cd><pause 25> Irgendwas ist geschehen...\n<pause 25>Das kann ich spüren.")
/*<203>*/ 			wait_frames(40)
/*< 78>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00000005>Wie?<pause 40> Du möchtest mit Narisha reden?\n\n\n\n<0x10006:0xfecd>Das...<0x10006:0x00cd> Das ist unmöglich.\nNarisha ist im Moment für unsere\nWorte unerreichbar.\n\n<0x10006:0xfecd>Und selbst wenn...<0x10006:0x00cd>\nSelbst wenn du nah genug an ihn\nherankommen würdest, er würde dich\nangreifen, und das wäre dein Ende!")
/*<204>*/ 			wait_frames(40)
/*<201>*/ 			printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x00000052>Was?<pause 40> Du willst trotzdem gehen?\n\n\n\n<0x10006:0xfecd>Nun...<0x10006:0x00cd>\nDu willst es tun, um Zelda zu finden,\noder?\n\nGut.<pause 30>\nIch habe das Gefühl, du lässt dich\ndavon nicht abbringen!")
/*<205>*/ 			wait_frames(30)
/*<202>*/ 			printf(/* textboxtype: 1, unk: 0, line: 54 */ "Ich habe eine Idee!\nKomm mit!")
/*< 86>*/ 			story_flags[362 /* us: 805A9B03 0x01, jp: 805ACD83 0x01 */] = true;
/*< 87>*/ 			changeScene(0, 0) // 
          		  case 1:
/*<276>*/ 			switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          			  case 0:
/*<277>*/ 				printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x00000001>Hallo, <heroname>!\n<pause 30>Was sagst du? Das Triforce?\n\n\nEs tut mir leid, aber dazu kann ich dir\nnichts sagen. Frag doch am besten den\nDirektor, ja?")
          			  case 1:
/*< 84>*/ 				printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00000001>Hallo, <heroname>!\nWie geht die Suche nach Zelda voran?\n\n\nTut mir leid, dass du sie allein suchen\nmusst! Bitte finde sie!")
          			}
          		}
          	}
          }

          void entrypoint_108_09() {
/*< 79>*/ 	start()
/*< 80>*/ 	printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x00000002>Irgendetwas stimmt mit Narisha in der\nSturmwolke nicht.\n\n\nWenn du die Ursache für sein\nVerhalten beseitigst, kommt der alte\nNarisha vielleicht wieder zurück.\n\nAlso, <heroname>!\nIch bringe dir jetzt eine ganz spezielle\nVogelreiter-Technik bei!\n\n<0x10009:0x00000003>Den <color red<Tornadostoß>coloroff>!")
/*<259>*/ 	set_camera(22, 0)
/*<257>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "Der Tornadostoß ist ein starker\nAngriff, mit seiner Hilfe kannst du\nNarisha sicher von dem Übel, das\nihn befallen hat, befreien!\nDie Ausführung ist im Prinzip nicht\nschwierig. Du musst nur (A) drücken,\ndas ist alles!\n\nAllerdings wird dein Wolkenvogel\nextrem schnell und dieser Zustand\nhält länger an als nach der normalen\n<color red<Attacke>coloroff>.\nDie Kunst ist, den Vogel im Flug stabil\nzu halten, deshalb lernen nur die\nerfahrensten Schüler der Oberstufe\ndiese besondere Technik.\nFür dich ist es eigentlich noch zu\nfrüh...<pause 30> Aber wir wollen sehen,\nvielleicht bist du ja schon bereit dafür.")
/*<260>*/ 	set_camera(-1, 0)
/*<258>*/ 	printf(/* textboxtype: 1, unk: 0, line: 58 */ "<0x10009:0x00000004>Sprinte los und spring von hier ab,\ndann rufe deinen Wolkenvogel.")
/*< 94>*/ 	story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = true;
/*< 99>*/ 	story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
/*<249>*/ 	zone_temp_flags[13 /* 0x0 20 */] = true;
          }

          void entrypoint_108_10() {
/*< 91>*/ 	start()
/*<129>*/ 	switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          	  case 0:
/*<130>*/ 		printf(/* textboxtype: 1, unk: 0, line: 61 */ "<0x10009:0x0000000f>Was Zelda passiert ist, ist furchtbar...\n\n\n\nAber du darfst dich deswegen nicht mit\nVorwürfen quälen...\nEs war ein Unfall.")
          	  case 1:
/*<128>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<197>*/ 			switch (scene_flags[91 /* 0xA 08 */]) {
          			  case 0:
/*<199>*/ 				printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x00000001>Lass die Zeremonie die Sorge von uns\nLehrern sein und sieh zu, dass du\ndeinen Vogel findest!")
          			  case 1:
/*<127>*/ 				printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x0000000f>Was ist, <heroname>?\n<pause 30>Dein Vogel ist nicht gekommen, als du\nihn gerufen hast?\n\nEs kann eigentlich nicht sein, dass dein\nWolkenvogel nicht deinem Ruf gefolgt\nist<0x10006:0xfecd>...\n\nHast du schon mit Meister <color blue<Tytor>coloroff>\ngesprochen? Schließlich ist er der\nZeremonienmeister.\n\nAha...\nDer Direktor wird schon einen Weg\nfinden, dich an der Zeremonie\nteilnehmen zu lassen.\nAber du solltest deinen Vogel\nso schnell wie möglich finden!")
/*<200>*/ 				scene_flags[0 'Skyloft'][91 /* 0xA 08 */] = true;
          			}
          		  case 1:
/*<195>*/ 			switch (scene_flags[90 /* 0xA 04 */]) {
          			  case 0:
/*<196>*/ 				printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x00000001>Du hast Meister <color blue<Tytor >coloroff>und mich schon\nimmer gern verwechselt...\n\n\nIch, <color blue<Otus>coloroff> mit den weißen Haaren, gebe\nden praktischen Unterricht.<color blue<\n\n>coloroff>\nMeister <color blue<Tytor>coloroff> hat dunkle Haare und\nunterrichtet die Theorie. Merk dir das\nbitte.")
          			  case 1:
/*< 92>*/ 				printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00000001>So, <heroname>!\nDer große Tag der <color red<Vogelreiter-\nZeremonie>coloroff> ist also endlich gekommen!\n\nErinnere dich an meine praktischen\nLektionen und den Unterricht von\nMeister <color blue<Tytor>coloroff> und gib dein Bestes!\n\nWo wir gerade davon sprechen...\nWeißt du noch, dass du dich durch\nDrücken von (C) <color red<umsehen>coloroff> kannst?<0x10011:0x06cd>\n\n<color green<Drücke>coloroff> einfach (C), wenn du dir etwas\ngenauer ansehen möchtest!<0x10011:0x06cd>\n\n\nUnd wenn sich der <color red<Zeiger verschiebt>coloroff>,\nzeige mit der Wii-Fernbedienung auf\nden Bildschirm und <color green<drücke >coloroff>(v)! <0x10011:0x09cd>")
/*<198>*/ 				scene_flags[0 'Skyloft'][90 /* 0xA 04 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_108_11() {
/*<123>*/ 	start()
/*<163>*/ 	switch (scene_flags[20 /* 0x3 10 */]) {
          	  case 0:
/*<273>*/ 		switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          		  case 0:
/*<275>*/ 			printf(/* textboxtype: 1, unk: 0, line: 70 */ "<0x10009:0x00000001>Das Erdland existiert also wirklich?\n\n\n\nEs mag nur eine Hypothese sein, aber\nvermutlich ist das Erdland kein solch\nfriedlicher Ort wie unser Wolkenhort.\nHmmm...")
          		  case 1:
/*<272>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<274>*/ 				printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x00000001>Wie kommst du bei der Suche nach\nZelda voran?\n\n\nWenn du erschöpft bist, ruh dich doch\nin deinem Bett aus. So kannst du den\nWolkenhort bei Nacht erleben, und\ndeine Herzen werden auch aufgefüllt!")
          			  case 1:
/*<167>*/ 				printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x00000001>Sei stets vorsichtig! Ich hoffe, dass du\nZelda finden kannst.")
          			}
          		}
          	  case 1:
/*<168>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 124, 'param3': 31}
/*<124>*/ 		printf(/* textboxtype: 1, unk: 0, line: 64 */ "<0x10009:0x00000011><heroname>!\nIch habe gehört, dass du Zelda unter\nden Wolken suchen willst.\n\nDer Direktor sprach davon, dass unter\nden Wolken das Erdland liegt... Weißt\ndu etwas über dieses Erdland?")
/*<169>*/ 		switch (adventure_pouch_has(9 0x0009)) {
          		  case 0:
/*<171>*/ 			printf(/* textboxtype: 1, unk: 0, line: 71 */ "Ein interessantes Schwert...\nAber einen Schild brauchst du auch<pause 10>.<pause 10>.<pause 10>.<pause 10>\nOh, du hast schon einen!\nVorbildlich, vorbildlich!\nHier, ein Abschiedsgeschenk von mir.")
          			flw_172:
/*<172>*/ 			give_item(4 0x04);
/*<256>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 173, 'param3': 12}
          			flw_173:
/*<173>*/ 			printf(/* textboxtype: 1, unk: 0, line: 72 */ "Wenn du nicht weißt, wie du mit einem\nSchild umgehst, frag am besten den\n<color blue<Schwertmeister >coloroff>in der Übungshalle.\nEr kann es dir sicher beibringen.")
/*<166>*/ 			scene_flags[0 'Skyloft'][20 /* 0x3 10 */] = true;
/*<214>*/ 			switch (scene_flags[89 /* 0xA 02 */]) {
          			  case 0:
          			  case 1:
/*<215>*/ 				story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
/*<216>*/ 				scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
          			}
          		  case 1:
/*<247>*/ 			switch (is_adventure_pouch_full()) {
          			  case 0:
/*<248>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "Das ist übrigens ein interessantes\nSchwert... Aber einen Schild brauchst\ndu auch.\n\nDu kannst allerdings keine weitere\nAusrüstung mehr tragen. Na, dann\nnimm das als Abschiedsgeschenk.")
          				goto flw_172
          			  case 1:
/*<170>*/ 				printf(/* textboxtype: 1, unk: 0, line: 65 */ "Das ist übrigens ein interessantes\nSchwert... Aber einen Schild brauchst\ndu auch.\n\nNimm den hier!")
/*<164>*/ 				give_item(116 0x74);
/*<165>*/ 				printf(/* textboxtype: 1, unk: 0, line: 67 */ "Ein Holzschild ist leicht und einfach zu\nhandhaben, hält aber nicht viel aus.\nAußerdem kann er Feuer fangen.\n\nWenn dein Schild zerstört wird, kannst\ndu dir im Basar einen neuen kaufen.\n\n\nDu kannst den Schild ausrüsten,\nindem du (-) <color green<gedrückt hältst>coloroff> und\ndie Wii-Fernbedienung bewegst,\num ihn <color green<auszuwählen>coloroff>.<0x10011:0x02cd>")
          				goto flw_173
          			}
          		}
          	}
          }

          void entrypoint_108_12() {
/*< 95>*/ 	start()
/*<206>*/ 	switch (scene_flags[77 /* 0x8 20 */]) {
          	  case 0:
/*<207>*/ 		printf(/* textboxtype: 1, unk: 0, line: 76 */ "")
          	  case 1:
/*< 97>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*< 81>*/ 			printf(/* textboxtype: 1, unk: 0, line: 73 */ "<0x10009:0x0000000a>Sehr gut, du hast innerhalb des\nZeitlimits 10 Ziele zerstört!\n\n\nDu beherrschst deinen roten\nWolkenvogel wirklich meisterlich,\n<heroname>! Wirklich sehr gut!\n\nDu hast dir das Recht verdient, den\nTornadostoß einzusetzen.")
/*< 82>*/ 			printf(/* textboxtype: 1, unk: 0, line: 74 */ "Jetzt musst du Narisha nur noch\nfinden...\n\n\nDer <color red<Besitzer der Kürbisbar >coloroff>bringt\nNarisha jedes Jahr Kürbissuppe, er\nmüsste dir helfen können.\n\nJa, am besten fragst du ihn um Rat...")
/*<107>*/ 			scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = true;
          		  case 1:
/*< 96>*/ 			switch (story_flags[641 /* us: 805A9B1D 0x04, jp: 805ACD9D 0x04 */]) {
          			  case 0:
/*< 98>*/ 				printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x0000000f>Hm, wenn es dir nicht gelingt, 10 Ziele\nin <color red<120 Sekunden >coloroff>zu zerstören, kann ich\ndir diese Technik leider nicht erlauben.\n\nRuh dich ein wenig aus, ich bin hier\nnoch eine Weile. Wenn du bereit für\neinen neuen Versuch bist, sag es mir.")
/*<100>*/ 				story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = false;
/*<227>*/ 				story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = false;
/*<228>*/ 				story_flags[641 /* us: 805A9B1D 0x04, jp: 805ACD9D 0x04 */] = false;
/*<105>*/ 				scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = true;
          			  case 1:
          			}
          		}
          	}
          }

          void entrypoint_108_13() {
/*<101>*/ 	start()
/*<103>*/ 	switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          	  case 0:
/*<104>*/ 		printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00000001>Die Kürbisbar befindet sich <color red<südöstlich>coloroff>\nvom Wolkenhort.\n\n\nDort lebt <color blue<Kabocha>coloroff> mit ihrer lieblichen\nStimme...\n<pause 30>Ich bin<0x10006:0xfecd>...<0x10006:0x00cd> ein großer Fan von ihr.\n\nAber das darf niemand wissen!")
          	  case 1:
/*<106>*/ 		switch (scene_flags[77 /* 0x8 20 */]) {
          		  case 0:
          			flw_108:
/*<108>*/ 			printf(/* textboxtype: 1, unk: 0, line: 79 */ "<0x10009:0x00000001>Na, <heroname>!\nWillst du dich an der Prüfung für den\nTornadostoß versuchen?\n[1-]Klar![2]Später...")
/*<109>*/ 			switch (choice(2)) {
          			  case 0:
/*<110>*/ 				printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x00000003>Das wollte ich hören!\nNa, dann spring!")
/*<112>*/ 				scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = false;
/*<113>*/ 				story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = true;
/*<114>*/ 				story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
/*<251>*/ 				zone_temp_flags[13 /* 0x0 20 */] = true;
          			  case 1:
/*<111>*/ 				printf(/* textboxtype: 1, unk: 0, line: 81 */ "Schon in Ordnung, ich warte, bis du\ndich bereit fühlst.\n\n\nIch bleibe hier noch eine Weile, komm\njederzeit vorbei!")
/*<253>*/ 				zone_temp_flags[13 /* 0x0 20 */] = false;
          			}
          		  case 1:
/*<122>*/ 			switch (story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */]) {
          			  case 0:
/*<102>*/ 				printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x00000001>Na, dann spring hier ab!\nOder willst du lieber doch nicht?\n[1-]Doch![2]Lieber nicht...")
/*<117>*/ 				switch (choice(2)) {
          				  case 0:
/*<121>*/ 					printf(/* textboxtype: 1, unk: 0, line: 82 */ "<0x10009:0x00000003>Sehr gut, das wollte ich hören! Stürz\ndich ins Wolkenmeer, <heroname>!")
/*<250>*/ 					zone_temp_flags[13 /* 0x0 20 */] = true;
          				  case 1:
/*<118>*/ 					story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = false;
/*<119>*/ 					story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = false;
/*<120>*/ 					printf(/* textboxtype: 1, unk: 0, line: 81 */ "Schon in Ordnung, ich warte, bis du\ndich bereit fühlst.\n\n\nIch bleibe hier noch eine Weile, komm\njederzeit vorbei!")
/*<252>*/ 					zone_temp_flags[13 /* 0x0 20 */] = false;
          				}
          			  case 1:
          				goto flw_108
          			}
          		}
          	}
          }

          void entrypoint_108_30() {
/*<142>*/ 	start()
/*<143>*/ 	printf(/* textboxtype: 1, unk: 0, line: 109 */ "Also gut, <heroname>!\n\n\n\nWenn du auf deinem Wolkenvogel\n(A) drückst, <color green<dreht>coloroff> er sich und greift an.")
          }

          void entrypoint_108_14() {
/*<115>*/ 	start()
/*<116>*/ 	printf(/* textboxtype: 1, unk: 0, line: 83 */ "")
          }

          void entrypoint_108_31() {
/*<144>*/ 	start()
/*<147>*/ 	printf(/* textboxtype: 1, unk: 0, line: 110 */ "Du musst <color red<10 Ziele>coloroff> mit einem\n<color red<Tornadostoß>coloroff>, den du durch Drücken\nvon (A) auslöst, zerstören!")
          }

          void entrypoint_108_15() {
/*<125>*/ 	start()
/*<126>*/ 	printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000002>Hey! <heroname>!\nDie Vogelreiter-Zeremonie hat schon\nangefangen! Schwing dich schnell auf\ndeinen Vogel!")
          }

          void entrypoint_108_32() {
/*<145>*/ 	start()
/*<148>*/ 	printf(/* textboxtype: 1, unk: 0, line: 111 */ "Wenn du es schaffst, 10 Ziele in\n<color red<120 Sekunden>coloroff> zu zerstören, dann bist\ndu ein wahrer Vogelreiter!")
          }

          void entrypoint_108_16() {
/*<131>*/ 	start()
/*<284>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<286>*/ 		switch (zone_temp_flags[15 /* 0x0 80 */]) {
          		  case 0:
/*<288>*/ 			printf(/* textboxtype: 1, unk: 0, line: 88 */ "<0x10009:0x00000016>Ich frage mich allerdings, was hier\npassiert ist. Die Monster sind plötzlich\nweg, die Lemurin verhalten sich nachts\nruhig... Hmmm...")
          		  case 1:
/*<285>*/ 			printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x0000000d>Sieh mal her, <heroname>!\nDie kleine Mia ist selbst bei Nacht\nruhig und anständig!\n\nWas für eine freudige Überraschung!\nDu freust dich bestimmt auch, oder?")
/*<287>*/ 			zone_temp_flags[15 /* 0x0 80 */] = true;
          		}
          	  case 1:
/*<158>*/ 		switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          		  case 0:
/*<159>*/ 			printf(/* textboxtype: 1, unk: 0, line: 86 */ "<0x10009:0x00000016>Nachts ist Mia völlig verändert...\n\n\n\nEinmal war sie aus Versehen nachts in\nder Schule eingesperrt... Das war\nvielleicht ein Aufruhr!\n\nWenn du also schon nachts raus gehst,\nsei bitte vorsichtig!")
          		  case 1:
/*<132>*/ 			printf(/* textboxtype: 1, unk: 0, line: 85 */ "<0x10009:0x00000004>Nachts ist es gefährlich, sich draußen\naufzuhalten! Lass das lieber bleiben!\n\n\nSelbst Mia, das Haustier des Direktors,\nmacht nachts eine gar schreckliche\nVeränderung durch.\n\nJa, nachts ist hier im Wolkenhort eine\nbösartige Macht am Werk.")
          		}
          	}
          }

          void entrypoint_108_33() {
/*<146>*/ 	start()
/*<149>*/ 	printf(/* textboxtype: 1, unk: 0, line: 112 */ "Also, fangen wir an!")
          }

          void entrypoint_108_17() {
/*<133>*/ 	start()
/*<134>*/ 	printf(/* textboxtype: 1, unk: 0, line: 89 */ "<0x10009:0x00000002>Was wird das, <heroname>?\nWo willst du hin?\n\n\nSpring schnell ab und ruf deinen\nWolkenvogel!")
          }

          void entrypoint_108_18() {
/*<135>*/ 	start()
/*<136>*/ 	printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x00000002><heroname>! \nMöchtest du eine Lektion?\n[1-]Gern![2]Eher nicht...")
/*<137>*/ 	switch (choice(2)) {
          	  case 0:
/*<139>*/ 		printf(/* textboxtype: 1, unk: 0, line: 92 */ "Ja, das nenne ich Einsatz!\n\n\n\nSprechen wir über die Geschichte des\nWolkenhorts!\n\n\nDer Wolkenhort entstand vor\nTausenden von Jahren.\n\n\nUnsere Vorfahren stammen von\ndieser und den umliegenden Inseln\ndes Wolkenmeers.\n\n<0x10009:0x00090a00>Unter dem Wolkenhort befindet sich\neine dichte Wolkendecke. Niemand, der\nsich unter diese Wolkendecke gewagt\nhat, ist je zurückgekehrt.\nEs heißt, dass sich unter\nder Wolkendecke nichts befindet!\n\n\n<0x10009:0x000a0a00>So, hier machen wir für heute Schluss!\nDie Vogelreiter-Zeremonie wartet!")
          	  case 1:
/*<138>*/ 		printf(/* textboxtype: 1, unk: 0, line: 91 */ "Oh, ach so... Heute ist ja die\nVogelreiter-Zeremonie, also fällt der\nUnterricht aus.\n\nSolltest du nicht schnell nach draußen\nund dich auf die Zeremonie\nvorbereiten?")
          	}
          }

          void entrypoint_108_01() {
          	start()
/*<  9>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 71>*/ 		switch (scene_flags[41 /* 0x4 02 */]) {
          		  case 0:
/*< 63>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "Ich sehe mal, was ich wegen der\nZeremonie tun kann. Mach du dich\nschnell auf die Suche nach deinem\nWolkenvogel.")
          		  case 1:
/*< 62>*/ 			printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00000001>Was ist los, <heroname>?\nDu siehst nicht gut aus.\n\n\nWas?<pause 50>\nDein Wolkenvogel ist verschwunden?\n\n\nDas ist schlimm.\nAber<0x10006:0xfccd>...<0x10006:0x00cd> Du weißt ungefähr, wo er ist,\noder?\n\nDu willst ihn jetzt suchen gehen?<pause 40>\nAber die Zeremonie beginnt doch\ngleich!\n\nAndererseits, ohne Vogel wärst du bei\nder Zeremonie sozusagen <color red<vogelfrei>coloroff><0x10006:0xfccd>...<pause 30>\n\n\n<0x10009:0x00000005><0x10006:0x02cd>Verzeihung...<pause 30>")
/*<160>*/ 			switch (scene_flags[30 /* 0x2 40 */]) {
          			  case 0:
/*<161>*/ 				printf(/* textboxtype: 1, unk: 0, line: 19 */ "Der Direktor ruft also nach mir?\n\n\n\nNun gut!\nIch bin dir ja schließlich noch einen\nGefallen schuldig.\n\nMach dir keine Sorgen um die\nZeremonie und finde erst einmal\ndeinen Wolkenvogel.")
          				flw_72:
/*< 72>*/ 				scene_flags[0 'Skyloft'][41 /* 0x4 02 */] = true;
          			  case 1:
/*<162>*/ 				printf(/* textboxtype: 1, unk: 0, line: 20 */ "Vielleicht ist das die Strafe dafür, dass\ndu meine Bitte ignoriert hast...\n\n\nWie dem auch sei...\nDer Direktor ruft nach mir?\n\n\nAha, ich verstehe. Nun gut, mach dir\nkeine Sorgen um die Zeremonie und\nfinde erst einmal deinen Wolkenvogel.")
/*<240>*/ 				story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = false;
          				goto flw_72
          			}
          		}
          	  case 1:
/*< 48>*/ 		switch (scene_flags[28 /* 0x2 10 */]) {
          		  case 0:
/*< 51>*/ 			switch (scene_flags[30 /* 0x2 40 */]) {
          			  case 0:
/*< 10>*/ 				printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x000a0404>Gut, dass du Mia gefunden hast...\n\n\n\nSie ist nämlich ein <color blue<Lemurin>coloroff>, weißt du?\n<0x10009:0x00000a00>Die sind zwar süß, aber nachts willst du\nkeinem begegnen, das kannst du mir\nglauben!\n[1-]Warum?[2-]Nachts?")
/*< 11>*/ 				switch (choice(2)) {
          				  case 0:
/*< 12>*/ 					printf(/* textboxtype: 1, unk: 0, line: 9 */ "Ja, also... Du weißt nicht, was mit den\nLemurin nachts geschieht?\n\n\nIch muss dich warnen, das ist kein\nangenehmes Gesprächsthema.")
          					flw_13:
/*< 13>*/ 					printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00000016>Wenn es im Wolkenhort Nacht wird,\nergreift eine böse Macht Besitz von den\nLemurin.\n\nAußerdem kommen nachts Monster aus\nihren Verstecken, die sich dort\ntagsüber verbergen.\n\nDaher gehen die Bewohner des\nWolkenhorts nachts nur selten nach\ndraußen.\n\nAber für jemanden wie dich, der Ritter\nwerden möchte, ist das eine gute\nÜbungsgelegenheit!\n\nAber trotzdem solltest du stets auf der\nHut sein! Unaufmerksamkeit ist der\ngrößte Feind!")
          				  case 1:
          					goto flw_13
          				}
          			  case 1:
/*< 93>*/ 				set_camera(17, 0)
/*< 49>*/ 				printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x000f040d>Du hast sie heil zurückgebracht!\n<pause 35><0x10009:0x00090400>Vielen Dank, <heroname>!\n\n\nIch werde Mia nun füttern.")
/*<155>*/ 				set_camera(20, 0)
/*< 52>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "Sag dem Direktor Bescheid, dass\nwir sein Haustier gefunden haben.\nEr müsste sich auf dem <color red<Platz vor\ndem Tempel >coloroff>befinden.")
/*<241>*/ 				set_camera(21, 0)
/*<242>*/ 				printf(/* textboxtype: 1, unk: 0, line: 16 */ "Zelda ist sicher auch dort, also beeil\ndich!")
/*<243>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 50, 'param3': 42}
/*< 50>*/ 				scene_flags[0 'Skyloft'][30 /* 0x2 40 */] = true;
          			}
          		  case 1:
/*< 46>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*< 47>*/ 				printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00000006>Was ist los, <heroname>?")
/*< 61>*/ 				set_camera(14, 0)
/*< 60>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "Wenn du die Wand hochläufst, kannst\ndu dich von der Kante <color green<hinunterhängen\nlassen>coloroff>.\n\nAber sei vorsichtig, denn während du\ndich an der Kante festhältst, nimmt\ndeine <color red<Ausdaueranzeige>coloroff> ab.")
          			  case 1:
/*<  6>*/ 				switch (temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<  7>*/ 					printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00090400>Oh, bringst du mir die kleine Mia?\n[1-]Ja[2-]Nein")
/*<  8>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_2:
/*<  2>*/ 						printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x0009040d>Danke, dass du dir die Zeit nimmst,\nmir zu helfen.")
/*< 43>*/ 						{'type': 'type3', 'subType': 4, 'param1': 3328, 'param2': 0, 'next': 44, 'param3': 22}
/*< 44>*/ 						printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00090400>Du müsstest hier irgendwo etwas zum\nHochklettern finden. Wenn du dich an\ndem Vorsprung entlanghangelst, dann\nsolltest du aufs Dach kommen.\n<0x10007:0xff000000>Danke nochmals!")
/*< 45>*/ 						temp_flags[2 /* 0x1 04 */] = true;
/*<235>*/ 						story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = true;
          					  case 1:
/*<229>*/ 						printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00000a00>Schade...\n\n\n\nBitte sag dem Direktor, dass ich die\nkleine Mia gefunden habe, damit er\nsich keine Sorgen mehr macht.")
          					}
          				  case 1:
/*< 68>*/ 					switch (scene_flags[38 /* 0x5 40 */]) {
          					  case 0:
/*<231>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 1, 'param3': 31}
/*<  1>*/ 						printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Hallo, <heroname>!\nBist du auf dem Weg zum Üben für die\nVogelreiter-Zeremonie?\n\nAch?<pause 30> Du bist verabredet?\n<pause 30><color blue<Zelda>coloroff> wartet schon?")
/*< 42>*/ 						printf(/* textboxtype: 1, unk: 0, line: 1 */ "Wo du gerade hier bist...\n\n\n\n<color red<Mia>coloroff>, das Haustier von Zeldas Vater\n<color blue<Gepora>coloroff>, unserem Direktor, ist\nweggelaufen.")
/*<237>*/ 						set_camera(12, 0)
/*<236>*/ 						printf(/* textboxtype: 1, unk: 0, line: 2 */ "Ach!<0x1000A:0x001000cd> Was soll ich nur tun?\n\n\n\n<0x1000A:0xffff00cd>Der Direktor und Zelda haben alle\nHände voll zu tun mit der Vorbereitung\nder Zeremonie.\n\nIch wollte Mia mit Futter anlocken,\naber die Zeremonie beginnt bald...\nUnd in dieser Kleidung kann ich\nihr nicht hinterherklettern.\n<0x10007:0xff000000>Wärst du so gut, Mia zu mir zu\nbringen?\n[1-]Gern![2-]Hab zu tun.")
/*<  4>*/ 						switch (choice(2)) {
          						  case 0:
/*< 54>*/ 							set_camera(-1, 0)
          							goto flw_2
          						  case 1:
/*< 55>*/ 							set_camera(-1, 0)
/*<  3>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00000a00>Schade...\n\n\n\nBitte sag dem Direktor, dass ich die\nkleine Mia gefunden habe, damit er\nsich keine Sorgen mehr macht.")
/*<  5>*/ 							temp_flags[1 /* 0x1 02 */] = true;
/*<234>*/ 							story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = true;
          						}
          					  case 1:
/*< 65>*/ 						switch (scene_flags[37 /* 0x5 20 */]) {
          						  case 0:
/*< 90>*/ 							set_camera(9, 0)
/*< 67>*/ 							printf(/* textboxtype: 1, unk: 2, line: 43 */ "<0x10009:0x000b0a06>Was wird das denn?\nBeeil dich und tu das, was dein Lehrer\ndir sagt!")
          						  case 1:
/*<154>*/ 							story_flags[565 /* us: 805A9B19 0x10, jp: 805ACD99 0x10 */] = false;
/*<174>*/ 							{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': 100, 'next': 89, 'param3': 17}
/*< 89>*/ 							set_camera(9, 0)
/*<264>*/ 							switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          							  case 0:
/*<265>*/ 								printf(/* textboxtype: 1, unk: 2, line: 42 */ "<0x10009:0x000b0a0d>Genau. Durch Drücken von (Z) kannst\ndu Ziele <color green<anvisieren>coloroff>.<0x10011:0x07cd>\n\n\n<0x10009:0x00000c04>Hm...<pause 15> Das scheinst du schon zu wissen.\nAber es kann nie schaden, Grundlagen\nzu wiederholen!\n\n<0x10009:0x00000a00>Im <color red<Helden-Modus>coloroff>...<pause 30><sound 4> In diesem Modus\n<color red<verlierst du bei Schaden doppelt so\nviele Herzen>coloroff>. Daher ist das <color green<Anvisieren>coloroff>\ndurch Drücken von (Z) sehr wichtig.<0x10011:0x07cd>\nAber auf diese Entfernung lässt es sich\nnicht gut reden, also komm doch hier\nhoch, ja?")
          								flw_58:
/*< 58>*/ 								set_camera(10, 0)
/*< 41>*/ 								printf(/* textboxtype: 1, unk: 2, line: 38 */ "<0x10009:0x000b0a00>Wenn du auf diese Holzkisten dort\n<color green<zusprintest>coloroff>, kannst du auf sie klettern.\n\n\nHalte (A) gedrückt und bewege dich,\num zu <color green<sprinten>coloroff>. So kannst du kleinere\nHöhenunterschiede überwinden!\n\nVersuch's mal!")
/*< 66>*/ 								scene_flags[0 'Skyloft'][37 /* 0x5 20 */] = true;
          							  case 1:
/*<263>*/ 								printf(/* textboxtype: 1, unk: 2, line: 41 */ "<0x10009:0x000b0a0d>Genau. Durch Drücken von (Z) kannst\ndu Ziele <color green<anvisieren>coloroff>.<0x10011:0x07cd>\n\n\nDu kannst Personen durch Drücken von\n(Z) <color green<anvisieren>coloroff> und dann durch Drücken\nvon (A) mit ihnen sprechen.<0x10011:0x07cd>\n\nWenn es niemanden zum <color green<Anvisieren\n>coloroff>gibt, kannst du (Z) auch drücken, um\nwieder nach vorn zu blicken.<0x10011:0x07cd>\n\nAber auf diese Entfernung lässt es sich\nnicht gut reden, also komm doch hier\nhoch, ja?")
          								goto flw_58
          							}
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_19() {
/*<140>*/ 	start()
/*<141>*/ 	printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x00000004>Dieser Platz ist nur für Lehrer!\nSetz dich schön brav auf einen der\nPlätze für Schüler!")
          }

          void entrypoint_108_02() {
/*< 14>*/ 	start()
/*< 38>*/ 	switch (story_flags[31 /* us: 805A9ADA 0x80, jp: 805ACD5A 0x80 */]) {
          	  case 0:
/*< 21>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00000002>Was machst du denn?\nDrücke (A), um zu <color green<sprinten>coloroff>, <color red<springe\nvom Steg ab>coloroff> und schwinge dich auf\ndeinen Wolkenvogel!\nUnd vergiss nicht, dass du ihn durch\nDrücken von (v) rufen musst!<0x10011:0x09cd>")
          	  case 1:
/*< 28>*/ 		set_camera(1, 0)
/*< 22>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 23, 'param3': 32}
/*< 23>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 24, 'param3': 32}
/*< 24>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 6, 'next': 177, 'param3': 32}
/*<177>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 180, 'param3': 32}
/*<180>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 25, 'param3': 32}
/*< 25>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': 26, 'param3': 17}
/*< 26>*/ 		{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 0, 'next': 27, 'param3': 17}
/*< 27>*/ 		{'type': 'type3', 'subType': 1, 'param1': 6, 'param2': 0, 'next': 181, 'param3': 17}
/*<181>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 19, 'next': 15, 'param3': 13}
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000002>Sehr gut. Beginnen wir also mit der\n<color red<Vogelreiter-Zeremonie>coloroff>!\n\n\nEs sah erst so aus, als würde\n<heroname> nicht teilnehmen\nkönnen... Aber jetzt sind ja alle hier!\n\nIch erkläre nun die <color red<Regeln>coloroff>!")
          		flw_16:
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0, line: 25 */ "Ich lasse nun einen Wolkenvogel\nfliegen, der eine Vogelfigur trägt...\n\n\nAuf mein Signal <color red<sprintet>coloroff> ihr durch\nDrücken von (A) los und <color red<springt vom\nSteg ab>coloroff>.\n\nVergesst mir nach dem Abspringen vor\nlauter Aufregung bloß nicht, (v) zu\ndrücken, um <color green<eure Vögel zu rufen>coloroff>!<0x10011:0x09cd>\n\nSieger ist, wer als Erster durch\nDrücken von (A) die Vogelfigur in\nseinen Besitz bringt!\n\n<0x1000A:0x000200cd>Nicht so schwer, oder?\nHabt ihr die Regeln verstanden?\n[1-]Ja![2?]Noch mal!")
/*< 18>*/ 		switch (choice(2)) {
          		  case 0:
/*< 30>*/ 			set_camera(3, 0)
/*< 17>*/ 			printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00000003><0x10008:0x01cd>Gut!\n\n\n\nDer Sieger rückt in die Oberstufe der\nRitterschule vor.<pause 20> Außerdem wird ihm\neine <color red<große Auszeichnung>coloroff> verliehen.\n\nDiese Auszeichnung wurde von der\njungen Dame, die als <color red<Vertreterin der\nGöttin>coloroff> auserwählt wurde, persönlich\nangefertigt.\nUnd zum 25-jährigen Jubiläum\nunserer Schule wird die Übergabe\ndieser Auszeichnung <color red<auf der Statue\nder Göttin >coloroff>stattfinden.\nDie <color red<Vertreterin der Göttin>coloroff>, die ihren\n<color red<selbst angefertigten >coloroff>Preis dieses Jahr\npersönlich überreichen wird, ist, wie\nihr wisst...<pause 20>")
/*<185>*/ 			{'type': 'type3', 'subType': 4, 'param1': 267, 'param2': 3840, 'next': 178, 'param3': 13}
/*<178>*/ 			set_camera(5, 0)
/*<175>*/ 			printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x01000009><0x10008:0x01cd>Zelda!")
/*<194>*/ 			{'type': 'type3', 'subType': 4, 'param1': 1048, 'param2': 3084, 'next': 31, 'param3': 13}
/*< 31>*/ 			set_camera(2, 0)
/*< 20>*/ 			printf(/* textboxtype: 1, unk: 1, line: 31 */ "Zeigt, was ihr bei euren täglichen\nÜbungen gelernt habt!\n\n\nUnd ich will nicht sehen, dass jemand\nmit Gegenständen wirft oder andere\nTeilnehmer angreift!")
/*<179>*/ 			set_camera(6, 0)
/*<182>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 4, 'next': 183, 'param3': 50}
/*<183>*/ 			{'type': 'type3', 'subType': 4, 'param1': 512, 'param2': 23, 'next': 176, 'param3': 13}
/*<176>*/ 			printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10008:0x01cd>Das gilt besonders für dich,\n<0x10009:0x04191700>Bado!")
/*< 40>*/ 			set_camera(4, 0)
/*<184>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 53, 'param3': 50}
/*< 53>*/ 			make_actor_do_something(0, 0)
/*< 39>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00000002>Alle auf ihre Plätze!")
/*< 37>*/ 			story_flags[31 /* us: 805A9ADA 0x80, jp: 805ACD5A 0x80 */] = true;
          		  case 1:
/*< 19>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000052>Wa... Gut, dann eben noch einmal!")
/*< 29>*/ 			set_camera(1, 0)
          			goto flw_16
          		}
          	}
          }

