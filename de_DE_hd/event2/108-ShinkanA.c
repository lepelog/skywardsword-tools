          void entrypoint_108_03() {
/*< 32>*/ 	start()
/*<254>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 113, 'next': 33, 'param3': 24}
/*< 33>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10008:0x01cd>Los!<0x10005:0x000f0000>")
          }

          void entrypoint_108_20() {
/*<155>*/ 	start()
/*<288>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<289>*/ 		printf(/* textboxtype: 0, unk: 0, line: 98 */ "<0x10009:0x00000001>Die Statue der Göttin mag aus dem\nWolkenhort verschwunden sein, doch\ndie Göttin selbst trage ich stets in\nmeinem Herzen.\nGeht es dir ähnlich, <heroname>?")
          	  case 1:
/*<281>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*<282>*/ 			printf(/* textboxtype: 0, unk: 1, line: 97 */ "<0x10009:0x00000001>Du scheinst mir gut voranzukommen!\nMach weiter so!")
          		  case 1:
/*<277>*/ 			switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          			  case 0:
/*<280>*/ 				printf(/* textboxtype: 1, unk: 0, line: 96 */ "<0x10009:0x00000001>Was, Narisha?<pause 40> Also über ihn habe ich nur\nGerüchte gehört...\n\n\nLeider weiß ich jedoch nicht allzu viel\nüber ihn...\n\n\nSprich besser mit deinem Lehrer für den\npraktischen Unterricht, Meister <color blue<Otus>coloroff>.")
          			  case 1:
/*<278>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<279>*/ 					printf(/* textboxtype: 0, unk: 0, line: 95 */ "<0x10009:0x00000001>Ach, Mia ist ja sooo süß!<pause 30>\nHm? Triforce?<pause 40>\nHat das was mit Mia zu tun?")
          				  case 1:
/*<156>*/ 					printf(/* textboxtype: 0, unk: 1, line: 94 */ "<0x10009:0x00000001>Der Direktor hat mich gebeten, mich\num Mia zu kümmern.\n\n\nDie ist vielleicht niedlich!\nIch überlege, mir selbst auch so ein\nHaustier anzuschaffen!")
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
/*< 35>*/ 	printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x1000D:0x1906><0x10008:0x01cd>Hey, <heroname>! Hier!")
/*< 57>*/ 	set_camera(11, 0)
/*<243>*/ 	make_actor_do_something(1, 10)
/*<212>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 10, 'next': 260, 'param3': 17}
/*<260>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<261>*/ 		printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x0a0e0a01>Guten Morgen, <heroname>!\nWie ich sehe, stellst du dich dem <color red<Helden-\nModus>coloroff>! Du bist ja ganz schön mutig!\n\nSchließlich findet heute auch noch die\n<color red<Vogelreiter-Zeremonie >coloroff>statt!\n\n\nIch hoffe, du bist dafür bereit...\nAber zuerst möchte ich noch etwas mit\ndir besprechen!\n\n<color green<Visiere mich an>coloroff>, dann können wir uns\nunterhalten.")
          		flw_64:
/*< 64>*/ 		scene_flags[0 'Skyloft'][36 /* 0x5 10 */] = true;
/*<291>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 253, 'param3': 60}
/*<253>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 293, 'param3': 42}
/*<293>*/ 		scene_flags[0 'Skyloft'][27 /* 0x2 08 */] = true;
          	  case 1:
/*< 56>*/ 		printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0a0e0a01>Guten Morgen, <heroname>!\nHeute ist die <color red<Vogelreiter-Zeremonie>coloroff>,\nwie fühlst du dich?\n\nIch möchte etwas mit dir besprechen.\n\n\n\n<color green<Visiere mich an>coloroff>, dann können wir uns\nunterhalten.")
          		goto flw_64
          	}
          }

          void entrypoint_108_21() {
/*<185>*/ 	start()
/*<191>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 189, 'param3': 32}
/*<189>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 186, 'param3': 13}
/*<186>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10008:0x01cd>Hey, <heroname>!")
/*<187>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x1000A:0x001200cd><0x10009:0x000a0202>Um auf dieses Dach zu gelangen, reicht es nicht,\nwenn du nur <color green<sprintest>coloroff>.")
/*<190>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 192, 'param3': 17}
/*<192>*/ 	wait_frames(15)
/*<188>*/ 	set_camera(19, 0)
/*<229>*/ 	printf(/* textboxtype: 0, unk: 0, line: 23 */ "Du hast bestimmt bereits die Holzkiste\nentdeckt, oder?\nStell dich davor und halte (A) gedrückt,\num sie zu <color green<verschieben>coloroff>.\n<color green<Sprinte>coloroff> auf die Kiste zu oder neige\ndirekt davor (StickUp), um auf sie zu klettern.")
          }

          void entrypoint_108_05() {
/*< 36>*/ 	start()
/*<266>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<267>*/ 		printf(/* textboxtype: 0, unk: 1, line: 46 */ "")
/*<269>*/ 		switch (choice(2)) {
          		  case 0:
/*<270>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "")
          		  case 1:
/*<268>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "")
          		}
          	  case 1:
/*<265>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "")
          	}
          }

          void entrypoint_108_22() {
/*<207>*/ 	start()
/*<209>*/ 	switch (scene_flags[92 /* 0xA 10 */]) {
          	  case 0:
/*<210>*/ 		printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x00000001>Der Beginn der Zeremonie wird verschoben,\nbis du deinen Wolkenvogel gefunden hast.\n\nDu kannst ihn also in Ruhe suchen gehen.")
          	  case 1:
/*<211>*/ 		printf(/* textboxtype: 0, unk: 1, line: 100 */ "<0x10009:0x00000001>Der Beginn der Vogelreiter-Zeremonie wurde\nverschoben, damit du deinen Wolkenvogel\nsuchen kannst. Eine gute Nachricht, was?")
          	}
          }

          void entrypoint_108_06() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x000b0a52>Aber, <heroname>!\nDu kannst deinen Lehrer doch nicht\neinfach ignorieren!\n\n<color red<Visiere mich an>coloroff> und sprich dann mit mir!")
/*<294>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 60}
          }

          void entrypoint_108_23() {
/*<216>*/ 	start()
/*<224>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<225>*/ 		printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x00000001>Und, <heroname>?\nKommst du gut voran?\n\n\nWenn du noch Fragen hast, kannst du\ndich gern an mich wenden!")
          	  case 1:
/*<220>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*<223>*/ 			printf(/* textboxtype: 0, unk: 0, line: 104 */ "<0x10009:0x00000001>Der Tornadostoß ist auch für die Vögel\nsehr anstrengend.\n\n\nAber ich denke, für deinen roten\nWolkenvogel ist das kein Problem.")
          		  case 1:
/*<219>*/ 			switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          			  case 0:
/*<222>*/ 				printf(/* textboxtype: 0, unk: 1, line: 103 */ "<0x10009:0x00000005>Hm? <0x30001:0x><heroname>?\nWas machst du hier so spät?\n\n\nNarisha? Das ist kein Gespräch, das wir\nmitten in der Nacht führen sollten.\n\n\nKomm morgen früh wieder, dann können\nwir reden!")
          			  case 1:
/*<218>*/ 				switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          				  case 0:
/*<221>*/ 					printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x00000001><0x30001:0x><heroname>...\nDu wirst Zelda doch finden, oder?\n\n\nAch, schau nicht so betrübt.\nIch bin mir ganz sicher, dass du es\nschaffen kannst. Ich glaube fest an\ndich!")
          				  case 1:
/*<217>*/ 					printf(/* textboxtype: 0, unk: 0, line: 101 */ "<0x10009:0x00000001>Ihr Schüler dürft nachts keine\nWolkenvögel fliegen.\n\n\nDu kannst also jetzt nicht nach Zelda\nsuchen! Leg dich ins Bett und brich\nmorgen früh ausgeruht auf.\n\nWenn du nicht ab und zu mal Pause\nmachst, wird es dir nicht gelingen,\neinen kühlen Kopf zu bewahren!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_07() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x000a0a00><0x10008:0x02cd><0x30001:0x><heroname>!\n<0x10008:0x02cd>Was machst du denn?!?")
          }

          void entrypoint_108_24() {
/*<231>*/ 	start()
/*<244>*/ 	switch (scene_flags[41 /* 0x4 02 */]) {
          	  case 0:
/*<237>*/ 		printf(/* textboxtype: 0, unk: 0, line: 107 */ "<0x10009:0x00000002><0x30001:0x><heroname>!\nJetzt ist keine Zeit zum Trödeln!\n\n\nGeh und such deinen Wolkenvogel!\nFrag mal die anderen Schüler drinnen,\nvielleicht wissen sie etwas.")
          	  case 1:
/*<238>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<245>*/ 			printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x00000002><0x30001:0x><heroname>, warum läufst du\neinfach an deinem Lehrer vorbei?\n\n\nKomm einen Moment her!")
          		  case 1:
/*<232>*/ 			printf(/* textboxtype: 0, unk: 1, line: 106 */ "<0x10009:0x00000002>Aber, aber, <heroname>!\nIgnorierst du etwa deinen alten Lehrer?\n\n\nKomm her und hör mir ein wenig zu!")
          		}
          	}
          }

          void entrypoint_108_08() {
/*< 75>*/ 	start()
/*< 87>*/ 	switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          	  case 0:
/*<208>*/ 		printf(/* textboxtype: 0, unk: 1, line: 76 */ "")
          	  case 1:
/*< 82>*/ 		switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          		  case 0:
/*< 84>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 76, 'param3': 31}
/*< 76>*/ 			printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10009:0x00000001>Na, <heroname>?\nWas macht deine Suche nach Zelda?\nHast du sie gefunden?\n\n<0x10009:0x00000005>Wer?<pause 40> Narisha?\nDu hast wohl mit dem Direktor geredet...\n\n\nNarisha befindet sich in der Sturmwolke.\n\n\n\nAber<0x10006:0xfecd>...\n<0x10006:0x00cd><pause 25>Es ist nicht der Narisha, den wir kannten...\n\n\n<0x10006:0xfecd>Er ist ein... <pause 40><0x10006:0x01cd><color red<Monster>coloroff>!\n\n\n\n<0x10009:0x0000000f>Er mag wie Narisha aussehen, aber als ich\nmich ihm das letzte Mal näherte, hat er\nmich angegriffen!\n\nNarishas Blick war so voller Hass...\n\n\n\nEr hat sich verändert...\n<0x10006:0xfecd>Irgendwas...<0x10006:0x00cd><pause 25> Irgendwas ist geschehen...\n<pause 25>Das kann ich spüren.")
/*<202>*/ 			wait_frames(40)
/*< 77>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00000005>Wie?<pause 40> Du möchtest mit Narisha reden?\n\n\n\n<0x10006:0xfecd>Das...<0x10006:0x00cd> Das ist unmöglich.\nNarisha ist im Moment für unsere\nWorte unerreichbar.\n\n<0x10006:0xfecd>Und selbst wenn...<0x10006:0x00cd>\nSelbst wenn du nah genug an ihn\nherankommen würdest, er würde dich\nangreifen, und das wäre dein Ende!")
/*<203>*/ 			wait_frames(40)
/*<200>*/ 			printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x00000052>Was?<pause 40> Du willst trotzdem gehen?\n\n\n\n<0x10006:0xfecd>Nun...\n<0x10006:0x00cd>Du willst es tun, um Zelda zu finden, oder?\n\n\nGut.<pause 30>\nIch habe das Gefühl, du lässt dich davon\nnicht abbringen!")
/*<204>*/ 			wait_frames(30)
/*<201>*/ 			printf(/* textboxtype: 1, unk: 0, line: 54 */ "Ich habe eine Idee!\nKomm mit!")
/*< 85>*/ 			story_flags[362 /* us: 805A9B03 0x01, jp: 805ACD83 0x01 */] = true;
/*< 86>*/ 			changeScene(0, 0) // 
          		  case 1:
/*<275>*/ 			switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          			  case 0:
/*<276>*/ 				printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x00000001>Hallo, <heroname>!\n<pause 30>Was sagst du? Das Triforce?\n\n\nEs tut mir leid, aber dazu kann ich dir nichts\nsagen. Frag doch am besten den Direktor, ja?")
          			  case 1:
/*< 83>*/ 				printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x00000001>Hallo, <heroname>!\nWie geht die Suche nach Zelda voran?\n\n\nTut mir leid, dass du sie allein suchen musst!\nBitte finde sie!")
          			}
          		}
          	}
          }

          void entrypoint_108_09() {
/*< 78>*/ 	start()
/*< 79>*/ 	printf(/* textboxtype: 0, unk: 0, line: 56 */ "<0x10009:0x00000002>Irgendetwas stimmt mit Narisha in der\nSturmwolke nicht.\n\n\nWenn du die Ursache für sein\nVerhalten beseitigst, kommt der alte\nNarisha vielleicht wieder zurück.\n\nAlso, <heroname>!\nIch bringe dir jetzt eine ganz spezielle\nVogelreiter-Technik bei!\n\n<0x10009:0x00000003>Den <color red<Tornadostoß>coloroff>!")
/*<258>*/ 	set_camera(22, 0)
/*<256>*/ 	printf(/* textboxtype: 1, unk: 2, line: 57 */ "Der Tornadostoß ist ein starker Angriff,\nmit seiner Hilfe kannst du Narisha sicher\nvon dem Übel, das ihn befallen hat, befreien!\n\nDie Ausführung ist im Prinzip nicht schwierig.\nDu musst nur <icon 30> drücken, das ist alles!<0x10011:0x10cd>\n\n\nAllerdings wird dein Wolkenvogel extrem\nschnell und dieser Zustand hält länger an als\nnach der normalen <color red<Attacke>coloroff>.\n\nDie Kunst ist, den Vogel im Flug stabil zu\nhalten, deshalb lernen nur die erfahrensten\nSchüler der Oberstufe diese besondere Technik.\n\nFür dich ist es eigentlich noch zu früh...<pause 30> Aber\nwir wollen sehen, vielleicht bist du ja schon\nbereit dafür.")
/*<259>*/ 	set_camera(-1, 0)
/*<257>*/ 	printf(/* textboxtype: 0, unk: 1, line: 58 */ "<0x10009:0x00000004>Sprinte los und spring von hier ab, dann rufe\ndeinen Wolkenvogel.")
/*< 93>*/ 	story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = true;
/*< 98>*/ 	story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
/*<248>*/ 	zone_temp_flags[13 /* 0x0 20 */] = true;
          }

          void entrypoint_108_10() {
/*< 90>*/ 	start()
/*<128>*/ 	switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          	  case 0:
/*<129>*/ 		printf(/* textboxtype: 0, unk: 1, line: 61 */ "<0x10009:0x0000000f>Was Zelda passiert ist, ist furchtbar...\n\n\n\nAber du darfst dich deswegen nicht mit\nVorwürfen quälen...\nEs war ein Unfall.")
          	  case 1:
/*<127>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<196>*/ 			switch (scene_flags[91 /* 0xA 08 */]) {
          			  case 0:
/*<198>*/ 				printf(/* textboxtype: 2, unk: 0, line: 62 */ "<0x10009:0x00000001>Lass die Zeremonie die Sorge von uns Lehrern\nsein und sieh zu, dass du deinen Vogel findest!")
          			  case 1:
/*<126>*/ 				printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x0000000f>Was ist, <heroname>?\n<pause 30>Dein Vogel ist nicht gekommen, als du ihn\ngerufen hast?\n\nEs kann eigentlich nicht sein, dass dein\nWolkenvogel nicht deinem Ruf gefolgt ist<0x10006:0xfecd>...\n\n\nHast du schon mit Meister <color blue<Tytor >coloroff>gesprochen?\nSchließlich ist er der Zeremonienmeister.\n\n\nAha...\nDer Direktor wird schon einen Weg finden,\ndich an der Zeremonie teilnehmen zu lassen.\n\nAber du solltest deinen Vogel so schnell wie\nmöglich finden!")
/*<199>*/ 				scene_flags[0 'Skyloft'][91 /* 0xA 08 */] = true;
          			}
          		  case 1:
/*<194>*/ 			switch (scene_flags[90 /* 0xA 04 */]) {
          			  case 0:
/*<195>*/ 				printf(/* textboxtype: 1, unk: 2, line: 63 */ "<0x10009:0x00000001>Du hast Meister <color blue<Tytor >coloroff>und mich schon immer\ngern verwechselt...\n\n\nIch, <color blue<Otus>coloroff> mit den weißen Haaren, gebe den\npraktischen Unterricht.<color blue<\n\n>coloroff>\nMeister <color blue<Tytor>coloroff> hat dunkle Haare und\nunterrichtet die Theorie. Merk dir das bitte.")
          			  case 1:
/*< 91>*/ 				printf(/* textboxtype: 0, unk: 0, line: 59 */ "<0x10009:0x00000001>So, <heroname>!\nDer große Tag der <color red<Vogelreiter-Zeremonie>coloroff> ist\nalso endlich gekommen!\n\nErinnere dich an meine praktischen Lektionen\nund den Unterricht von Meister <color blue<Tytor>coloroff> und gib\ndein Bestes!\n\nWo wir gerade davon sprechen...\nWeißt du noch, dass du dich durch Drücken\nvon (^) <color red<umsehen>coloroff> kannst?<0x10011:0x08cd>\n\n<color green<Drücke>coloroff> einfach <icon 34>, wenn du dir etwas genauer\nansehen möchtest!<0x10011:0x08cd>")
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
/*<274>*/ 			printf(/* textboxtype: 0, unk: 1, line: 70 */ "<0x10009:0x00000001>Das Erdland existiert also wirklich?\n\n\n\nEs mag nur eine Hypothese sein, aber\nvermutlich ist das Erdland kein solch\nfriedlicher Ort wie unser Wolkenhort.\nHmmm...")
          		  case 1:
/*<271>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<273>*/ 				printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x00000001>Wie kommst du bei der Suche nach\nZelda voran?\n\n\nWenn du erschöpft bist, ruh dich doch\nin deinem Bett aus. So kannst du den\nWolkenhort bei Nacht erleben, und\ndeine Herzen werden auch aufgefüllt!")
          			  case 1:
/*<166>*/ 				printf(/* textboxtype: 0, unk: 0, line: 68 */ "<0x10009:0x00000001>Sei stets vorsichtig! Ich hoffe, dass du Zelda\nfinden kannst.")
          			}
          		}
          	  case 1:
/*<167>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 123, 'param3': 31}
/*<123>*/ 		printf(/* textboxtype: 0, unk: 1, line: 64 */ "<0x10009:0x00000011><0x30001:0x><heroname>!\nIch habe gehört, dass du Zelda unter den\nWolken suchen willst.\n\nDer Direktor sprach davon, dass unter den\nWolken das Erdland liegt... Weißt du etwas\nüber dieses Erdland?")
/*<168>*/ 		switch (adventure_pouch_has(9 0x0009)) {
          		  case 0:
/*<170>*/ 			printf(/* textboxtype: 0, unk: 0, line: 71 */ "Ein interessantes Schwert...\nAber einen Schild brauchst du auch<pause 10>.<pause 10>.<pause 10>.<pause 10>\nOh, du hast schon einen!\nVorbildlich, vorbildlich!\nHier, ein Abschiedsgeschenk von mir.")
          			flw_171:
/*<171>*/ 			give_item(4 0x04);
/*<255>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 172, 'param3': 12}
          			flw_172:
/*<172>*/ 			printf(/* textboxtype: 1, unk: 0, line: 72 */ "Wenn du nicht weißt, wie du mit einem\nSchild umgehst, frag am besten den\n<color blue<Schwertmeister >coloroff>in der Übungshalle.\nEr kann es dir sicher beibringen.")
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
/*<247>*/ 				printf(/* textboxtype: 1, unk: 2, line: 66 */ "Das ist übrigens ein interessantes Schwert...\nAber einen Schild brauchst du auch.\n\n\nDu kannst allerdings keine weitere Ausrüstung\nmehr tragen. Na, dann nimm das\nals Abschiedsgeschenk.")
          				goto flw_171
          			  case 1:
/*<169>*/ 				printf(/* textboxtype: 2, unk: 0, line: 65 */ "Das ist übrigens ein interessantes Schwert...\nAber einen Schild brauchst du auch.\nNimm den hier!")
/*<163>*/ 				give_item(116 0x74);
/*<164>*/ 				printf(/* textboxtype: 0, unk: 1, line: 67 */ "Ein Holzschild ist leicht und einfach zu\nhandhaben, hält aber nicht viel aus.\nAußerdem kann er Feuer fangen.\n\nWenn dein Schild zerstört wird, kannst\ndu dir im Basar einen neuen kaufen.\n\n\nDu kannst den Schild ausrüsten, indem du\n<icon 40> <color green<gedrückt hältst>coloroff>, den gewünschten\nSchild auswählst und <icon 40> wieder loslässt.<0x10011:0x0ecd>")
          				goto flw_172
          			}
          		}
          	}
          }

          void entrypoint_108_12() {
/*< 94>*/ 	start()
/*<205>*/ 	switch (scene_flags[77 /* 0x8 20 */]) {
          	  case 0:
/*<206>*/ 		printf(/* textboxtype: 0, unk: 1, line: 76 */ "")
          	  case 1:
/*< 96>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*< 80>*/ 			printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x0000000a>Sehr gut, du hast innerhalb des Zeitlimits\n10 Ziele zerstört!\n\n\nDu beherrschst deinen roten Wolkenvogel\nwirklich meisterlich, <heroname>!\nWirklich sehr gut!\n\nDu hast dir das Recht verdient, den\nTornadostoß einzusetzen.")
/*< 81>*/ 			printf(/* textboxtype: 0, unk: 0, line: 74 */ "Jetzt musst du Narisha nur noch finden...\n\n\n\nDer <color red<Besitzer der Kürbisbar >coloroff>bringt Narisha jedes\nJahr Kürbissuppe, er müsste dir helfen können.\n\n\nJa, am besten fragst du ihn um Rat...")
/*<106>*/ 			scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = true;
          		  case 1:
/*< 95>*/ 			switch (story_flags[641 /* us: 805A9B1D 0x04, jp: 805ACD9D 0x04 */]) {
          			  case 0:
/*< 97>*/ 				printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x0000000f>Hm, wenn es dir nicht gelingt, 10 Ziele in\n<color red<120 Sekunden >coloroff>zu zerstören, kann ich dir\ndiese Technik leider nicht erlauben.\n\nRuh dich ein wenig aus, ich bin hier noch\neine Weile. Wenn du bereit für einen\nneuen Versuch bist, sag es mir.")
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
/*<103>*/ 		printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00000001>Die Kürbisbar befindet sich <color red<südöstlich >coloroff>vom\nWolkenhort. Dort lebt <color blue<Kabocha>coloroff> mit ihrer\nlieblichen Stimme...\n\n<pause 30>Ich bin<0x10006:0xfecd>...<0x10006:0x00cd> ein großer Fan von ihr. Aber das\ndarf niemand wissen!")
          	  case 1:
/*<105>*/ 		switch (scene_flags[77 /* 0x8 20 */]) {
          		  case 0:
          			flw_107:
/*<107>*/ 			printf(/* textboxtype: 0, unk: 1, line: 79 */ "<0x10009:0x00000001>Na, <heroname>!\nWillst du dich an der Prüfung für den\nTornadostoß versuchen?\n[1-]Klar![2]Später...")
/*<108>*/ 			switch (choice(2)) {
          			  case 0:
/*<109>*/ 				printf(/* textboxtype: 0, unk: 0, line: 80 */ "<0x10009:0x00000003>Das wollte ich hören!\nNa, dann spring!")
/*<111>*/ 				scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = false;
/*<112>*/ 				story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = true;
/*<113>*/ 				story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
/*<250>*/ 				zone_temp_flags[13 /* 0x0 20 */] = true;
          			  case 1:
/*<110>*/ 				printf(/* textboxtype: 1, unk: 0, line: 81 */ "Schon in Ordnung, ich warte, bis du dich\nbereit fühlst.\n\n\nIch bleibe hier noch eine Weile, komm\njederzeit vorbei!")
/*<252>*/ 				zone_temp_flags[13 /* 0x0 20 */] = false;
          			}
          		  case 1:
/*<121>*/ 			switch (story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */]) {
          			  case 0:
/*<101>*/ 				printf(/* textboxtype: 0, unk: 0, line: 77 */ "<0x10009:0x00000001>Na, dann spring hier ab!\nOder willst du lieber doch nicht?\n[1-]Doch![2]Lieber nicht...")
/*<116>*/ 				switch (choice(2)) {
          				  case 0:
/*<120>*/ 					printf(/* textboxtype: 0, unk: 1, line: 82 */ "<0x10009:0x00000003>Sehr gut, das wollte ich hören! Stürz dich\nins Wolkenmeer, <heroname>!")
/*<249>*/ 					zone_temp_flags[13 /* 0x0 20 */] = true;
          				  case 1:
/*<117>*/ 					story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = false;
/*<118>*/ 					story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = false;
/*<119>*/ 					printf(/* textboxtype: 1, unk: 0, line: 81 */ "Schon in Ordnung, ich warte, bis du dich\nbereit fühlst.\n\n\nIch bleibe hier noch eine Weile, komm\njederzeit vorbei!")
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
/*<142>*/ 	printf(/* textboxtype: 0, unk: 1, line: 109 */ "Also gut, <heroname>!\n\n\n\nWenn du auf deinem Wolkenvogel <icon 30> drückst,\n<color green<dreht>coloroff> er sich und greift an.")
          }

          void entrypoint_108_14() {
/*<114>*/ 	start()
/*<115>*/ 	printf(/* textboxtype: 0, unk: 0, line: 83 */ "")
          }

          void entrypoint_108_31() {
/*<143>*/ 	start()
/*<146>*/ 	printf(/* textboxtype: 0, unk: 0, line: 110 */ "Du musst <color red<10 Ziele>coloroff> mit einem\n<color red<Tornadostoß>coloroff> zerstören!")
          }

          void entrypoint_108_15() {
/*<124>*/ 	start()
/*<125>*/ 	printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000002>Hey! <0x30001:0x><heroname>!\nDie Vogelreiter-Zeremonie hat schon\nangefangen! Schwing dich schnell auf\ndeinen Vogel!")
          }

          void entrypoint_108_32() {
/*<144>*/ 	start()
/*<147>*/ 	printf(/* textboxtype: 1, unk: 0, line: 111 */ "Wenn du es schaffst, 10 Ziele in\n<color red<120 Sekunden>coloroff> zu zerstören, dann\nbist du ein wahrer Vogelreiter!")
          }

          void entrypoint_108_16() {
/*<130>*/ 	start()
/*<283>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<285>*/ 		switch (zone_temp_flags[15 /* 0x0 80 */]) {
          		  case 0:
/*<287>*/ 			printf(/* textboxtype: 0, unk: 1, line: 88 */ "<0x10009:0x00000016>Ich frage mich allerdings, was hier passiert ist.\nDie Monster sind plötzlich weg, die Lemurin\nverhalten sich nachts ruhig... Hmmm...")
          		  case 1:
/*<284>*/ 			printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x0000000d>Sieh mal her, <heroname>!\nDie kleine Mia ist selbst bei Nacht\nruhig und anständig!\n\nWas für eine freudige Überraschung!\nDu freust dich bestimmt auch, oder?")
/*<286>*/ 			zone_temp_flags[15 /* 0x0 80 */] = true;
          		}
          	  case 1:
/*<157>*/ 		switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          		  case 0:
/*<158>*/ 			printf(/* textboxtype: 0, unk: 0, line: 86 */ "<0x10009:0x00000016>Nachts ist Mia völlig verändert...\n\n\n\nEinmal war sie aus Versehen nachts in\nder Schule eingesperrt... Das war\nvielleicht ein Aufruhr!\n\nWenn du also schon nachts raus gehst,\nsei bitte vorsichtig!")
          		  case 1:
/*<131>*/ 			printf(/* textboxtype: 0, unk: 1, line: 85 */ "<0x10009:0x00000004>Nachts ist es gefährlich, sich draußen\naufzuhalten! Lass das lieber bleiben!\n\n\nSelbst Mia, das Haustier des Direktors,\nmacht nachts eine gar schreckliche\nVeränderung durch.\n\nJa, nachts ist hier im Wolkenhort eine\nbösartige Macht am Werk.")
          		}
          	}
          }

          void entrypoint_108_33() {
/*<145>*/ 	start()
/*<148>*/ 	printf(/* textboxtype: 0, unk: 1, line: 112 */ "Also, fangen wir an!")
          }

          void entrypoint_108_17() {
/*<132>*/ 	start()
/*<133>*/ 	printf(/* textboxtype: 0, unk: 0, line: 89 */ "<0x10009:0x00000002>Was wird das, <heroname>?\nWo willst du hin?\n\n\nSpring schnell ab und ruf deinen\nWolkenvogel!")
          }

          void entrypoint_108_18() {
/*<134>*/ 	start()
/*<135>*/ 	printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x00000002><0x30001:0x><heroname>!\nMöchtest du eine Lektion?\n[1-]Gern![2]Eher nicht...")
/*<136>*/ 	switch (choice(2)) {
          	  case 0:
/*<138>*/ 		printf(/* textboxtype: 0, unk: 0, line: 92 */ "Ja, das nenne ich Einsatz!\n\n\n\nSprechen wir über die Geschichte des\nWolkenhorts!\n\n\nDer Wolkenhort entstand vor Tausenden\nvon Jahren.\n\n\nUnsere Vorfahren stammen von dieser\nund den umliegenden Inseln\ndes Wolkenmeers.\n\n<0x10009:0x00090a00>Unter dem Wolkenhort befindet sich eine\ndichte Wolkendecke. Niemand, der sich\nunter diese Wolkendecke gewagt hat,\nist je zurückgekehrt.\nEs heißt, dass sich unter der Wolkendecke\nnichts befindet!\n\n\n<0x10009:0x000a0a00>So, hier machen wir für heute Schluss!\nDie Vogelreiter-Zeremonie wartet!")
          	  case 1:
/*<137>*/ 		printf(/* textboxtype: 0, unk: 1, line: 91 */ "Oh, ach so... Heute ist ja die Vogelreiter-\nZeremonie, also fällt der Unterricht aus.\n\n\nSolltest du nicht schnell nach draußen\nund dich auf die Zeremonie vorbereiten?")
          	}
          }

          void entrypoint_108_01() {
          	start()
/*<  9>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 71>*/ 		switch (scene_flags[41 /* 0x4 02 */]) {
          		  case 0:
/*< 63>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "Ich sehe mal, was ich wegen der Zeremonie tun\nkann. Mach du dich schnell auf die Suche nach\ndeinem Wolkenvogel.")
          		  case 1:
/*< 62>*/ 			printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00000001>Was ist los, <heroname>?\nDu siehst nicht gut aus.\n\n\nWas?<pause 50>\nDein Wolkenvogel ist verschwunden?\n\n\nDas ist schlimm.\nAber<0x10006:0xfccd>...<0x10006:0x00cd> Du weißt ungefähr, wo er ist, oder?\n\n\nDu willst ihn jetzt suchen gehen?<pause 40>\nAber die Zeremonie beginnt doch gleich!\n\n\nAndererseits, ohne Vogel wärst du bei\nder Zeremonie sozusagen <color red<vogelfrei>coloroff><0x10006:0xfccd>...<pause 30>\n\n\n<0x10009:0x00000005><0x10006:0x02cd>Verzeihung...<pause 30>")
/*<159>*/ 			switch (scene_flags[30 /* 0x2 40 */]) {
          			  case 0:
/*<160>*/ 				printf(/* textboxtype: 0, unk: 1, line: 19 */ "Der Direktor ruft also nach mir?\n\n\n\nNun gut! Ich bin dir ja schließlich noch\neinen Gefallen schuldig.\n\n\nMach dir keine Sorgen um die Zeremonie\nund finde erst einmal deinen Wolkenvogel.")
          				flw_72:
/*< 72>*/ 				scene_flags[0 'Skyloft'][41 /* 0x4 02 */] = true;
          			  case 1:
/*<161>*/ 				printf(/* textboxtype: 0, unk: 0, line: 20 */ "Vielleicht ist das die Strafe dafür,\ndass du meine Bitte ignoriert hast...\n\n\nWie dem auch sei...\nDer Direktor ruft nach mir?\n\n\nAha, ich verstehe. Nun gut, mach dir\nkeine Sorgen um die Zeremonie und\nfinde erst einmal deinen Wolkenvogel.")
/*<239>*/ 				story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = false;
          				goto flw_72
          			}
          		}
          	  case 1:
/*< 48>*/ 		switch (scene_flags[28 /* 0x2 10 */]) {
          		  case 0:
/*< 51>*/ 			switch (scene_flags[30 /* 0x2 40 */]) {
          			  case 0:
/*< 10>*/ 				printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x000a0404>Gut, dass du Mia gefunden hast...\n\n\n\nSie ist nämlich ein <color blue<Lemurin>coloroff>, weißt du? <0x10009:0x00000a00>Die\nsind zwar süß, aber nachts willst du keinem\nbegegnen, das kannst du mir glauben!\n[1-]Warum?[2-]Nachts?")
/*< 11>*/ 				switch (choice(2)) {
          				  case 0:
/*< 12>*/ 					printf(/* textboxtype: 1, unk: 0, line: 9 */ "Ja, also... Du weißt nicht, was mit den\nLemurin nachts geschieht?\n\n\nIch muss dich warnen, das ist kein\nangenehmes Gesprächsthema.")
          					flw_13:
/*< 13>*/ 					printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00000016>Wenn es im Wolkenhort Nacht wird, ergreift\neine böse Macht Besitz von den Lemurin.\n\n\nAußerdem kommen nachts Monster aus ihren\nVerstecken, die sich dort tagsüber verbergen.\n\n\nDaher gehen die Bewohner des Wolkenhorts\nnachts nur selten nach draußen.\n\n\nAber für jemanden wie dich, der Ritter werden\nmöchte, ist das eine gute Übungsgelegenheit!\n\n\nAber trotzdem solltest du stets auf der Hut\nsein! Unaufmerksamkeit ist der größte Feind!")
          				  case 1:
          					goto flw_13
          				}
          			  case 1:
/*< 92>*/ 				set_camera(17, 0)
/*< 49>*/ 				printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x000f040d>Du hast sie heil zurückgebracht!\n<pause 35><0x10009:0x00090400>Vielen Dank, <heroname>!\n\n\nIch werde Mia nun füttern.")
/*<154>*/ 				set_camera(20, 0)
/*< 52>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "Sag dem Direktor Bescheid, dass wir sein\nHaustier gefunden haben. Er müsste sich\nauf dem <color red<Platz vor dem Tempel >coloroff>befinden.")
/*<240>*/ 				set_camera(21, 0)
/*<241>*/ 				printf(/* textboxtype: 0, unk: 1, line: 16 */ "Zelda ist sicher auch dort, also beeil dich!\n\n\n\nOh, und ich sollte dir wohl etwas geben...\nEs ist keine große Sache, aber hier, bitte.\nUnd, äh, sag den anderen nichts davon.")
/*<242>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 50, 'param3': 42}
/*< 50>*/ 				scene_flags[0 'Skyloft'][30 /* 0x2 40 */] = true;
/*<292>*/ 				give_item(4 0x04);
          			}
          		  case 1:
/*< 46>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*< 47>*/ 				printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00000006>Was ist los, <heroname>?")
/*< 61>*/ 				set_camera(14, 0)
/*< 60>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "Wenn du die Wand hochläufst, kannst du\ndich von der Kante <color green<hinunterhängen lassen>coloroff>.\n\n\nAber sei vorsichtig, denn während du dich\nan der Kante festhältst, nimmt deine\n<color red<Ausdaueranzeige>coloroff> ab.")
          			  case 1:
/*<  6>*/ 				switch (temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<  7>*/ 					printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00090400>Oh, bringst du mir die kleine Mia?\n[1-]Ja[2-]Nein")
/*<  8>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_2:
/*<  2>*/ 						printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x0009040d>Danke, dass du dir die Zeit nimmst,\nmir zu helfen.")
/*< 43>*/ 						{'type': 'type3', 'subType': 4, 'param1': 3328, 'param2': 0, 'next': 44, 'param3': 22}
/*< 44>*/ 						printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00090400>Du müsstest hier irgendwo etwas zum\nHochklettern finden. Wenn du dich an\ndem Vorsprung entlanghangelst, dann\nsolltest du aufs Dach kommen.\n<0x10007:0xff000000>Danke nochmals!")
/*< 45>*/ 						temp_flags[2 /* 0x1 04 */] = true;
/*<234>*/ 						story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = true;
          					  case 1:
/*<228>*/ 						printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00000a00>Schade...\n\n\n\nBitte sag dem Direktor, dass ich die kleine Mia\ngefunden habe, damit er sich keine Sorgen\nmehr macht.")
          					}
          				  case 1:
/*< 68>*/ 					switch (scene_flags[38 /* 0x5 40 */]) {
          					  case 0:
/*<230>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 1, 'param3': 31}
/*<  1>*/ 						printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Hallo, <heroname>!\nBist du auf dem Weg zum Üben für die\nVogelreiter-Zeremonie?\n\nAch?<pause 30> Du bist verabredet?\n<pause 30><color blue<Zelda>coloroff> wartet schon?")
/*< 42>*/ 						printf(/* textboxtype: 0, unk: 1, line: 1 */ "Wo du gerade hier bist...\n\n\n\n<color red<Mia>coloroff>, das Haustier von Zeldas Vater <color blue<Gepora>coloroff>,\nunserem Direktor, ist weggelaufen.")
/*<236>*/ 						set_camera(12, 0)
/*<235>*/ 						printf(/* textboxtype: 0, unk: 0, line: 2 */ "Ach!<0x1000A:0x001000cd> Was soll ich nur tun?\n\n\n\n<0x1000A:0xffff00cd>Der Direktor und Zelda haben alle Hände voll\nzu tun mit der Vorbereitung der Zeremonie.\n\n\nIch wollte Mia mit Futter anlocken, aber die\nZeremonie beginnt bald... Und in dieser\nKleidung kann ich ihr nicht hinterherklettern.\n\n<0x10007:0xff000000>Wärst du so gut, Mia zu mir zu bringen?\n[1-]Gern![2-]Hab zu tun.")
/*<  4>*/ 						switch (choice(2)) {
          						  case 0:
/*< 54>*/ 							set_camera(-1, 0)
          							goto flw_2
          						  case 1:
/*< 55>*/ 							set_camera(-1, 0)
/*<  3>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00000a00>Schade...\n\n\n\nBitte sag dem Direktor, dass ich die kleine Mia\ngefunden habe, damit er sich keine Sorgen\nmehr macht.")
/*<  5>*/ 							temp_flags[1 /* 0x1 02 */] = true;
/*<233>*/ 							story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = true;
          						}
          					  case 1:
/*< 65>*/ 						switch (scene_flags[37 /* 0x5 20 */]) {
          						  case 0:
/*< 89>*/ 							set_camera(9, 0)
/*< 67>*/ 							printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x000b0a06>Was wird das denn?\nBeeil dich und tu das, was dein Lehrer dir sagt!")
          						  case 1:
/*<153>*/ 							story_flags[565 /* us: 805A9B19 0x10, jp: 805ACD99 0x10 */] = false;
/*<173>*/ 							{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': 100, 'next': 88, 'param3': 17}
/*< 88>*/ 							set_camera(9, 0)
/*<263>*/ 							switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          							  case 0:
/*<264>*/ 								printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x000b0a0d>Genau. Du kannst du jemanden <color green<anvisieren\n>coloroff>und dann ganz leicht mit ihnen sprechen.\n\n\n<0x10009:0x00000c04>Du schaust mich an, als wüsstest du das\nalles schon... Dabei kann es nie schaden,\ndie Grundlagen noch mal aufzufrischen!\n\n<0x10009:0x00000a00>Im <color red<Helden-Modus>coloroff>...<pause 30><sound 4> In diesem Modus <color red<verlierst\ndu bei Schaden doppelt so viele Herzen>coloroff>.\nDaher ist das <color green<Anvisieren >coloroff>absolut wichtig.\n\nAber auf diese Entfernung lässt es sich nicht\ngut reden, also komm doch hier hoch, ja?")
          								flw_58:
/*< 58>*/ 								set_camera(10, 0)
/*< 41>*/ 								printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x000b0a00>Wenn du auf diese Holzkisten dort <color green<zusprintest>coloroff>,\nkannst du auf sie klettern.\n\n\nDen Sprung solltest du ganz einfach schaffen!\n\n\n\nVersuch's mal!")
/*< 66>*/ 								scene_flags[0 'Skyloft'][37 /* 0x5 20 */] = true;
/*<290>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': -1, 'param3': 60}
          							  case 1:
/*<262>*/ 								printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10009:0x000b0a0d>Genau. Du kannst jemanden <color green<anvisieren>coloroff> und\ndann ganz leicht mit ihnen sprechen.\n\n\nWenn es niemanden zum <color green<Anvisieren >coloroff>gibt,\nkannst du diese tolle Technik aber auch\neinsetzen, um einfach wieder nach vorn\nzu blicken.\nAber auf diese Entfernung lässt es sich nicht\ngut reden, also komm doch hier hoch, ja?")
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
/*<140>*/ 	printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x00000004>Dieser Platz ist nur für Lehrer!\nSetz dich schön brav auf einen der\nPlätze für Schüler!")
          }

          void entrypoint_108_02() {
/*< 14>*/ 	start()
/*< 38>*/ 	switch (story_flags[31 /* us: 805A9ADA 0x80, jp: 805ACD5A 0x80 */]) {
          	  case 0:
/*< 21>*/ 		printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00000002>Was machst du denn?\nHalte (B) gedrückt, um zu <color green<sprinten>coloroff>,\n<color red<springe vom Steg ab>coloroff> und schwinge\ndich auf deinen Wolkenvogel!\nUnd vergiss nicht, dass du ihn durch\nDrücken von (v) rufen musst!<0x10011:0x09cd>")
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
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000002>Sehr gut. Beginnen wir also mit der\n<color red<Vogelreiter-Zeremonie>coloroff>!\n\n\nEs sah erst so aus, als würde\n<heroname> nicht teilnehmen\nkönnen... Aber jetzt sind ja alle hier!\n\nIch erkläre nun die <color red<Regeln>coloroff>!")
          		flw_16:
/*< 16>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "Ich lasse nun einen Wolkenvogel fliegen,\nder eine Vogelfigur trägt...\n\n\nAuf mein Signal <color green<sprintet>coloroff> ihr los und\n<color red<springt vom Steg ab>coloroff>.\n\n\nVergesst mir nach dem Abspringen vor\nlauter Aufregung bloß nicht, (v) zu\ndrücken, um <color green<eure Vögel zu rufen>coloroff>!<0x10011:0x09cd>\n\nSieger ist, wer als Erster die <color red<Vogelfigur\n>coloroff>in seinen Besitz bringt!\n\n\n<0x1000A:0x000200cd>Nicht so schwer, oder?\nHabt ihr die Regeln verstanden?\n[1-]Ja![2?]Noch mal!")
/*< 18>*/ 		switch (choice(2)) {
          		  case 0:
/*< 30>*/ 			set_camera(3, 0)
/*< 17>*/ 			printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00000003><0x10008:0x01cd>Gut!\n\n\n\nDer Sieger rückt in die Oberstufe der\nRitterschule vor.<pause 20> Außerdem wird ihm\neine <color red<große Auszeichnung>coloroff> verliehen.\n\nDiese Auszeichnung wurde von der\njungen Dame, die als <color red<Vertreterin der\nGöttin>coloroff> auserwählt wurde, persönlich\nangefertigt.\nUnd zum 25-jährigen Jubiläum\nunserer Schule wird die Übergabe\ndieser Auszeichnung <color red<auf der Statue\nder Göttin >coloroff>stattfinden.\nDie <color red<Vertreterin der Göttin>coloroff>, die ihren\n<color red<selbst angefertigten >coloroff>Preis dieses Jahr\npersönlich überreichen wird, ist, wie\nihr wisst...<pause 20>")
/*<184>*/ 			{'type': 'type3', 'subType': 4, 'param1': 267, 'param2': 3840, 'next': 177, 'param3': 13}
/*<177>*/ 			set_camera(5, 0)
/*<174>*/ 			printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x01000009><0x10008:0x01cd>Zelda!")
/*<193>*/ 			{'type': 'type3', 'subType': 4, 'param1': 1048, 'param2': 3084, 'next': 31, 'param3': 13}
/*< 31>*/ 			set_camera(2, 0)
/*< 20>*/ 			printf(/* textboxtype: 0, unk: 1, line: 31 */ "Zeigt, was ihr bei euren täglichen\nÜbungen gelernt habt!\n\n\nUnd ich will nicht sehen, dass jemand\nmit Gegenständen wirft oder andere\nTeilnehmer angreift!")
/*<178>*/ 			set_camera(6, 0)
/*<181>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 4, 'next': 182, 'param3': 50}
/*<182>*/ 			{'type': 'type3', 'subType': 4, 'param1': 512, 'param2': 23, 'next': 175, 'param3': 13}
/*<175>*/ 			printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10008:0x01cd>Das gilt besonders für dich, <0x10009:0x04191700>Bado!")
/*< 40>*/ 			set_camera(4, 0)
/*<183>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 53, 'param3': 50}
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

