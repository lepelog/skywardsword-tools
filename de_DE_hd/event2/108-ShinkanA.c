          void entrypoint_108_03() {
/*< 32>*/ 	start()
/*<254>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 113, 'next': 33, 'param3': 24}
/*< 33>*/ 	printf("\x0E\x01\x08\x02\x1CDLos!\x0E\x01\x05\x04\x0F\x00")
          }

          void entrypoint_108_20() {
/*<155>*/ 	start()
/*<288>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<289>*/ 		printf("\x0E\x01\x09\x04\x00\x01Die Statue der Göttin mag aus dem\nWolkenhort verschwunden sein, doch\ndie Göttin selbst trage ich stets in\nmeinem Herzen.\nGeht es dir ähnlich, Link?")
          	  case 1:
/*<281>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*<282>*/ 			printf("\x0E\x01\x09\x04\x00\x01Du scheinst mir gut voranzukommen!\nMach weiter so!")
          		  case 1:
/*<277>*/ 			switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          			  case 0:
/*<280>*/ 				printf("\x0E\x01\x09\x04\x00\x01Was, Narisha?<pause28> Also über ihn habe ich nur\nGerüchte gehört...\n\n\nLeider weiß ich jedoch nicht allzu viel\nüber ihn...\n\n\nSprich besser mit deinem Lehrer für den\npraktischen Unterricht, Meister <b<Otus>>.")
          			  case 1:
/*<278>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<279>*/ 					printf("\x0E\x01\x09\x04\x00\x01Ach, Mia ist ja sooo süß!<pause1E>\nHm? Triforce?<pause28>\nHat das was mit Mia zu tun?")
          				  case 1:
/*<156>*/ 					printf("\x0E\x01\x09\x04\x00\x01Der Direktor hat mich gebeten, mich\num Mia zu kümmern.\n\n\nDie ist vielleicht niedlich!\nIch überlege, mir selbst auch so ein\nHaustier anzuschaffen!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_04() {
/*< 34>*/ 	start()
/*<150>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 59, 'param3': 32}
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': -1, 'next': 152, 'param3': 50}
/*<152>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 149, 'param3': 49}
/*<149>*/ 	make_actor_do_something(0, 10)
/*<151>*/ 	{'type': 'type3', 'subType': 4, 'param1': 2578, 'param2': 2562, 'next': 35, 'param3': 13}
/*< 35>*/ 	printf("\x0E\x01\x0D\x02\x1906\x0E\x01\x08\x02\x1CDHey, Link! Hier!")
/*< 57>*/ 	set_camera(11, 0)
/*<243>*/ 	make_actor_do_something(1, 10)
/*<212>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 10, 'next': 260, 'param3': 17}
/*<260>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<261>*/ 		printf("\x0E\x01\x09\x04\xA0E\xA01Guten Morgen, Link!\nWie ich sehe, stellst du dich dem <r<Helden-\nModus>>! Du bist ja ganz schön mutig!\n\nSchließlich findet heute auch noch die\n<r<Vogelreiter-Zeremonie >>statt!\n\n\nIch hoffe, du bist dafür bereit...\nAber zuerst möchte ich noch etwas mit\ndir besprechen!\n\n<g<Visiere mich an>>, dann können wir uns\nunterhalten.")
          		flw_64:
/*< 64>*/ 		scene_flags[0 'Skyloft'][36 /* 0x5 10 */] = true;
/*<291>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 253, 'param3': 60}
/*<253>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 293, 'param3': 42}
/*<293>*/ 		scene_flags[0 'Skyloft'][27 /* 0x2 08 */] = true;
          	  case 1:
/*< 56>*/ 		printf("\x0E\x01\x09\x04\xA0E\xA01Guten Morgen, Link!\nHeute ist die <r<Vogelreiter-Zeremonie>>,\nwie fühlst du dich?\n\nIch möchte etwas mit dir besprechen.\n\n\n\n<g<Visiere mich an>>, dann können wir uns\nunterhalten.")
          		goto flw_64
          	}
          }

          void entrypoint_108_21() {
/*<185>*/ 	start()
/*<191>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 189, 'param3': 32}
/*<189>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 186, 'param3': 13}
/*<186>*/ 	printf("\x0E\x01\x08\x02\x1CDHey, Link!")
/*<187>*/ 	printf("\x0E\x01\n\x04\x12Í\x0E\x01\x09\x04\n\x202Um auf dieses Dach zu gelangen, reicht es nicht,\nwenn du nur <g<sprintest>>.")
/*<190>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 192, 'param3': 17}
/*<192>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 188, 'param3': 6}
/*<188>*/ 	set_camera(19, 0)
/*<229>*/ 	printf("Du hast bestimmt bereits die Holzkiste\nentdeckt, oder?\nStell dich davor und halte (A) gedrückt,\num sie zu <g<verschieben>>.\n<g<Sprinte>> auf die Kiste zu oder neige\ndirekt davor \x0E\x02\x04\x02\x9CD, um auf sie zu klettern.")
          }

          void entrypoint_108_05() {
/*< 36>*/ 	start()
/*<266>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<267>*/ 		printf("")
/*<269>*/ 		switch (choice(2)) {
          		  case 0:
/*<270>*/ 			printf("")
          		  case 1:
/*<268>*/ 			printf("")
          		}
          	  case 1:
/*<265>*/ 		printf("")
          	}
          }

          void entrypoint_108_22() {
/*<207>*/ 	start()
/*<209>*/ 	switch (scene_flags[92 /* 0xA 10 */]) {
          	  case 0:
/*<210>*/ 		printf("\x0E\x01\x09\x04\x00\x01Der Beginn der Zeremonie wird verschoben,\nbis du deinen Wolkenvogel gefunden hast.\n\nDu kannst ihn also in Ruhe suchen gehen.")
          	  case 1:
/*<211>*/ 		printf("\x0E\x01\x09\x04\x00\x01Der Beginn der Vogelreiter-Zeremonie wurde\nverschoben, damit du deinen Wolkenvogel\nsuchen kannst. Eine gute Nachricht, was?")
          	}
          }

          void entrypoint_108_06() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf("\x0E\x01\x09\x04\x0B\xA52Aber, Link!\nDu kannst deinen Lehrer doch nicht\neinfach ignorieren!\n\n<r<Visiere mich an>> und sprich dann mit mir!")
/*<294>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 60}
          }

          void entrypoint_108_23() {
/*<216>*/ 	start()
/*<224>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<225>*/ 		printf("\x0E\x01\x09\x04\x00\x01Und, Link?\nKommst du gut voran?\n\n\nWenn du noch Fragen hast, kannst du\ndich gern an mich wenden!")
          	  case 1:
/*<220>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*<223>*/ 			printf("\x0E\x01\x09\x04\x00\x01Der Tornadostoß ist auch für die Vögel\nsehr anstrengend.\n\n\nAber ich denke, für deinen roten\nWolkenvogel ist das kein Problem.")
          		  case 1:
/*<219>*/ 			switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          			  case 0:
/*<222>*/ 				printf("\x0E\x01\x09\x04\x00\x05Hm? \x0E\x03\x01\x00Link?\nWas machst du hier so spät?\n\n\nNarisha? Das ist kein Gespräch, das wir\nmitten in der Nacht führen sollten.\n\n\nKomm morgen früh wieder, dann können\nwir reden!")
          			  case 1:
/*<218>*/ 				switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          				  case 0:
/*<221>*/ 					printf("\x0E\x01\x09\x04\x00\x01\x0E\x03\x01\x00Link...\nDu wirst Zelda doch finden, oder?\n\n\nAch, schau nicht so betrübt.\nIch bin mir ganz sicher, dass du es\nschaffen kannst. Ich glaube fest an\ndich!")
          				  case 1:
/*<217>*/ 					printf("\x0E\x01\x09\x04\x00\x01Ihr Schüler dürft nachts keine\nWolkenvögel fliegen.\n\n\nDu kannst also jetzt nicht nach Zelda\nsuchen! Leg dich ins Bett und brich\nmorgen früh ausgeruht auf.\n\nWenn du nicht ab und zu mal Pause\nmachst, wird es dir nicht gelingen,\neinen kühlen Kopf zu bewahren!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_07() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf("\x0E\x01\x09\x04\n\xA00\x0E\x01\x08\x02\x2CD\x0E\x03\x01\x00Link!\n\x0E\x01\x08\x02\x2CDWas machst du denn?!?")
          }

          void entrypoint_108_24() {
/*<231>*/ 	start()
/*<244>*/ 	switch (scene_flags[41 /* 0x4 02 */]) {
          	  case 0:
/*<237>*/ 		printf("\x0E\x01\x09\x04\x00\x02\x0E\x03\x01\x00Link!\nJetzt ist keine Zeit zum Trödeln!\n\n\nGeh und such deinen Wolkenvogel!\nFrag mal die anderen Schüler drinnen,\nvielleicht wissen sie etwas.")
          	  case 1:
/*<238>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<245>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x03\x01\x00Link, warum läufst du\neinfach an deinem Lehrer vorbei?\n\n\nKomm einen Moment her!")
          		  case 1:
/*<232>*/ 			printf("\x0E\x01\x09\x04\x00\x02Aber, aber, Link!\nIgnorierst du etwa deinen alten Lehrer?\n\n\nKomm her und hör mir ein wenig zu!")
          		}
          	}
          }

          void entrypoint_108_08() {
/*< 75>*/ 	start()
/*< 87>*/ 	switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          	  case 0:
/*<208>*/ 		printf("")
          	  case 1:
/*< 82>*/ 		switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          		  case 0:
/*< 84>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 76, 'param3': 31}
/*< 76>*/ 			printf("\x0E\x01\x09\x04\x00\x01Na, Link?\nWas macht deine Suche nach Zelda?\nHast du sie gefunden?\n\n\x0E\x01\x09\x04\x00\x05Wer?<pause28> Narisha?\nDu hast wohl mit dem Direktor geredet...\n\n\nNarisha befindet sich in der Sturmwolke.\n\n\n\nAber\x0E\x01\x06\x02\xFECD...\n\x0E\x01\x06\x02Í<pause19>Es ist nicht der Narisha, den wir kannten...\n\n\n\x0E\x01\x06\x02\xFECDEr ist ein... <pause28>\x0E\x01\x06\x02\x1CD<r<Monster>>!\n\n\n\n\x0E\x01\x09\x04\x00\x0FEr mag wie Narisha aussehen, aber als ich\nmich ihm das letzte Mal näherte, hat er\nmich angegriffen!\n\nNarishas Blick war so voller Hass...\n\n\n\nEr hat sich verändert...\n\x0E\x01\x06\x02\xFECDIrgendwas...\x0E\x01\x06\x02Í<pause19> Irgendwas ist geschehen...\n<pause19>Das kann ich spüren.")
/*<202>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 77, 'param3': 6}
/*< 77>*/ 			printf("\x0E\x01\x09\x04\x00\x05Wie?<pause28> Du möchtest mit Narisha reden?\n\n\n\n\x0E\x01\x06\x02\xFECDDas...\x0E\x01\x06\x02Í Das ist unmöglich.\nNarisha ist im Moment für unsere\nWorte unerreichbar.\n\n\x0E\x01\x06\x02\xFECDUnd selbst wenn...\x0E\x01\x06\x02Í\nSelbst wenn du nah genug an ihn\nherankommen würdest, er würde dich\nangreifen, und das wäre dein Ende!")
/*<203>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 200, 'param3': 6}
/*<200>*/ 			printf("\x0E\x01\x09\x04\x00RWas?<pause28> Du willst trotzdem gehen?\n\n\n\n\x0E\x01\x06\x02\xFECDNun...\n\x0E\x01\x06\x02ÍDu willst es tun, um Zelda zu finden, oder?\n\n\nGut.<pause1E>\nIch habe das Gefühl, du lässt dich davon\nnicht abbringen!")
/*<204>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 201, 'param3': 6}
/*<201>*/ 			printf("Ich habe eine Idee!\nKomm mit!")
/*< 85>*/ 			story_flags[362 /* us: 805A9B03 0x01, jp: 805ACD83 0x01 */] = true;
/*< 86>*/ 			changeScene(0, 0) // 
          		  case 1:
/*<275>*/ 			switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          			  case 0:
/*<276>*/ 				printf("\x0E\x01\x09\x04\x00\x01Hallo, Link!\n<pause1E>Was sagst du? Das Triforce?\n\n\nEs tut mir leid, aber dazu kann ich dir nichts\nsagen. Frag doch am besten den Direktor, ja?")
          			  case 1:
/*< 83>*/ 				printf("\x0E\x01\x09\x04\x00\x01Hallo, Link!\nWie geht die Suche nach Zelda voran?\n\n\nTut mir leid, dass du sie allein suchen musst!\nBitte finde sie!")
          			}
          		}
          	}
          }

          void entrypoint_108_09() {
/*< 78>*/ 	start()
/*< 79>*/ 	printf("\x0E\x01\x09\x04\x00\x02Irgendetwas stimmt mit Narisha in der\nSturmwolke nicht.\n\n\nWenn du die Ursache für sein\nVerhalten beseitigst, kommt der alte\nNarisha vielleicht wieder zurück.\n\nAlso, Link!\nIch bringe dir jetzt eine ganz spezielle\nVogelreiter-Technik bei!\n\n\x0E\x01\x09\x04\x00\x03Den <r<Tornadostoß>>!")
/*<258>*/ 	set_camera(22, 0)
/*<256>*/ 	printf("Der Tornadostoß ist ein starker Angriff,\nmit seiner Hilfe kannst du Narisha sicher\nvon dem Übel, das ihn befallen hat, befreien!\n\nDie Ausführung ist im Prinzip nicht schwierig.\nDu musst nur \x0E\x02\x04\x02\x1ECD drücken, das ist alles!\x0E\x01\x11\x02\x10CD\n\n\nAllerdings wird dein Wolkenvogel extrem\nschnell und dieser Zustand hält länger an als\nnach der normalen <r<Attacke>>.\n\nDie Kunst ist, den Vogel im Flug stabil zu\nhalten, deshalb lernen nur die erfahrensten\nSchüler der Oberstufe diese besondere Technik.\n\nFür dich ist es eigentlich noch zu früh...<pause1E> Aber\nwir wollen sehen, vielleicht bist du ja schon\nbereit dafür.")
/*<259>*/ 	set_camera(-1, 0)
/*<257>*/ 	printf("\x0E\x01\x09\x04\x00\x04Sprinte los und spring von hier ab, dann rufe\ndeinen Wolkenvogel.")
/*< 93>*/ 	story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = true;
/*< 98>*/ 	story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
/*<248>*/ 	zone_temp_flags[13 /* 0x0 20 */] = true;
          }

          void entrypoint_108_10() {
/*< 90>*/ 	start()
/*<128>*/ 	switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          	  case 0:
/*<129>*/ 		printf("\x0E\x01\x09\x04\x00\x0FWas Zelda passiert ist, ist furchtbar...\n\n\n\nAber du darfst dich deswegen nicht mit\nVorwürfen quälen...\nEs war ein Unfall.")
          	  case 1:
/*<127>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<196>*/ 			switch (scene_flags[91 /* 0xA 08 */]) {
          			  case 0:
/*<198>*/ 				printf("\x0E\x01\x09\x04\x00\x01Lass die Zeremonie die Sorge von uns Lehrern\nsein und sieh zu, dass du deinen Vogel findest!")
          			  case 1:
/*<126>*/ 				printf("\x0E\x01\x09\x04\x00\x0FWas ist, Link?\n<pause1E>Dein Vogel ist nicht gekommen, als du ihn\ngerufen hast?\n\nEs kann eigentlich nicht sein, dass dein\nWolkenvogel nicht deinem Ruf gefolgt ist\x0E\x01\x06\x02\xFECD...\n\n\nHast du schon mit Meister <b<Tytor >>gesprochen?\nSchließlich ist er der Zeremonienmeister.\n\n\nAha...\nDer Direktor wird schon einen Weg finden,\ndich an der Zeremonie teilnehmen zu lassen.\n\nAber du solltest deinen Vogel so schnell wie\nmöglich finden!")
/*<199>*/ 				scene_flags[0 'Skyloft'][91 /* 0xA 08 */] = true;
          			}
          		  case 1:
/*<194>*/ 			switch (scene_flags[90 /* 0xA 04 */]) {
          			  case 0:
/*<195>*/ 				printf("\x0E\x01\x09\x04\x00\x01Du hast Meister <b<Tytor >>und mich schon immer\ngern verwechselt...\n\n\nIch, <b<Otus>> mit den weißen Haaren, gebe den\npraktischen Unterricht.<b<\n\n>>\nMeister <b<Tytor>> hat dunkle Haare und\nunterrichtet die Theorie. Merk dir das bitte.")
          			  case 1:
/*< 91>*/ 				printf("\x0E\x01\x09\x04\x00\x01So, Link!\nDer große Tag der <r<Vogelreiter-Zeremonie>> ist\nalso endlich gekommen!\n\nErinnere dich an meine praktischen Lektionen\nund den Unterricht von Meister <b<Tytor>> und gib\ndein Bestes!\n\nWo wir gerade davon sprechen...\nWeißt du noch, dass du dich durch Drücken\nvon (^) <r<umsehen>> kannst?\x0E\x01\x11\x02\x8CD\n\n<g<Drücke>> einfach \x0E\x02\x04\x02\x22CD, wenn du dir etwas genauer\nansehen möchtest!\x0E\x01\x11\x02\x8CD")
/*<197>*/ 				scene_flags[0 'Skyloft'][90 /* 0xA 04 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_108_11() {
/*<122>*/ 	start()
/*<162>*/ 	switch (scene_flags[20 /* 0x3 10 */]) {
          	  case 0:
/*<272>*/ 		switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          		  case 0:
/*<274>*/ 			printf("\x0E\x01\x09\x04\x00\x01Das Erdland existiert also wirklich?\n\n\n\nEs mag nur eine Hypothese sein, aber\nvermutlich ist das Erdland kein solch\nfriedlicher Ort wie unser Wolkenhort.\nHmmm...")
          		  case 1:
/*<271>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<273>*/ 				printf("\x0E\x01\x09\x04\x00\x01Wie kommst du bei der Suche nach\nZelda voran?\n\n\nWenn du erschöpft bist, ruh dich doch\nin deinem Bett aus. So kannst du den\nWolkenhort bei Nacht erleben, und\ndeine Herzen werden auch aufgefüllt!")
          			  case 1:
/*<166>*/ 				printf("\x0E\x01\x09\x04\x00\x01Sei stets vorsichtig! Ich hoffe, dass du Zelda\nfinden kannst.")
          			}
          		}
          	  case 1:
/*<167>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 123, 'param3': 31}
/*<123>*/ 		printf("\x0E\x01\x09\x04\x00\x11\x0E\x03\x01\x00Link!\nIch habe gehört, dass du Zelda unter den\nWolken suchen willst.\n\nDer Direktor sprach davon, dass unter den\nWolken das Erdland liegt... Weißt du etwas\nüber dieses Erdland?")
/*<168>*/ 		switch (adventure_pouch_has(9 0x0009)) {
          		  case 0:
/*<170>*/ 			printf("Ein interessantes Schwert...\nAber einen Schild brauchst du auch<pause0A>.<pause0A>.<pause0A>.<pause0A>\nOh, du hast schon einen!\nVorbildlich, vorbildlich!\nHier, ein Abschiedsgeschenk von mir.")
          			flw_171:
/*<171>*/ 			give_item(4 0x04);
/*<255>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 172, 'param3': 12}
          			flw_172:
/*<172>*/ 			printf("Wenn du nicht weißt, wie du mit einem\nSchild umgehst, frag am besten den\n<b<Schwertmeister >>in der Übungshalle.\nEr kann es dir sicher beibringen.")
/*<165>*/ 			scene_flags[0 'Skyloft'][20 /* 0x3 10 */] = true;
/*<213>*/ 			switch (scene_flags[89 /* 0xA 02 */]) {
          			  case 0:
          			  case 1:
/*<214>*/ 				story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
/*<215>*/ 				scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
          			}
          		  case 1:
/*<246>*/ 			switch (is_adventure_pouch_full()) {
          			  case 0:
/*<247>*/ 				printf("Das ist übrigens ein interessantes Schwert...\nAber einen Schild brauchst du auch.\n\n\nDu kannst allerdings keine weitere Ausrüstung\nmehr tragen. Na, dann nimm das\nals Abschiedsgeschenk.")
          				goto flw_171
          			  case 1:
/*<169>*/ 				printf("Das ist übrigens ein interessantes Schwert...\nAber einen Schild brauchst du auch.\nNimm den hier!")
/*<163>*/ 				give_item(116 0x74);
/*<164>*/ 				printf("Ein Holzschild ist leicht und einfach zu\nhandhaben, hält aber nicht viel aus.\nAußerdem kann er Feuer fangen.\n\nWenn dein Schild zerstört wird, kannst\ndu dir im Basar einen neuen kaufen.\n\n\nDu kannst den Schild ausrüsten, indem du\n\x0E\x02\x04\x02\x28CD <g<gedrückt hältst>>, den gewünschten\nSchild auswählst und \x0E\x02\x04\x02\x28CD wieder loslässt.\x0E\x01\x11\x02\xECD")
          				goto flw_172
          			}
          		}
          	}
          }

          void entrypoint_108_12() {
/*< 94>*/ 	start()
/*<205>*/ 	switch (scene_flags[77 /* 0x8 20 */]) {
          	  case 0:
/*<206>*/ 		printf("")
          	  case 1:
/*< 96>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*< 80>*/ 			printf("\x0E\x01\x09\x04\x00\nSehr gut, du hast innerhalb des Zeitlimits\n10 Ziele zerstört!\n\n\nDu beherrschst deinen roten Wolkenvogel\nwirklich meisterlich, Link!\nWirklich sehr gut!\n\nDu hast dir das Recht verdient, den\nTornadostoß einzusetzen.")
/*< 81>*/ 			printf("Jetzt musst du Narisha nur noch finden...\n\n\n\nDer <r<Besitzer der Kürbisbar >>bringt Narisha jedes\nJahr Kürbissuppe, er müsste dir helfen können.\n\n\nJa, am besten fragst du ihn um Rat...")
/*<106>*/ 			scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = true;
          		  case 1:
/*< 95>*/ 			switch (story_flags[641 /* us: 805A9B1D 0x04, jp: 805ACD9D 0x04 */]) {
          			  case 0:
/*< 97>*/ 				printf("\x0E\x01\x09\x04\x00\x0FHm, wenn es dir nicht gelingt, 10 Ziele in\n<r<120 Sekunden >>zu zerstören, kann ich dir\ndiese Technik leider nicht erlauben.\n\nRuh dich ein wenig aus, ich bin hier noch\neine Weile. Wenn du bereit für einen\nneuen Versuch bist, sag es mir.")
/*< 99>*/ 				story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = false;
/*<226>*/ 				story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = false;
/*<227>*/ 				story_flags[641 /* us: 805A9B1D 0x04, jp: 805ACD9D 0x04 */] = false;
/*<104>*/ 				scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = true;
          			  case 1:
          			}
          		}
          	}
          }

          void entrypoint_108_13() {
/*<100>*/ 	start()
/*<102>*/ 	switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          	  case 0:
/*<103>*/ 		printf("\x0E\x01\x09\x04\x00\x01Die Kürbisbar befindet sich <r<südöstlich >>vom\nWolkenhort. Dort lebt <b<Kabocha>> mit ihrer\nlieblichen Stimme...\n\n<pause1E>Ich bin\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í ein großer Fan von ihr. Aber das\ndarf niemand wissen!")
          	  case 1:
/*<105>*/ 		switch (scene_flags[77 /* 0x8 20 */]) {
          		  case 0:
          			flw_107:
/*<107>*/ 			printf("\x0E\x01\x09\x04\x00\x01Na, Link!\nWillst du dich an der Prüfung für den\nTornadostoß versuchen?\n[1]Klar![2-]Später...")
/*<108>*/ 			switch (choice(2)) {
          			  case 0:
/*<109>*/ 				printf("\x0E\x01\x09\x04\x00\x03Das wollte ich hören!\nNa, dann spring!")
/*<111>*/ 				scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = false;
/*<112>*/ 				story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = true;
/*<113>*/ 				story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
/*<250>*/ 				zone_temp_flags[13 /* 0x0 20 */] = true;
          			  case 1:
/*<110>*/ 				printf("Schon in Ordnung, ich warte, bis du dich\nbereit fühlst.\n\n\nIch bleibe hier noch eine Weile, komm\njederzeit vorbei!")
/*<252>*/ 				zone_temp_flags[13 /* 0x0 20 */] = false;
          			}
          		  case 1:
/*<121>*/ 			switch (story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */]) {
          			  case 0:
/*<101>*/ 				printf("\x0E\x01\x09\x04\x00\x01Na, dann spring hier ab!\nOder willst du lieber doch nicht?\n[1]Doch![2-]Lieber nicht...")
/*<116>*/ 				switch (choice(2)) {
          				  case 0:
/*<120>*/ 					printf("\x0E\x01\x09\x04\x00\x03Sehr gut, das wollte ich hören! Stürz dich\nins Wolkenmeer, Link!")
/*<249>*/ 					zone_temp_flags[13 /* 0x0 20 */] = true;
          				  case 1:
/*<117>*/ 					story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = false;
/*<118>*/ 					story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = false;
/*<119>*/ 					printf("Schon in Ordnung, ich warte, bis du dich\nbereit fühlst.\n\n\nIch bleibe hier noch eine Weile, komm\njederzeit vorbei!")
/*<251>*/ 					zone_temp_flags[13 /* 0x0 20 */] = false;
          				}
          			  case 1:
          				goto flw_107
          			}
          		}
          	}
          }

          void entrypoint_108_30() {
/*<141>*/ 	start()
/*<142>*/ 	printf("Also gut, Link!\n\n\n\nWenn du auf deinem Wolkenvogel \x0E\x02\x04\x02\x1ECD drückst,\n<g<dreht>> er sich und greift an.")
          }

          void entrypoint_108_14() {
/*<114>*/ 	start()
/*<115>*/ 	printf("")
          }

          void entrypoint_108_31() {
/*<143>*/ 	start()
/*<146>*/ 	printf("Du musst <r<10 Ziele>> mit einem\n<r<Tornadostoß>> zerstören!")
          }

          void entrypoint_108_15() {
/*<124>*/ 	start()
/*<125>*/ 	printf("\x0E\x01\x09\x04\x00\x02Hey! \x0E\x03\x01\x00Link!\nDie Vogelreiter-Zeremonie hat schon\nangefangen! Schwing dich schnell auf\ndeinen Vogel!")
          }

          void entrypoint_108_32() {
/*<144>*/ 	start()
/*<147>*/ 	printf("Wenn du es schaffst, 10 Ziele in\n<r<120 Sekunden>> zu zerstören, dann\nbist du ein wahrer Vogelreiter!")
          }

          void entrypoint_108_16() {
/*<130>*/ 	start()
/*<283>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<285>*/ 		switch (zone_temp_flags[15 /* 0x0 80 */]) {
          		  case 0:
/*<287>*/ 			printf("\x0E\x01\x09\x04\x00\x16Ich frage mich allerdings, was hier passiert ist.\nDie Monster sind plötzlich weg, die Lemurin\nverhalten sich nachts ruhig... Hmmm...")
          		  case 1:
/*<284>*/ 			printf("\x0E\x01\x09\x04\x00\x0DSieh mal her, Link!\nDie kleine Mia ist selbst bei Nacht\nruhig und anständig!\n\nWas für eine freudige Überraschung!\nDu freust dich bestimmt auch, oder?")
/*<286>*/ 			zone_temp_flags[15 /* 0x0 80 */] = true;
          		}
          	  case 1:
/*<157>*/ 		switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          		  case 0:
/*<158>*/ 			printf("\x0E\x01\x09\x04\x00\x16Nachts ist Mia völlig verändert...\n\n\n\nEinmal war sie aus Versehen nachts in\nder Schule eingesperrt... Das war\nvielleicht ein Aufruhr!\n\nWenn du also schon nachts raus gehst,\nsei bitte vorsichtig!")
          		  case 1:
/*<131>*/ 			printf("\x0E\x01\x09\x04\x00\x04Nachts ist es gefährlich, sich draußen\naufzuhalten! Lass das lieber bleiben!\n\n\nSelbst Mia, das Haustier des Direktors,\nmacht nachts eine gar schreckliche\nVeränderung durch.\n\nJa, nachts ist hier im Wolkenhort eine\nbösartige Macht am Werk.")
          		}
          	}
          }

          void entrypoint_108_33() {
/*<145>*/ 	start()
/*<148>*/ 	printf("Also, fangen wir an!")
          }

          void entrypoint_108_17() {
/*<132>*/ 	start()
/*<133>*/ 	printf("\x0E\x01\x09\x04\x00\x02Was wird das, Link?\nWo willst du hin?\n\n\nSpring schnell ab und ruf deinen\nWolkenvogel!")
          }

          void entrypoint_108_18() {
/*<134>*/ 	start()
/*<135>*/ 	printf("\x0E\x01\x09\x04\x00\x02\x0E\x03\x01\x00Link!\nMöchtest du eine Lektion?\n[1]Gern![2-]Eher nicht...")
/*<136>*/ 	switch (choice(2)) {
          	  case 0:
/*<138>*/ 		printf("Ja, das nenne ich Einsatz!\n\n\n\nSprechen wir über die Geschichte des\nWolkenhorts!\n\n\nDer Wolkenhort entstand vor Tausenden\nvon Jahren.\n\n\nUnsere Vorfahren stammen von dieser\nund den umliegenden Inseln\ndes Wolkenmeers.\n\n\x0E\x01\x09\x04\x09\xA00Unter dem Wolkenhort befindet sich eine\ndichte Wolkendecke. Niemand, der sich\nunter diese Wolkendecke gewagt hat,\nist je zurückgekehrt.\nEs heißt, dass sich unter der Wolkendecke\nnichts befindet!\n\n\n\x0E\x01\x09\x04\n\xA00So, hier machen wir für heute Schluss!\nDie Vogelreiter-Zeremonie wartet!")
          	  case 1:
/*<137>*/ 		printf("Oh, ach so... Heute ist ja die Vogelreiter-\nZeremonie, also fällt der Unterricht aus.\n\n\nSolltest du nicht schnell nach draußen\nund dich auf die Zeremonie vorbereiten?")
          	}
          }

          void entrypoint_108_01() {
          	start()
/*<  9>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 71>*/ 		switch (scene_flags[41 /* 0x4 02 */]) {
          		  case 0:
/*< 63>*/ 			printf("Ich sehe mal, was ich wegen der Zeremonie tun\nkann. Mach du dich schnell auf die Suche nach\ndeinem Wolkenvogel.")
          		  case 1:
/*< 62>*/ 			printf("\x0E\x01\x09\x04\x00\x01Was ist los, Link?\nDu siehst nicht gut aus.\n\n\nWas?<pause32>\nDein Wolkenvogel ist verschwunden?\n\n\nDas ist schlimm.\nAber\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í Du weißt ungefähr, wo er ist, oder?\n\n\nDu willst ihn jetzt suchen gehen?<pause28>\nAber die Zeremonie beginnt doch gleich!\n\n\nAndererseits, ohne Vogel wärst du bei\nder Zeremonie sozusagen <r<vogelfrei>>\x0E\x01\x06\x02\xFCCD...<pause1E>\n\n\n\x0E\x01\x09\x04\x00\x05\x0E\x01\x06\x02\x2CDVerzeihung...<pause1E>")
/*<159>*/ 			switch (scene_flags[30 /* 0x2 40 */]) {
          			  case 0:
/*<160>*/ 				printf("Der Direktor ruft also nach mir?\n\n\n\nNun gut! Ich bin dir ja schließlich noch\neinen Gefallen schuldig.\n\n\nMach dir keine Sorgen um die Zeremonie\nund finde erst einmal deinen Wolkenvogel.")
          				flw_72:
/*< 72>*/ 				scene_flags[0 'Skyloft'][41 /* 0x4 02 */] = true;
          			  case 1:
/*<161>*/ 				printf("Vielleicht ist das die Strafe dafür,\ndass du meine Bitte ignoriert hast...\n\n\nWie dem auch sei...\nDer Direktor ruft nach mir?\n\n\nAha, ich verstehe. Nun gut, mach dir\nkeine Sorgen um die Zeremonie und\nfinde erst einmal deinen Wolkenvogel.")
/*<239>*/ 				story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = false;
          				goto flw_72
          			}
          		}
          	  case 1:
/*< 48>*/ 		switch (scene_flags[28 /* 0x2 10 */]) {
          		  case 0:
/*< 51>*/ 			switch (scene_flags[30 /* 0x2 40 */]) {
          			  case 0:
/*< 10>*/ 				printf("\x0E\x01\x09\x04\n\x404Gut, dass du Mia gefunden hast...\n\n\n\nSie ist nämlich ein <b<Lemurin>>, weißt du? \x0E\x01\x09\x04\x00\xA00Die\nsind zwar süß, aber nachts willst du keinem\nbegegnen, das kannst du mir glauben!\n[1]Warum?[2]Nachts?")
/*< 11>*/ 				switch (choice(2)) {
          				  case 0:
/*< 12>*/ 					printf("Ja, also... Du weißt nicht, was mit den\nLemurin nachts geschieht?\n\n\nIch muss dich warnen, das ist kein\nangenehmes Gesprächsthema.")
          					flw_13:
/*< 13>*/ 					printf("\x0E\x01\x09\x04\x00\x16Wenn es im Wolkenhort Nacht wird, ergreift\neine böse Macht Besitz von den Lemurin.\n\n\nAußerdem kommen nachts Monster aus ihren\nVerstecken, die sich dort tagsüber verbergen.\n\n\nDaher gehen die Bewohner des Wolkenhorts\nnachts nur selten nach draußen.\n\n\nAber für jemanden wie dich, der Ritter werden\nmöchte, ist das eine gute Übungsgelegenheit!\n\n\nAber trotzdem solltest du stets auf der Hut\nsein! Unaufmerksamkeit ist der größte Feind!")
          				  case 1:
          					goto flw_13
          				}
          			  case 1:
/*< 92>*/ 				set_camera(17, 0)
/*< 49>*/ 				printf("\x0E\x01\x09\x04\x0F\x40DDu hast sie heil zurückgebracht!\n<pause23>\x0E\x01\x09\x04\x09\x400Vielen Dank, Link!\n\n\nIch werde Mia nun füttern.")
/*<154>*/ 				set_camera(20, 0)
/*< 52>*/ 				printf("Sag dem Direktor Bescheid, dass wir sein\nHaustier gefunden haben. Er müsste sich\nauf dem <r<Platz vor dem Tempel >>befinden.")
/*<240>*/ 				set_camera(21, 0)
/*<241>*/ 				printf("Zelda ist sicher auch dort, also beeil dich!\n\n\n\nOh, und ich sollte dir wohl etwas geben...\nEs ist keine große Sache, aber hier, bitte.\nUnd, äh, sag den anderen nichts davon.")
/*<242>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 50, 'param3': 42}
/*< 50>*/ 				scene_flags[0 'Skyloft'][30 /* 0x2 40 */] = true;
/*<292>*/ 				give_item(4 0x04);
          			}
          		  case 1:
/*< 46>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*< 47>*/ 				printf("\x0E\x01\x09\x04\x00\x06Was ist los, Link?")
/*< 61>*/ 				set_camera(14, 0)
/*< 60>*/ 				printf("Wenn du die Wand hochläufst, kannst du\ndich von der Kante <g<hinunterhängen lassen>>.\n\n\nAber sei vorsichtig, denn während du dich\nan der Kante festhältst, nimmt deine\n<r<Ausdaueranzeige>> ab.")
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
/*<234>*/ 						story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = true;
          					  case 1:
/*<228>*/ 						printf("\x0E\x01\x09\x04\x00\xA00Schade...\n\n\n\nBitte sag dem Direktor, dass ich die kleine Mia\ngefunden habe, damit er sich keine Sorgen\nmehr macht.")
          					}
          				  case 1:
/*< 68>*/ 					switch (scene_flags[38 /* 0x5 40 */]) {
          					  case 0:
/*<230>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 1, 'param3': 31}
/*<  1>*/ 						printf("\x0E\x01\x09\x04\x00\x01Hallo, Link!\nBist du auf dem Weg zum Üben für die\nVogelreiter-Zeremonie?\n\nAch?<pause1E> Du bist verabredet?\n<pause1E><b<Zelda>> wartet schon?")
/*< 42>*/ 						printf("Wo du gerade hier bist...\n\n\n\n<r<Mia>>, das Haustier von Zeldas Vater <b<Gepora>>,\nunserem Direktor, ist weggelaufen.")
/*<236>*/ 						set_camera(12, 0)
/*<235>*/ 						printf("Ach!\x0E\x01\n\x04\x10Í Was soll ich nur tun?\n\n\n\n\x0E\x01\n\x04\xFFFFÍDer Direktor und Zelda haben alle Hände voll\nzu tun mit der Vorbereitung der Zeremonie.\n\n\nIch wollte Mia mit Futter anlocken, aber die\nZeremonie beginnt bald... Und in dieser\nKleidung kann ich ihr nicht hinterherklettern.\n\n\x0E\x01\x07\x04\xFF00\x00Wärst du so gut, Mia zu mir zu bringen?\n[1]Gern![2]Hab zu tun.")
/*<  4>*/ 						switch (choice(2)) {
          						  case 0:
/*< 54>*/ 							set_camera(-1, 0)
          							goto flw_2
          						  case 1:
/*< 55>*/ 							set_camera(-1, 0)
/*<  3>*/ 							printf("\x0E\x01\x09\x04\x00\xA00Schade...\n\n\n\nBitte sag dem Direktor, dass ich die kleine Mia\ngefunden habe, damit er sich keine Sorgen\nmehr macht.")
/*<  5>*/ 							temp_flags[1 /* 0x1 02 */] = true;
/*<233>*/ 							story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = true;
          						}
          					  case 1:
/*< 65>*/ 						switch (scene_flags[37 /* 0x5 20 */]) {
          						  case 0:
/*< 89>*/ 							set_camera(9, 0)
/*< 67>*/ 							printf("\x0E\x01\x09\x04\x0B\xA06Was wird das denn?\nBeeil dich und tu das, was dein Lehrer dir sagt!")
          						  case 1:
/*<153>*/ 							story_flags[565 /* us: 805A9B19 0x10, jp: 805ACD99 0x10 */] = false;
/*<173>*/ 							{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': 100, 'next': 88, 'param3': 17}
/*< 88>*/ 							set_camera(9, 0)
/*<263>*/ 							switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          							  case 0:
/*<264>*/ 								printf("\x0E\x01\x09\x04\x0B\xA0DGenau. Du kannst du jemanden <g<anvisieren\n>>und dann ganz leicht mit ihnen sprechen.\n\n\n\x0E\x01\x09\x04\x00\xC04Du schaust mich an, als wüsstest du das\nalles schon... Dabei kann es nie schaden,\ndie Grundlagen noch mal aufzufrischen!\n\n\x0E\x01\x09\x04\x00\xA00Im <r<Helden-Modus>>...<pause1E><pling> In diesem Modus <r<verlierst\ndu bei Schaden doppelt so viele Herzen>>.\nDaher ist das <g<Anvisieren >>absolut wichtig.\n\nAber auf diese Entfernung lässt es sich nicht\ngut reden, also komm doch hier hoch, ja?")
          								flw_58:
/*< 58>*/ 								set_camera(10, 0)
/*< 41>*/ 								printf("\x0E\x01\x09\x04\x0B\xA00Wenn du auf diese Holzkisten dort <g<zusprintest>>,\nkannst du auf sie klettern.\n\n\nDen Sprung solltest du ganz einfach schaffen!\n\n\n\nVersuch's mal!")
/*< 66>*/ 								scene_flags[0 'Skyloft'][37 /* 0x5 20 */] = true;
/*<290>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': -1, 'param3': 60}
          							  case 1:
/*<262>*/ 								printf("\x0E\x01\x09\x04\x0B\xA0DGenau. Du kannst jemanden <g<anvisieren>> und\ndann ganz leicht mit ihnen sprechen.\n\n\nWenn es niemanden zum <g<Anvisieren >>gibt,\nkannst du diese tolle Technik aber auch\neinsetzen, um einfach wieder nach vorn\nzu blicken.\nAber auf diese Entfernung lässt es sich nicht\ngut reden, also komm doch hier hoch, ja?")
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
/*<139>*/ 	start()
/*<140>*/ 	printf("\x0E\x01\x09\x04\x00\x04Dieser Platz ist nur für Lehrer!\nSetz dich schön brav auf einen der\nPlätze für Schüler!")
          }

          void entrypoint_108_02() {
/*< 14>*/ 	start()
/*< 38>*/ 	switch (story_flags[31 /* us: 805A9ADA 0x80, jp: 805ACD5A 0x80 */]) {
          	  case 0:
/*< 21>*/ 		printf("\x0E\x01\x09\x04\x00\x02Was machst du denn?\nHalte (B) gedrückt, um zu <g<sprinten>>,\n<r<springe vom Steg ab>> und schwinge\ndich auf deinen Wolkenvogel!\nUnd vergiss nicht, dass du ihn durch\nDrücken von (v) rufen musst!\x0E\x01\x11\x02\x9CD")
          	  case 1:
/*< 28>*/ 		set_camera(1, 0)
/*< 22>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 23, 'param3': 32}
/*< 23>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 24, 'param3': 32}
/*< 24>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 6, 'next': 176, 'param3': 32}
/*<176>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 179, 'param3': 32}
/*<179>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 25, 'param3': 32}
/*< 25>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': 26, 'param3': 17}
/*< 26>*/ 		{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 0, 'next': 27, 'param3': 17}
/*< 27>*/ 		{'type': 'type3', 'subType': 1, 'param1': 6, 'param2': 0, 'next': 180, 'param3': 17}
/*<180>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 19, 'next': 15, 'param3': 13}
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\x02Sehr gut. Beginnen wir also mit der\n<r<Vogelreiter-Zeremonie>>!\n\n\nEs sah erst so aus, als würde\nLink nicht teilnehmen\nkönnen... Aber jetzt sind ja alle hier!\n\nIch erkläre nun die <r<Regeln>>!")
          		flw_16:
/*< 16>*/ 		printf("Ich lasse nun einen Wolkenvogel fliegen,\nder eine Vogelfigur trägt...\n\n\nAuf mein Signal <g<sprintet>> ihr los und\n<r<springt vom Steg ab>>.\n\n\nVergesst mir nach dem Abspringen vor\nlauter Aufregung bloß nicht, (v) zu\ndrücken, um <g<eure Vögel zu rufen>>!\x0E\x01\x11\x02\x9CD\n\nSieger ist, wer als Erster die <r<Vogelfigur\n>>in seinen Besitz bringt!\n\n\n\x0E\x01\n\x04\x02ÍNicht so schwer, oder?\nHabt ihr die Regeln verstanden?\n[1]Ja![2?]Noch mal!")
/*< 18>*/ 		switch (choice(2)) {
          		  case 0:
/*< 30>*/ 			set_camera(3, 0)
/*< 17>*/ 			printf("\x0E\x01\x09\x04\x00\x03\x0E\x01\x08\x02\x1CDGut!\n\n\n\nDer Sieger rückt in die Oberstufe der\nRitterschule vor.<pause14> Außerdem wird ihm\neine <r<große Auszeichnung>> verliehen.\n\nDiese Auszeichnung wurde von der\njungen Dame, die als <r<Vertreterin der\nGöttin>> auserwählt wurde, persönlich\nangefertigt.\nUnd zum 25-jährigen Jubiläum\nunserer Schule wird die Übergabe\ndieser Auszeichnung <r<auf der Statue\nder Göttin >>stattfinden.\nDie <r<Vertreterin der Göttin>>, die ihren\n<r<selbst angefertigten >>Preis dieses Jahr\npersönlich überreichen wird, ist, wie\nihr wisst...<pause14>")
/*<184>*/ 			{'type': 'type3', 'subType': 4, 'param1': 267, 'param2': 3840, 'next': 177, 'param3': 13}
/*<177>*/ 			set_camera(5, 0)
/*<174>*/ 			printf("\x0E\x01\x09\x04\x100\x09\x0E\x01\x08\x02\x1CDZelda!")
/*<193>*/ 			{'type': 'type3', 'subType': 4, 'param1': 1048, 'param2': 3084, 'next': 31, 'param3': 13}
/*< 31>*/ 			set_camera(2, 0)
/*< 20>*/ 			printf("Zeigt, was ihr bei euren täglichen\nÜbungen gelernt habt!\n\n\nUnd ich will nicht sehen, dass jemand\nmit Gegenständen wirft oder andere\nTeilnehmer angreift!")
/*<178>*/ 			set_camera(6, 0)
/*<181>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 4, 'next': 182, 'param3': 50}
/*<182>*/ 			{'type': 'type3', 'subType': 4, 'param1': 512, 'param2': 23, 'next': 175, 'param3': 13}
/*<175>*/ 			printf("\x0E\x01\x08\x02\x1CDDas gilt besonders für dich, \x0E\x01\x09\x04\x419\x1700Bado!")
/*< 40>*/ 			set_camera(4, 0)
/*<183>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 53, 'param3': 50}
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

