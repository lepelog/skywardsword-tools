          void entrypoint_108_03() {
/*< 32>*/ 	start()
/*<255>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 113, 'next': 33, 'param3': 24}
/*< 33>*/ 	printf("\x0E\x01\x08\x02\x1CDLos!\x0E\x01\x05\x04\x0F\x00")
          }

          void entrypoint_108_20() {
/*<156>*/ 	start()
/*<289>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<290>*/ 		printf("\x0E\x01\x09\x04\x00\x01Die Statue der Göttin mag aus dem\nWolkenhort verschwunden sein, doch\ndie Göttin selbst trage ich stets in\nmeinem Herzen.\nGeht es dir ähnlich, Link?")
          	  case 1:
/*<282>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*<283>*/ 			printf("\x0E\x01\x09\x04\x00\x01Du scheinst mir gut voranzukommen!\nMach weiter so!")
          		  case 1:
/*<278>*/ 			switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          			  case 0:
/*<281>*/ 				printf("\x0E\x01\x09\x04\x00\x01Was, Narisha?<pause28> Also über ihn habe ich\nnur Gerüchte gehört...\n\n\nLeider weiß ich jedoch nicht allzu viel\nüber ihn...\n\n\nSprich besser mit deinem Lehrer für\nden praktischen Unterricht, Meister\n<b<Otus>>.")
          			  case 1:
/*<279>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<280>*/ 					printf("\x0E\x01\x09\x04\x00\x01Ach, Mia ist ja sooo süß!<pause1E>\nHm? Triforce?<pause28>\nHat das was mit Mia zu tun?")
          				  case 1:
/*<157>*/ 					printf("\x0E\x01\x09\x04\x00\x01Der Direktor hat mich gebeten, mich\num Mia zu kümmern.\n\n\nDie ist vielleicht niedlich!\nIch überlege, mir selbst auch so ein\nHaustier anzuschaffen!")
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
/*< 35>*/ 	printf("\x0E\x01\x0D\x02\x1906\x0E\x01\x08\x02\x1CDHey, Link! Hier!")
/*< 57>*/ 	set_camera(11, 0)
/*<244>*/ 	make_actor_do_something(1, 10)
/*<213>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 10, 'next': 261, 'param3': 17}
/*<261>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<262>*/ 		printf("\x0E\x01\x09\x04\xA0E\xA01Guten Morgen, Link!\nWie ich sehe, stellst du dich dem\n<r<Helden-Modus>>? Du bist ja ganz\nschön mutig!\nHeute ist die <r<Vogelreiter-Zeremonie>>,\nwie fühlst du dich?\n\n\nIch möchte etwas mit dir besprechen.\nHalte (Z) gedrückt, sieh zu mir und\ndrücke dann (A), um mit mir zu reden.\x0E\x01\x11\x02\x7CD")
          		flw_64:
/*< 64>*/ 		scene_flags[0 'Skyloft'][36 /* 0x5 10 */] = true;
/*< 75>*/ 		story_flags[565 /* us: 805A9B19 0x10, jp: 805ACD99 0x10 */] = true;
/*<254>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*< 56>*/ 		printf("\x0E\x01\x09\x04\xA0E\xA01Guten Morgen, Link!\nHeute ist die <r<Vogelreiter-Zeremonie>>,\nwie fühlst du dich?\n\nIch möchte etwas mit dir besprechen.\nHalte (Z) gedrückt, sieh zu mir und\ndrücke dann (A), um mit mir zu reden.\x0E\x01\x11\x02\x7CD")
          		goto flw_64
          	}
          }

          void entrypoint_108_21() {
/*<186>*/ 	start()
/*<192>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 190, 'param3': 32}
/*<190>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 187, 'param3': 13}
/*<187>*/ 	printf("\x0E\x01\x08\x02\x1CDHey, Link!")
/*<188>*/ 	printf("\x0E\x01\n\x04\x12Í\x0E\x01\x09\x04\n\x202Um auf dieses Dach zu gelangen, reicht\nes nicht, wenn du durch Drücken von\n(A) <g<sprintest>>.")
/*<191>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 193, 'param3': 17}
/*<193>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 189, 'param3': 6}
/*<189>*/ 	set_camera(19, 0)
/*<230>*/ 	printf("Du hast bestimmt bereits die Holzkiste\nentdeckt, oder?\nStell dich davor und halte (A) gedrückt,\num sie zu <g<verschieben>>.\n<g<Sprinte>> dann durch Drücken von (A)\nauf die Kiste zu oder halte direkt davor\n\x0E\x02\x04\x02\x9CD gedrückt, um auf sie zu klettern.")
          }

          void entrypoint_108_05() {
/*< 36>*/ 	start()
/*<267>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<268>*/ 		printf("\x0E\x01\x09\x04\x0B\xA03Wie es aussieht, weißt du bereits, dass\ndu durch Drücken von (A) sprinten\nkannst.\n\nAber überanstreng dich nicht, wenn\ndeine <r<Ausdaueranzeige>> leer ist, geht\ndir die Puste aus.\n\nWillst du noch einen weiteren Hinweis\nhören?\n[1]Ja[2-]Nein")
/*<270>*/ 		switch (choice(2)) {
          		  case 0:
/*<271>*/ 			printf("Über diese Lücke kannst du springen,\nindem du dich einfach darauf\nzubewegst... Das ist der <g<automatische\nSprung>>!\nAutomatisch\x0E\x01\x06\x02\xFCCD...<pause0F>\n\x0E\x01\x06\x02ÍIch liebe dieses Wort!")
          		  case 1:
/*<269>*/ 			printf("Dann komm so schnell wie möglich her!")
          		}
          	  case 1:
/*<266>*/ 		printf("\x0E\x01\x09\x04\x0B\xA03Und? Es ist praktisch, durch Drücken\nvon (A) zu <g<sprinten>>, oder?\n\n\nWenn dabei deine <r<Ausdaueranzeige\n>>leer wird, geht dir jedoch leider die\nPuste aus. Wenn sie beinahe leer ist,\nsolltest du dich kurz ausruhen.\nUnd weiter geht's!\n\n\n\nÜber Lücken wie diese kannst du durch\nnormale Bewegung springen. Das ist\nder <g<automatische Sprung>>!\n\nAutomatisch\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í Klingt gut!")
          	}
          }

          void entrypoint_108_22() {
/*<208>*/ 	start()
/*<210>*/ 	switch (scene_flags[92 /* 0xA 10 */]) {
          	  case 0:
/*<211>*/ 		printf("\x0E\x01\x09\x04\x00\x01Der Beginn der Zeremonie wird\nverschoben, bis du deinen Wolkenvogel \ngefunden hast.\n\nDu kannst ihn also in Ruhe suchen\ngehen.")
          	  case 1:
/*<212>*/ 		printf("\x0E\x01\x09\x04\x00\x01Der Beginn der Vogelreiter-Zeremonie\nwurde verschoben, damit du deinen\nWolkenvogel suchen kannst.\nEine gute Nachricht, was?")
          	}
          }

          void entrypoint_108_06() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf("\x0E\x01\x09\x04\x0B\xA52Aber, Link!\nDu kannst deinen Lehrer doch nicht\neinfach ignorieren!\n\nHalte (Z) gedrückt, sieh zu mir und\ndrücke (A), um mit mir zu reden!\x0E\x01\x11\x02\x7CD")
          }

          void entrypoint_108_23() {
/*<217>*/ 	start()
/*<225>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<226>*/ 		printf("\x0E\x01\x09\x04\x00\x01Und, Link?\nKommst du gut voran?\n\n\nWenn du noch Fragen hast, kannst du\ndich gern an mich wenden!")
          	  case 1:
/*<221>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*<224>*/ 			printf("\x0E\x01\x09\x04\x00\x01Der Tornadostoß ist auch für die Vögel\nsehr anstrengend.\n\n\nAber ich denke, für deinen roten\nWolkenvogel ist das kein Problem.")
          		  case 1:
/*<220>*/ 			switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          			  case 0:
/*<223>*/ 				printf("\x0E\x01\x09\x04\x00\x05Hm? Link?\nWas machst du hier so spät?\n\n\nNarisha? Das ist kein Gespräch, das\nwir mitten in der Nacht führen sollten.\n\n\nKomm morgen früh wieder, dann\nkönnen wir reden!")
          			  case 1:
/*<219>*/ 				switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          				  case 0:
/*<222>*/ 					printf("\x0E\x01\x09\x04\x00\x01Link...\nDu wirst Zelda doch finden, oder?\n\n\nAch, schau nicht so betrübt.\nIch bin mir ganz sicher, dass du es\nschaffen kannst. Ich glaube fest an\ndich!")
          				  case 1:
/*<218>*/ 					printf("\x0E\x01\x09\x04\x00\x01Ihr Schüler dürft nachts keine\nWolkenvögel fliegen.\n\n\nDu kannst also jetzt nicht nach Zelda\nsuchen! Leg dich ins Bett und brich\nmorgen früh ausgeruht auf.\n\nWenn du nicht ab und zu mal Pause\nmachst, wird es dir nicht gelingen,\neinen kühlen Kopf zu bewahren!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_07() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf("\x0E\x01\x09\x04\n\xA00\x0E\x01\x08\x02\x2CDLink!\n\x0E\x01\x08\x02\x2CDWas machst du denn?!?")
          }

          void entrypoint_108_24() {
/*<232>*/ 	start()
/*<245>*/ 	switch (scene_flags[41 /* 0x4 02 */]) {
          	  case 0:
/*<238>*/ 		printf("\x0E\x01\x09\x04\x00\x02Link!\nJetzt ist keine Zeit zum Trödeln!\n\n\nGeh und such deinen Wolkenvogel!\nFrag mal die anderen Schüler drinnen,\nvielleicht wissen sie etwas.")
          	  case 1:
/*<239>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<246>*/ 			printf("\x0E\x01\x09\x04\x00\x02Link, warum läufst du\neinfach an deinem Lehrer vorbei?\n\n\nKomm einen Moment her!")
          		  case 1:
/*<233>*/ 			printf("\x0E\x01\x09\x04\x00\x02Aber, aber, Link!\nIgnorierst du etwa deinen alten\nLehrer?\n\nKomm her und hör mir ein wenig zu!")
          		}
          	}
          }

          void entrypoint_108_08() {
/*< 76>*/ 	start()
/*< 88>*/ 	switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          	  case 0:
/*<209>*/ 		printf("")
          	  case 1:
/*< 83>*/ 		switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          		  case 0:
/*< 85>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 77, 'param3': 31}
/*< 77>*/ 			printf("\x0E\x01\x09\x04\x00\x01Na, Link?\nWas macht deine Suche nach Zelda?\nHast du sie gefunden?\n\n\x0E\x01\x09\x04\x00\x05Wer?<pause28> Narisha?\nDu hast wohl mit dem Direktor\ngeredet...\n\nNarisha befindet sich in der\nSturmwolke.\n\n\nAber\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í<pause19> Es ist nicht der Narisha,\nden wir kannten...\n\n\n\x0E\x01\x06\x02\xFECDEr ist ein... <pause28>\x0E\x01\x06\x02\x1CD<r<Monster>>!\n\n\n\n\x0E\x01\x09\x04\x00\x0FEr mag wie Narisha aussehen, aber als\nich mich ihm das letzte Mal näherte,\nhat er mich angegriffen!\n\nNarishas Blick war so voller Hass...\n\n\n\nEr hat sich verändert...\n\x0E\x01\x06\x02\xFECDIrgendwas...\x0E\x01\x06\x02Í<pause19> Irgendwas ist geschehen...\n<pause19>Das kann ich spüren.")
/*<203>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 78, 'param3': 6}
/*< 78>*/ 			printf("\x0E\x01\x09\x04\x00\x05Wie?<pause28> Du möchtest mit Narisha reden?\n\n\n\n\x0E\x01\x06\x02\xFECDDas...\x0E\x01\x06\x02Í Das ist unmöglich.\nNarisha ist im Moment für unsere\nWorte unerreichbar.\n\n\x0E\x01\x06\x02\xFECDUnd selbst wenn...\x0E\x01\x06\x02Í\nSelbst wenn du nah genug an ihn\nherankommen würdest, er würde dich\nangreifen, und das wäre dein Ende!")
/*<204>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 201, 'param3': 6}
/*<201>*/ 			printf("\x0E\x01\x09\x04\x00RWas?<pause28> Du willst trotzdem gehen?\n\n\n\n\x0E\x01\x06\x02\xFECDNun...\x0E\x01\x06\x02Í\nDu willst es tun, um Zelda zu finden,\noder?\n\nGut.<pause1E>\nIch habe das Gefühl, du lässt dich\ndavon nicht abbringen!")
/*<205>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 202, 'param3': 6}
/*<202>*/ 			printf("Ich habe eine Idee!\nKomm mit!")
/*< 86>*/ 			story_flags[362 /* us: 805A9B03 0x01, jp: 805ACD83 0x01 */] = true;
/*< 87>*/ 			changeScene(0, 0) // 
          		  case 1:
/*<276>*/ 			switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          			  case 0:
/*<277>*/ 				printf("\x0E\x01\x09\x04\x00\x01Hallo, Link!\n<pause1E>Was sagst du? Das Triforce?\n\n\nEs tut mir leid, aber dazu kann ich dir\nnichts sagen. Frag doch am besten den\nDirektor, ja?")
          			  case 1:
/*< 84>*/ 				printf("\x0E\x01\x09\x04\x00\x01Hallo, Link!\nWie geht die Suche nach Zelda voran?\n\n\nTut mir leid, dass du sie allein suchen\nmusst! Bitte finde sie!")
          			}
          		}
          	}
          }

          void entrypoint_108_09() {
/*< 79>*/ 	start()
/*< 80>*/ 	printf("\x0E\x01\x09\x04\x00\x02Irgendetwas stimmt mit Narisha in der\nSturmwolke nicht.\n\n\nWenn du die Ursache für sein\nVerhalten beseitigst, kommt der alte\nNarisha vielleicht wieder zurück.\n\nAlso, Link!\nIch bringe dir jetzt eine ganz spezielle\nVogelreiter-Technik bei!\n\n\x0E\x01\x09\x04\x00\x03Den <r<Tornadostoß>>!")
/*<259>*/ 	set_camera(22, 0)
/*<257>*/ 	printf("Der Tornadostoß ist ein starker\nAngriff, mit seiner Hilfe kannst du\nNarisha sicher von dem Übel, das\nihn befallen hat, befreien!\nDie Ausführung ist im Prinzip nicht\nschwierig. Du musst nur (A) drücken,\ndas ist alles!\n\nAllerdings wird dein Wolkenvogel\nextrem schnell und dieser Zustand\nhält länger an als nach der normalen\n<r<Attacke>>.\nDie Kunst ist, den Vogel im Flug stabil\nzu halten, deshalb lernen nur die\nerfahrensten Schüler der Oberstufe\ndiese besondere Technik.\nFür dich ist es eigentlich noch zu\nfrüh...<pause1E> Aber wir wollen sehen,\nvielleicht bist du ja schon bereit dafür.")
/*<260>*/ 	set_camera(-1, 0)
/*<258>*/ 	printf("\x0E\x01\x09\x04\x00\x04Sprinte los und spring von hier ab,\ndann rufe deinen Wolkenvogel.")
/*< 94>*/ 	story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = true;
/*< 99>*/ 	story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
/*<249>*/ 	zone_temp_flags[13 /* 0x0 20 */] = true;
          }

          void entrypoint_108_10() {
/*< 91>*/ 	start()
/*<129>*/ 	switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          	  case 0:
/*<130>*/ 		printf("\x0E\x01\x09\x04\x00\x0FWas Zelda passiert ist, ist furchtbar...\n\n\n\nAber du darfst dich deswegen nicht mit\nVorwürfen quälen...\nEs war ein Unfall.")
          	  case 1:
/*<128>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<197>*/ 			switch (scene_flags[91 /* 0xA 08 */]) {
          			  case 0:
/*<199>*/ 				printf("\x0E\x01\x09\x04\x00\x01Lass die Zeremonie die Sorge von uns\nLehrern sein und sieh zu, dass du\ndeinen Vogel findest!")
          			  case 1:
/*<127>*/ 				printf("\x0E\x01\x09\x04\x00\x0FWas ist, Link?\n<pause1E>Dein Vogel ist nicht gekommen, als du\nihn gerufen hast?\n\nEs kann eigentlich nicht sein, dass dein\nWolkenvogel nicht deinem Ruf gefolgt\nist\x0E\x01\x06\x02\xFECD...\n\nHast du schon mit Meister <b<Tytor>>\ngesprochen? Schließlich ist er der\nZeremonienmeister.\n\nAha...\nDer Direktor wird schon einen Weg\nfinden, dich an der Zeremonie\nteilnehmen zu lassen.\nAber du solltest deinen Vogel\nso schnell wie möglich finden!")
/*<200>*/ 				scene_flags[0 'Skyloft'][91 /* 0xA 08 */] = true;
          			}
          		  case 1:
/*<195>*/ 			switch (scene_flags[90 /* 0xA 04 */]) {
          			  case 0:
/*<196>*/ 				printf("\x0E\x01\x09\x04\x00\x01Du hast Meister <b<Tytor >>und mich schon\nimmer gern verwechselt...\n\n\nIch, <b<Otus>> mit den weißen Haaren, gebe\nden praktischen Unterricht.<b<\n\n>>\nMeister <b<Tytor>> hat dunkle Haare und\nunterrichtet die Theorie. Merk dir das\nbitte.")
          			  case 1:
/*< 92>*/ 				printf("\x0E\x01\x09\x04\x00\x01So, Link!\nDer große Tag der <r<Vogelreiter-\nZeremonie>> ist also endlich gekommen!\n\nErinnere dich an meine praktischen\nLektionen und den Unterricht von\nMeister <b<Tytor>> und gib dein Bestes!\n\nWo wir gerade davon sprechen...\nWeißt du noch, dass du dich durch\nDrücken von (C) <r<umsehen>> kannst?\x0E\x01\x11\x02\x6CD\n\n<g<Drücke>> einfach (C), wenn du dir etwas\ngenauer ansehen möchtest!\x0E\x01\x11\x02\x6CD\n\n\nUnd wenn sich der <r<Zeiger verschiebt>>,\nzeige mit der Wii-Fernbedienung auf\nden Bildschirm und <g<drücke >>(v)! \x0E\x01\x11\x02\x9CD")
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
/*<275>*/ 			printf("\x0E\x01\x09\x04\x00\x01Das Erdland existiert also wirklich?\n\n\n\nEs mag nur eine Hypothese sein, aber\nvermutlich ist das Erdland kein solch\nfriedlicher Ort wie unser Wolkenhort.\nHmmm...")
          		  case 1:
/*<272>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<274>*/ 				printf("\x0E\x01\x09\x04\x00\x01Wie kommst du bei der Suche nach\nZelda voran?\n\n\nWenn du erschöpft bist, ruh dich doch\nin deinem Bett aus. So kannst du den\nWolkenhort bei Nacht erleben, und\ndeine Herzen werden auch aufgefüllt!")
          			  case 1:
/*<167>*/ 				printf("\x0E\x01\x09\x04\x00\x01Sei stets vorsichtig! Ich hoffe, dass du\nZelda finden kannst.")
          			}
          		}
          	  case 1:
/*<168>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 124, 'param3': 31}
/*<124>*/ 		printf("\x0E\x01\x09\x04\x00\x11Link!\nIch habe gehört, dass du Zelda unter\nden Wolken suchen willst.\n\nDer Direktor sprach davon, dass unter\nden Wolken das Erdland liegt... Weißt\ndu etwas über dieses Erdland?")
/*<169>*/ 		switch (adventure_pouch_has(9 0x0009)) {
          		  case 0:
/*<171>*/ 			printf("Ein interessantes Schwert...\nAber einen Schild brauchst du auch<pause0A>.<pause0A>.<pause0A>.<pause0A>\nOh, du hast schon einen!\nVorbildlich, vorbildlich!\nHier, ein Abschiedsgeschenk von mir.")
          			flw_172:
/*<172>*/ 			give_item(4 0x04);
/*<256>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 173, 'param3': 12}
          			flw_173:
/*<173>*/ 			printf("Wenn du nicht weißt, wie du mit einem\nSchild umgehst, frag am besten den\n<b<Schwertmeister >>in der Übungshalle.\nEr kann es dir sicher beibringen.")
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
/*<248>*/ 				printf("Das ist übrigens ein interessantes\nSchwert... Aber einen Schild brauchst\ndu auch.\n\nDu kannst allerdings keine weitere\nAusrüstung mehr tragen. Na, dann\nnimm das als Abschiedsgeschenk.")
          				goto flw_172
          			  case 1:
/*<170>*/ 				printf("Das ist übrigens ein interessantes\nSchwert... Aber einen Schild brauchst\ndu auch.\n\nNimm den hier!")
/*<164>*/ 				give_item(116 0x74);
/*<165>*/ 				printf("Ein Holzschild ist leicht und einfach zu\nhandhaben, hält aber nicht viel aus.\nAußerdem kann er Feuer fangen.\n\nWenn dein Schild zerstört wird, kannst\ndu dir im Basar einen neuen kaufen.\n\n\nDu kannst den Schild ausrüsten,\nindem du \x0E\x02\x04\x02\x2CD <g<gedrückt hältst>> und\ndie Wii-Fernbedienung bewegst,\num ihn <g<auszuwählen>>.\x0E\x01\x11\x02\x2CD")
          				goto flw_173
          			}
          		}
          	}
          }

          void entrypoint_108_12() {
/*< 95>*/ 	start()
/*<206>*/ 	switch (scene_flags[77 /* 0x8 20 */]) {
          	  case 0:
/*<207>*/ 		printf("")
          	  case 1:
/*< 97>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*< 81>*/ 			printf("\x0E\x01\x09\x04\x00\nSehr gut, du hast innerhalb des\nZeitlimits 10 Ziele zerstört!\n\n\nDu beherrschst deinen roten\nWolkenvogel wirklich meisterlich,\nLink! Wirklich sehr gut!\n\nDu hast dir das Recht verdient, den\nTornadostoß einzusetzen.")
/*< 82>*/ 			printf("Jetzt musst du Narisha nur noch\nfinden...\n\n\nDer <r<Besitzer der Kürbisbar >>bringt\nNarisha jedes Jahr Kürbissuppe, er\nmüsste dir helfen können.\n\nJa, am besten fragst du ihn um Rat...")
/*<107>*/ 			scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = true;
          		  case 1:
/*< 96>*/ 			switch (story_flags[641 /* us: 805A9B1D 0x04, jp: 805ACD9D 0x04 */]) {
          			  case 0:
/*< 98>*/ 				printf("\x0E\x01\x09\x04\x00\x0FHm, wenn es dir nicht gelingt, 10 Ziele\nin <r<120 Sekunden >>zu zerstören, kann ich\ndir diese Technik leider nicht erlauben.\n\nRuh dich ein wenig aus, ich bin hier\nnoch eine Weile. Wenn du bereit für\neinen neuen Versuch bist, sag es mir.")
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
/*<104>*/ 		printf("\x0E\x01\x09\x04\x00\x01Die Kürbisbar befindet sich <r<südöstlich>>\nvom Wolkenhort.\n\n\nDort lebt <b<Kabocha>> mit ihrer lieblichen\nStimme...\n<pause1E>Ich bin\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í ein großer Fan von ihr.\n\nAber das darf niemand wissen!")
          	  case 1:
/*<106>*/ 		switch (scene_flags[77 /* 0x8 20 */]) {
          		  case 0:
          			flw_108:
/*<108>*/ 			printf("\x0E\x01\x09\x04\x00\x01Na, Link!\nWillst du dich an der Prüfung für den\nTornadostoß versuchen?\n[1]Klar![2-]Später...")
/*<109>*/ 			switch (choice(2)) {
          			  case 0:
/*<110>*/ 				printf("\x0E\x01\x09\x04\x00\x03Das wollte ich hören!\nNa, dann spring!")
/*<112>*/ 				scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = false;
/*<113>*/ 				story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = true;
/*<114>*/ 				story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
/*<251>*/ 				zone_temp_flags[13 /* 0x0 20 */] = true;
          			  case 1:
/*<111>*/ 				printf("Schon in Ordnung, ich warte, bis du\ndich bereit fühlst.\n\n\nIch bleibe hier noch eine Weile, komm\njederzeit vorbei!")
/*<253>*/ 				zone_temp_flags[13 /* 0x0 20 */] = false;
          			}
          		  case 1:
/*<122>*/ 			switch (story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */]) {
          			  case 0:
/*<102>*/ 				printf("\x0E\x01\x09\x04\x00\x01Na, dann spring hier ab!\nOder willst du lieber doch nicht?\n[1]Doch![2-]Lieber nicht...")
/*<117>*/ 				switch (choice(2)) {
          				  case 0:
/*<121>*/ 					printf("\x0E\x01\x09\x04\x00\x03Sehr gut, das wollte ich hören! Stürz\ndich ins Wolkenmeer, Link!")
/*<250>*/ 					zone_temp_flags[13 /* 0x0 20 */] = true;
          				  case 1:
/*<118>*/ 					story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = false;
/*<119>*/ 					story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = false;
/*<120>*/ 					printf("Schon in Ordnung, ich warte, bis du\ndich bereit fühlst.\n\n\nIch bleibe hier noch eine Weile, komm\njederzeit vorbei!")
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
/*<143>*/ 	printf("Also gut, Link!\n\n\n\nWenn du auf deinem Wolkenvogel\n(A) drückst, <g<dreht>> er sich und greift an.")
          }

          void entrypoint_108_14() {
/*<115>*/ 	start()
/*<116>*/ 	printf("")
          }

          void entrypoint_108_31() {
/*<144>*/ 	start()
/*<147>*/ 	printf("Du musst <r<10 Ziele>> mit einem\n<r<Tornadostoß>>, den du durch Drücken\nvon (A) auslöst, zerstören!")
          }

          void entrypoint_108_15() {
/*<125>*/ 	start()
/*<126>*/ 	printf("\x0E\x01\x09\x04\x00\x02Hey! Link!\nDie Vogelreiter-Zeremonie hat schon\nangefangen! Schwing dich schnell auf\ndeinen Vogel!")
          }

          void entrypoint_108_32() {
/*<145>*/ 	start()
/*<148>*/ 	printf("Wenn du es schaffst, 10 Ziele in\n<r<120 Sekunden>> zu zerstören, dann bist\ndu ein wahrer Vogelreiter!")
          }

          void entrypoint_108_16() {
/*<131>*/ 	start()
/*<284>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<286>*/ 		switch (zone_temp_flags[15 /* 0x0 80 */]) {
          		  case 0:
/*<288>*/ 			printf("\x0E\x01\x09\x04\x00\x16Ich frage mich allerdings, was hier\npassiert ist. Die Monster sind plötzlich\nweg, die Lemurin verhalten sich nachts\nruhig... Hmmm...")
          		  case 1:
/*<285>*/ 			printf("\x0E\x01\x09\x04\x00\x0DSieh mal her, Link!\nDie kleine Mia ist selbst bei Nacht\nruhig und anständig!\n\nWas für eine freudige Überraschung!\nDu freust dich bestimmt auch, oder?")
/*<287>*/ 			zone_temp_flags[15 /* 0x0 80 */] = true;
          		}
          	  case 1:
/*<158>*/ 		switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          		  case 0:
/*<159>*/ 			printf("\x0E\x01\x09\x04\x00\x16Nachts ist Mia völlig verändert...\n\n\n\nEinmal war sie aus Versehen nachts in\nder Schule eingesperrt... Das war\nvielleicht ein Aufruhr!\n\nWenn du also schon nachts raus gehst,\nsei bitte vorsichtig!")
          		  case 1:
/*<132>*/ 			printf("\x0E\x01\x09\x04\x00\x04Nachts ist es gefährlich, sich draußen\naufzuhalten! Lass das lieber bleiben!\n\n\nSelbst Mia, das Haustier des Direktors,\nmacht nachts eine gar schreckliche\nVeränderung durch.\n\nJa, nachts ist hier im Wolkenhort eine\nbösartige Macht am Werk.")
          		}
          	}
          }

          void entrypoint_108_33() {
/*<146>*/ 	start()
/*<149>*/ 	printf("Also, fangen wir an!")
          }

          void entrypoint_108_17() {
/*<133>*/ 	start()
/*<134>*/ 	printf("\x0E\x01\x09\x04\x00\x02Was wird das, Link?\nWo willst du hin?\n\n\nSpring schnell ab und ruf deinen\nWolkenvogel!")
          }

          void entrypoint_108_18() {
/*<135>*/ 	start()
/*<136>*/ 	printf("\x0E\x01\x09\x04\x00\x02Link! \nMöchtest du eine Lektion?\n[1]Gern![2-]Eher nicht...")
/*<137>*/ 	switch (choice(2)) {
          	  case 0:
/*<139>*/ 		printf("Ja, das nenne ich Einsatz!\n\n\n\nSprechen wir über die Geschichte des\nWolkenhorts!\n\n\nDer Wolkenhort entstand vor\nTausenden von Jahren.\n\n\nUnsere Vorfahren stammen von\ndieser und den umliegenden Inseln\ndes Wolkenmeers.\n\n\x0E\x01\x09\x04\x09\xA00Unter dem Wolkenhort befindet sich\neine dichte Wolkendecke. Niemand, der\nsich unter diese Wolkendecke gewagt\nhat, ist je zurückgekehrt.\nEs heißt, dass sich unter\nder Wolkendecke nichts befindet!\n\n\n\x0E\x01\x09\x04\n\xA00So, hier machen wir für heute Schluss!\nDie Vogelreiter-Zeremonie wartet!")
          	  case 1:
/*<138>*/ 		printf("Oh, ach so... Heute ist ja die\nVogelreiter-Zeremonie, also fällt der\nUnterricht aus.\n\nSolltest du nicht schnell nach draußen\nund dich auf die Zeremonie\nvorbereiten?")
          	}
          }

          void entrypoint_108_01() {
          	start()
/*<  9>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 71>*/ 		switch (scene_flags[41 /* 0x4 02 */]) {
          		  case 0:
/*< 63>*/ 			printf("Ich sehe mal, was ich wegen der\nZeremonie tun kann. Mach du dich\nschnell auf die Suche nach deinem\nWolkenvogel.")
          		  case 1:
/*< 62>*/ 			printf("\x0E\x01\x09\x04\x00\x01Was ist los, Link?\nDu siehst nicht gut aus.\n\n\nWas?<pause32>\nDein Wolkenvogel ist verschwunden?\n\n\nDas ist schlimm.\nAber\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í Du weißt ungefähr, wo er ist,\noder?\n\nDu willst ihn jetzt suchen gehen?<pause28>\nAber die Zeremonie beginnt doch\ngleich!\n\nAndererseits, ohne Vogel wärst du bei\nder Zeremonie sozusagen <r<vogelfrei>>\x0E\x01\x06\x02\xFCCD...<pause1E>\n\n\n\x0E\x01\x09\x04\x00\x05\x0E\x01\x06\x02\x2CDVerzeihung...<pause1E>")
/*<160>*/ 			switch (scene_flags[30 /* 0x2 40 */]) {
          			  case 0:
/*<161>*/ 				printf("Der Direktor ruft also nach mir?\n\n\n\nNun gut!\nIch bin dir ja schließlich noch einen\nGefallen schuldig.\n\nMach dir keine Sorgen um die\nZeremonie und finde erst einmal\ndeinen Wolkenvogel.")
          				flw_72:
/*< 72>*/ 				scene_flags[0 'Skyloft'][41 /* 0x4 02 */] = true;
          			  case 1:
/*<162>*/ 				printf("Vielleicht ist das die Strafe dafür, dass\ndu meine Bitte ignoriert hast...\n\n\nWie dem auch sei...\nDer Direktor ruft nach mir?\n\n\nAha, ich verstehe. Nun gut, mach dir\nkeine Sorgen um die Zeremonie und\nfinde erst einmal deinen Wolkenvogel.")
/*<240>*/ 				story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = false;
          				goto flw_72
          			}
          		}
          	  case 1:
/*< 48>*/ 		switch (scene_flags[28 /* 0x2 10 */]) {
          		  case 0:
/*< 51>*/ 			switch (scene_flags[30 /* 0x2 40 */]) {
          			  case 0:
/*< 10>*/ 				printf("\x0E\x01\x09\x04\n\x404Gut, dass du Mia gefunden hast...\n\n\n\nSie ist nämlich ein <b<Lemurin>>, weißt du?\n\x0E\x01\x09\x04\x00\xA00Die sind zwar süß, aber nachts willst du\nkeinem begegnen, das kannst du mir\nglauben!\n[1]Warum?[2]Nachts?")
/*< 11>*/ 				switch (choice(2)) {
          				  case 0:
/*< 12>*/ 					printf("Ja, also... Du weißt nicht, was mit den\nLemurin nachts geschieht?\n\n\nIch muss dich warnen, das ist kein\nangenehmes Gesprächsthema.")
          					flw_13:
/*< 13>*/ 					printf("\x0E\x01\x09\x04\x00\x16Wenn es im Wolkenhort Nacht wird,\nergreift eine böse Macht Besitz von den\nLemurin.\n\nAußerdem kommen nachts Monster aus\nihren Verstecken, die sich dort\ntagsüber verbergen.\n\nDaher gehen die Bewohner des\nWolkenhorts nachts nur selten nach\ndraußen.\n\nAber für jemanden wie dich, der Ritter\nwerden möchte, ist das eine gute\nÜbungsgelegenheit!\n\nAber trotzdem solltest du stets auf der\nHut sein! Unaufmerksamkeit ist der\ngrößte Feind!")
          				  case 1:
          					goto flw_13
          				}
          			  case 1:
/*< 93>*/ 				set_camera(17, 0)
/*< 49>*/ 				printf("\x0E\x01\x09\x04\x0F\x40DDu hast sie heil zurückgebracht!\n<pause23>\x0E\x01\x09\x04\x09\x400Vielen Dank, Link!\n\n\nIch werde Mia nun füttern.")
/*<155>*/ 				set_camera(20, 0)
/*< 52>*/ 				printf("Sag dem Direktor Bescheid, dass\nwir sein Haustier gefunden haben.\nEr müsste sich auf dem <r<Platz vor\ndem Tempel >>befinden.")
/*<241>*/ 				set_camera(21, 0)
/*<242>*/ 				printf("Zelda ist sicher auch dort, also beeil\ndich!")
/*<243>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 50, 'param3': 42}
/*< 50>*/ 				scene_flags[0 'Skyloft'][30 /* 0x2 40 */] = true;
          			}
          		  case 1:
/*< 46>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*< 47>*/ 				printf("\x0E\x01\x09\x04\x00\x06Was ist los, Link?")
/*< 61>*/ 				set_camera(14, 0)
/*< 60>*/ 				printf("Wenn du die Wand hochläufst, kannst\ndu dich von der Kante <g<hinunterhängen\nlassen>>.\n\nAber sei vorsichtig, denn während du\ndich an der Kante festhältst, nimmt\ndeine <r<Ausdaueranzeige>> ab.")
          			  case 1:
/*<  6>*/ 				switch (temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<  7>*/ 					printf("\x0E\x01\x09\x04\x09\x400Oh, bringst du mir die kleine Mia?\n[1]Ja[2]Nein")
/*<  8>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_2:
/*<  2>*/ 						printf("\x0E\x01\x09\x04\x09\x40DDanke, dass du dir die Zeit nimmst,\nmir zu helfen.")
/*< 43>*/ 						{'type': 'type3', 'subType': 4, 'param1': 3328, 'param2': 0, 'next': 44, 'param3': 22}
/*< 44>*/ 						printf("\x0E\x01\x09\x04\x09\x400Du müsstest hier irgendwo etwas zum\nHochklettern finden. Wenn du dich an\ndem Vorsprung entlanghangelst, dann\nsolltest du aufs Dach kommen.\n\x0E\x01\x07\x04\xFF00\x00Danke nochmals!")
/*< 45>*/ 						temp_flags[2 /* 0x1 04 */] = true;
/*<235>*/ 						story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = true;
          					  case 1:
/*<229>*/ 						printf("\x0E\x01\x09\x04\x00\xA00Schade...\n\n\n\nBitte sag dem Direktor, dass ich die\nkleine Mia gefunden habe, damit er\nsich keine Sorgen mehr macht.")
          					}
          				  case 1:
/*< 68>*/ 					switch (scene_flags[38 /* 0x5 40 */]) {
          					  case 0:
/*<231>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 1, 'param3': 31}
/*<  1>*/ 						printf("\x0E\x01\x09\x04\x00\x01Hallo, Link!\nBist du auf dem Weg zum Üben für die\nVogelreiter-Zeremonie?\n\nAch?<pause1E> Du bist verabredet?\n<pause1E><b<Zelda>> wartet schon?")
/*< 42>*/ 						printf("Wo du gerade hier bist...\n\n\n\n<r<Mia>>, das Haustier von Zeldas Vater\n<b<Gepora>>, unserem Direktor, ist\nweggelaufen.")
/*<237>*/ 						set_camera(12, 0)
/*<236>*/ 						printf("Ach!\x0E\x01\n\x04\x10Í Was soll ich nur tun?\n\n\n\n\x0E\x01\n\x04\xFFFFÍDer Direktor und Zelda haben alle\nHände voll zu tun mit der Vorbereitung\nder Zeremonie.\n\nIch wollte Mia mit Futter anlocken,\naber die Zeremonie beginnt bald...\nUnd in dieser Kleidung kann ich\nihr nicht hinterherklettern.\n\x0E\x01\x07\x04\xFF00\x00Wärst du so gut, Mia zu mir zu\nbringen?\n[1]Gern![2]Hab zu tun.")
/*<  4>*/ 						switch (choice(2)) {
          						  case 0:
/*< 54>*/ 							set_camera(-1, 0)
          							goto flw_2
          						  case 1:
/*< 55>*/ 							set_camera(-1, 0)
/*<  3>*/ 							printf("\x0E\x01\x09\x04\x00\xA00Schade...\n\n\n\nBitte sag dem Direktor, dass ich die\nkleine Mia gefunden habe, damit er\nsich keine Sorgen mehr macht.")
/*<  5>*/ 							temp_flags[1 /* 0x1 02 */] = true;
/*<234>*/ 							story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = true;
          						}
          					  case 1:
/*< 65>*/ 						switch (scene_flags[37 /* 0x5 20 */]) {
          						  case 0:
/*< 90>*/ 							set_camera(9, 0)
/*< 67>*/ 							printf("\x0E\x01\x09\x04\x0B\xA06Was wird das denn?\nBeeil dich und tu das, was dein Lehrer\ndir sagt!")
          						  case 1:
/*<154>*/ 							story_flags[565 /* us: 805A9B19 0x10, jp: 805ACD99 0x10 */] = false;
/*<174>*/ 							{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': 100, 'next': 89, 'param3': 17}
/*< 89>*/ 							set_camera(9, 0)
/*<264>*/ 							switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          							  case 0:
/*<265>*/ 								printf("\x0E\x01\x09\x04\x0B\xA0DGenau. Durch Drücken von (Z) kannst\ndu Ziele <g<anvisieren>>.\x0E\x01\x11\x02\x7CD\n\n\n\x0E\x01\x09\x04\x00\xC04Hm...<pause0F> Das scheinst du schon zu wissen.\nAber es kann nie schaden, Grundlagen\nzu wiederholen!\n\n\x0E\x01\x09\x04\x00\xA00Im <r<Helden-Modus>>...<pause1E><pling> In diesem Modus\n<r<verlierst du bei Schaden doppelt so\nviele Herzen>>. Daher ist das <g<Anvisieren>>\ndurch Drücken von (Z) sehr wichtig.\x0E\x01\x11\x02\x7CD\nAber auf diese Entfernung lässt es sich\nnicht gut reden, also komm doch hier\nhoch, ja?")
          								flw_58:
/*< 58>*/ 								set_camera(10, 0)
/*< 41>*/ 								printf("\x0E\x01\x09\x04\x0B\xA00Wenn du auf diese Holzkisten dort\n<g<zusprintest>>, kannst du auf sie klettern.\n\n\nHalte (A) gedrückt und bewege dich,\num zu <g<sprinten>>. So kannst du kleinere\nHöhenunterschiede überwinden!\n\nVersuch's mal!")
/*< 66>*/ 								scene_flags[0 'Skyloft'][37 /* 0x5 20 */] = true;
          							  case 1:
/*<263>*/ 								printf("\x0E\x01\x09\x04\x0B\xA0DGenau. Durch Drücken von (Z) kannst\ndu Ziele <g<anvisieren>>.\x0E\x01\x11\x02\x7CD\n\n\nDu kannst Personen durch Drücken von\n(Z) <g<anvisieren>> und dann durch Drücken\nvon (A) mit ihnen sprechen.\x0E\x01\x11\x02\x7CD\n\nWenn es niemanden zum <g<Anvisieren\n>>gibt, kannst du (Z) auch drücken, um\nwieder nach vorn zu blicken.\x0E\x01\x11\x02\x7CD\n\nAber auf diese Entfernung lässt es sich\nnicht gut reden, also komm doch hier\nhoch, ja?")
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
/*<141>*/ 	printf("\x0E\x01\x09\x04\x00\x04Dieser Platz ist nur für Lehrer!\nSetz dich schön brav auf einen der\nPlätze für Schüler!")
          }

          void entrypoint_108_02() {
/*< 14>*/ 	start()
/*< 38>*/ 	switch (story_flags[31 /* us: 805A9ADA 0x80, jp: 805ACD5A 0x80 */]) {
          	  case 0:
/*< 21>*/ 		printf("\x0E\x01\x09\x04\x00\x02Was machst du denn?\nDrücke (A), um zu <g<sprinten>>, <r<springe\nvom Steg ab>> und schwinge dich auf\ndeinen Wolkenvogel!\nUnd vergiss nicht, dass du ihn durch\nDrücken von (v) rufen musst!\x0E\x01\x11\x02\x9CD")
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
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\x02Sehr gut. Beginnen wir also mit der\n<r<Vogelreiter-Zeremonie>>!\n\n\nEs sah erst so aus, als würde\nLink nicht teilnehmen\nkönnen... Aber jetzt sind ja alle hier!\n\nIch erkläre nun die <r<Regeln>>!")
          		flw_16:
/*< 16>*/ 		printf("Ich lasse nun einen Wolkenvogel\nfliegen, der eine Vogelfigur trägt...\n\n\nAuf mein Signal <r<sprintet>> ihr durch\nDrücken von (A) los und <r<springt vom\nSteg ab>>.\n\nVergesst mir nach dem Abspringen vor\nlauter Aufregung bloß nicht, (v) zu\ndrücken, um <g<eure Vögel zu rufen>>!\x0E\x01\x11\x02\x9CD\n\nSieger ist, wer als Erster durch\nDrücken von (A) die Vogelfigur in\nseinen Besitz bringt!\n\n\x0E\x01\n\x04\x02ÍNicht so schwer, oder?\nHabt ihr die Regeln verstanden?\n[1]Ja![2?]Noch mal!")
/*< 18>*/ 		switch (choice(2)) {
          		  case 0:
/*< 30>*/ 			set_camera(3, 0)
/*< 17>*/ 			printf("\x0E\x01\x09\x04\x00\x03\x0E\x01\x08\x02\x1CDGut!\n\n\n\nDer Sieger rückt in die Oberstufe der\nRitterschule vor.<pause14> Außerdem wird ihm\neine <r<große Auszeichnung>> verliehen.\n\nDiese Auszeichnung wurde von der\njungen Dame, die als <r<Vertreterin der\nGöttin>> auserwählt wurde, persönlich\nangefertigt.\nUnd zum 25-jährigen Jubiläum\nunserer Schule wird die Übergabe\ndieser Auszeichnung <r<auf der Statue\nder Göttin >>stattfinden.\nDie <r<Vertreterin der Göttin>>, die ihren\n<r<selbst angefertigten >>Preis dieses Jahr\npersönlich überreichen wird, ist, wie\nihr wisst...<pause14>")
/*<185>*/ 			{'type': 'type3', 'subType': 4, 'param1': 267, 'param2': 3840, 'next': 178, 'param3': 13}
/*<178>*/ 			set_camera(5, 0)
/*<175>*/ 			printf("\x0E\x01\x09\x04\x100\x09\x0E\x01\x08\x02\x1CDZelda!")
/*<194>*/ 			{'type': 'type3', 'subType': 4, 'param1': 1048, 'param2': 3084, 'next': 31, 'param3': 13}
/*< 31>*/ 			set_camera(2, 0)
/*< 20>*/ 			printf("Zeigt, was ihr bei euren täglichen\nÜbungen gelernt habt!\n\n\nUnd ich will nicht sehen, dass jemand\nmit Gegenständen wirft oder andere\nTeilnehmer angreift!")
/*<179>*/ 			set_camera(6, 0)
/*<182>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 4, 'next': 183, 'param3': 50}
/*<183>*/ 			{'type': 'type3', 'subType': 4, 'param1': 512, 'param2': 23, 'next': 176, 'param3': 13}
/*<176>*/ 			printf("\x0E\x01\x08\x02\x1CDDas gilt besonders für dich,\n\x0E\x01\x09\x04\x419\x1700Bado!")
/*< 40>*/ 			set_camera(4, 0)
/*<184>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 53, 'param3': 50}
/*< 53>*/ 			make_actor_do_something(0, 0)
/*< 39>*/ 			printf("\x0E\x01\x09\x04\x00\x02Alle auf ihre Plätze!")
/*< 37>*/ 			story_flags[31 /* us: 805A9ADA 0x80, jp: 805ACD5A 0x80 */] = true;
          		  case 1:
/*< 19>*/ 			printf("\x0E\x01\x09\x04\x00RWa... Gut, dann eben noch einmal!")
/*< 29>*/ 			set_camera(1, 0)
          			goto flw_16
          		}
          	}
          }

