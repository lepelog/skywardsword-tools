          void entrypoint_100_11() {
/*< 17>*/ 	start()
/*<164>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<168>*/ 		switch (temp_flags[16 /* 0x3 01 */]) {
          		  case 0:
/*<167>*/ 			printf("\x0E\x01\x09\x04\x00\x04Nachts kann man jedenfalls nicht\nfliegen!\n\n\nDu wirst dich ins Bett legen und bis\nmorgen schlafen müssen.")
          		  case 1:
/*<169>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 165, 'param3': 31}
/*<165>*/ 			printf("\x0E\x01\x09\x04\x00\x01Was machst du denn hier mitten in\nder Nacht?!?\n\n\n\x0E\x01\x09\x04\x0C\xC09Was? Du wolltest auf deinem\nWolkenvogel reiten?!?\n\n\n\x0E\x01\x09\x04\x09\xC00Wolkenvögel können nachts nicht fliegen,\nweil sie im Dunkeln nicht gut sehen.\n\n\nEinzig speziell auf den Nachtflug trainierte\nWolkenvögel sind dazu in der Lage, sich nachts\nim Wolkenmeer zurechtzufinden.\n\n\x0E\x01\x09\x04\x08\x400Wenn du fliegen willst, musst du wohl oder übel\nbis Tagesanbruch warten!\n\n\nLeg dich einfach schlafen und im Nu geht\ndie Sonne auf! Bist du etwa nicht müde?")
/*<166>*/ 			temp_flags[16 /* 0x3 01 */] = true;
          		}
          	  case 1:
/*< 19>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*< 38>*/ 			switch (scene_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*< 39>*/ 				printf("\x0E\x01\x09\x04\x0B\xC00Also, in der Schule ist dein Vogel auf keinen\nFall, du musst schon draußen suchen.\n\n\nIch muss ein paar Nachforschungen anstellen,\nich gebe dir Bescheid, wenn ich etwas\nherausfinde!")
          			  case 1:
/*< 20>*/ 				printf("\x0E\x01\x09\x04\x00\xC06Hey hey, was machst du denn noch hier?\n\n\n\x0E\x01\x09\x04\x0C\xC09Ist das dein Ernst?!?<pause14>\nDu hast deinen Vogel gerufen, und er ist\nnicht gekommen?!?\n\x0E\x01\x09\x04\x01\xC00Dein Schutzvogel ist nicht gekommen...\n\nIch habe ja schon vieles gehört, aber so etwas\nhätte ich niemals für möglich gehalten...\n\n\n\x0E\x01\x09\x04\x08\x400Du musst dir allerdings keine Sorgen machen,\nmein Freund. Ich werde einen Weg finden,\ndir zu helfen...\n\n\x0E\x01\x09\x04\x0B\xC00Allerdings wird das etwas dauern...\nWie wäre es, wenn du dich inzwischen mal\nam Dorfplatz umhören würdest?")
/*< 21>*/ 				scene_flags[0 'Skyloft'][18 /* 0x3 04 */] = true;
          			}
          		  case 1:
/*< 36>*/ 			switch (scene_flags[35 /* 0x5 08 */]) {
          			  case 0:
/*< 37>*/ 				printf("\x0E\x01\x09\x04\x0C\x405Denk dran, wenn du Fragen zu den Vögeln hast,\nfrag mich, <b<Cuco>>.")
          			  case 1:
/*< 18>*/ 				printf("\x0E\x01\x09\x04\x09\x401Morgen, Link!\n\n\n\n\x0E\x01\x09\x04\x08\x400Na, bist du auch bereit für die\n<r<Vogelreiter-Zeremonie>> heute?\n\n\nDie anderen bereiten sich alle schon draußen\nauf dem Dorfplatz vor, aber du scheinst ja\ndie Ruhe selbst zu sein.\n\n\x0E\x01\x09\x04\x0B\x400Aber dein <r<karminroter Wolkenvogel >>ist ja auch\nein tolles Tier.\n\n\nIch habe die Vogelreiter-Zeremonie zwar beim\nletzten Mal gewonnen, aber ob mein Vogel eine\nChance gegen deinen hätte?\n\n\x0E\x01\x09\x04\x08\x400Doch denk daran, ein Vogel ist nur so gut wie\nsein Reiter. Ich verbringe jeden Tag mit dem\nStudium der Vögel.\n\n\x0E\x01\x09\x04\x0C\x405Wenn du also mal Fragen zu den Vögeln hast,\ndann ist <b<Cuco >>dein Mann!")
/*< 35>*/ 				scene_flags[0 'Skyloft'][35 /* 0x5 08 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_100_12() {
/*< 22>*/ 	start()
/*< 26>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*<137>*/ 		switch (scene_flags[64 /* 0x9 01 */]) {
          		  case 0:
/*<138>*/ 			printf("\x0E\x01\x09\x04\x00\x06<b<Cuco>> sollte vor der <r<Übungshalle >>neben\nder Ritterschule zu finden sein.")
          		  case 1:
/*< 27>*/ 			printf("\x0E\x01\x09\x04\x08\x406Wie?<pause28>\nWohin <b<Bado >>unterwegs war?\n\n\n\x0E\x01\x09\x04\x00\xD00Hat er wieder was ausgefressen?\n\n\n\n\x0E\x01\x09\x04\x0C\x400Also, ich habe nichts gesehen, aber <b<Cuco>>...\nVielleicht weiß er etwas.\n\n\n\x0E\x01\x09\x04\x08\xE04Da fällt mir ein, <b<Cuco>> hat dich vorhin gesucht\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í\nWahrscheinlich findest du ihn jetzt vor\nder <r<Übungshalle>>.")
/*<136>*/ 			scene_flags[0 'Skyloft'][64 /* 0x9 01 */] = true;
          		}
          	  case 1:
/*< 25>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<134>*/ 			switch (scene_flags[63 /* 0x6 80 */]) {
          			  case 0:
/*<135>*/ 				printf("\x0E\x01\x09\x04\x01\x406Was ist mit dir, Link?\nDu siehst unruhig aus.\n\n\n\x0E\x01\x09\x04\x08\xD00Das kann doch nicht sein!\n<pause28>Dein <r<Wolkenvogel>> ist verschwunden?\n\n\n\x0E\x01\x09\x04\x0C\xD12Tut mir leid\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í\nIch war bis eben in der Schule, ich habe\nnichts mitbekommen.")
          			  case 1:
/*<142>*/ 				set_camera(14, 0)
/*<140>*/ 				make_actor_do_something(0, 0)
/*<132>*/ 				printf("\x0E\x01\x09\x04\n\xE56\x0E\x01\x08\x02\xFFCDEigentlich ist das Aufschließen der Tür nicht meine\nAufgabe. Und trotzdem habe ich mich überreden lassen...")
/*<143>*/ 				set_camera(-1, 0)
/*<141>*/ 				make_actor_do_something(1, 0)
/*< 24>*/ 				printf("\x0E\x01\x09\x04\x01\x406Was ist mit dir, Link?\nDu siehst unruhig aus.\n\n\n\x0E\x01\x09\x04\x08\xD00Das kann doch nicht sein!\n<pause28>Dein <r<Wolkenvogel>> ist verschwunden?\n\n\n\x0E\x01\x09\x04\x0C\xD12Tut mir leid\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í\nIch war bis eben in der Schule, ich habe\nnichts mitbekommen.")
/*<133>*/ 				scene_flags[0 'Skyloft'][63 /* 0x6 80 */] = true;
          			}
          		  case 1:
/*<129>*/ 			switch (scene_flags[62 /* 0x6 40 */]) {
          			  case 0:
/*<131>*/ 				printf("\x0E\x01\x09\x04\x08\x900Wenn du die <r<Vogelreiter-Zeremonie >>gewinnst,\nerreichst du wie ich die <r<Oberstufe>> und kannst\nRitter werden!")
          			  case 1:
/*< 23>*/ 				printf("\x0E\x01\x09\x04\x08\x901Hallo, Link!\nStreng dich bei der <r<Vogelreiter-\nZeremonie >>heute ordentlich an!\n\n\x0E\x01\x09\x04\x00\x400Wenn du gewinnst, kommst du wie ich\nin die <r<Oberstufe>> und kannst <r<Ritter\n>>werden!\n\n\x0E\x01\x09\x04\x08\x900Dann darfst du auch so eine schicke\n<r<Ritter-Uniform >>wie ich tragen!\nDie würde dir sicher gut stehen!\n\n\x0E\x01\x09\x04\x0B\x713Wenn auch nicht so gut\nwie IHM...")
/*<130>*/ 				scene_flags[0 'Skyloft'][62 /* 0x6 40 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_100_13() {
/*<150>*/ 	start()
/*<151>*/ 	printf("\x0E\x01\x09\x04\x00\x01Sieh dir mal diese Statue an. Niemand weiß,\nwie lang sie schon hier steht.\n\n\nSchade, dass das eine Auge fehlt...\n\n\n\nDrücke (^) und sieh dir die Statue ruhig etwas\nnäher an!\x0E\x01\x11\x02\x8CD")
          }

          void entrypoint_100_30() {
/*<172>*/ 	start()
/*<173>*/ 	set_camera(30, 0)
/*<175>*/ 	set_camera(31, 0)
/*<174>*/ 	{'type': 'type3', 'subType': 1, 'param1': 25, 'param2': 0, 'next': -1, 'param3': 40}
          }

          void entrypoint_100_14() {
/*<152>*/ 	start()
/*<157>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<158>*/ 		printf("\x0E\x01\x09\x04\x00\x04Mhmm...\nDas wird heute wieder ein leckeres Süppchen!")
          	  case 1:
/*<153>*/ 		printf("\x0E\x01\x09\x04\x00\x02Oh, dieses Kind!\nGleich gibt's Essen und er treibt sich wieder\nsonst wo herum!\n\nJagt bestimmt wieder irgendwelche\nKrabbelviecher...")
          	}
          }

          void entrypoint_100_15() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf("\x0E\x01\x09\x04\x00\x07Wo willst du denn damit hin?\n\n\n\n\x0E\x01\x09\x04\x00\x1200Mach keinen Unsinn! Hast du nichts\nanderes zu tun?")
          }

          void entrypoint_100_16() {
/*<159>*/ 	start()
/*<186>*/ 	switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          	  case 0:
/*<188>*/ 		printf("\x0E\x01\x09\x04\x08\x909Ah, Link!\nVielen Dank, dank dir habe ich mein\nGlück gefunden!\n\nEr geht heute Abend wieder auf Patrouille!\nNiemand hat ihn darum gebeten, er tut\nes einfach!\n\n\x0E\x01\x09\x04\x0E\x90AAch, ist er nicht wundervoll?")
          	  case 1:
/*<184>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<187>*/ 			printf("\x0E\x01\x09\x04\x00\xE12Was soll ich nur mit dem Brief von Rax\nmachen?\n\n\n\x0E\x01\x09\x04\x0B\xE00Was würde wohl Cuco denken, wenn er\ndavon wüsste...")
          		  case 1:
/*<180>*/ 			switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          			  case 0:
/*<189>*/ 				switch (zone_temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
          					flw_185:
/*<185>*/ 					switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          					  case 0:
          					  case 1:
/*<182>*/ 						printf("\x0E\x01\x09\x04\x08\xD57Du willst reden?\nHat das nicht Zeit bis morgen?")
/*<190>*/ 						zone_temp_flags[16 /* 0x3 01 */] = true;
          					}
          				  case 1:
/*<181>*/ 					printf("\x0E\x01\x09\x04\n\xE57Eine Unverschämtheit, sich mitten in der Nacht\nins Zimmer einer Dame zu schleichen!\n\n\nIch will jetzt baden! Hättest du also\ndie Güte, aus meinem Zimmer zu\nverschwinden, Link?!?\n\n\x0E\x01\x09\x04\x0C\xE14Allerdings scheint das Bad im Moment noch\nbesetzt zu sein... Wer braucht da drinnen\nnur so lange?")
/*<183>*/ 					switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          					  case 0:
          						goto flw_185
          					  case 1:
          					}
          				}
          			  case 1:
/*<160>*/ 				printf("\x0E\x01\x09\x04\x0C\xD14Ich kann nicht glauben, dass Zelda durch\ndie Wolkendecke gestürzt ist...\nSie ist doch eine so gute Vogelreiterin!\n\n\x0E\x01\x09\x04\n\xD06Ein Ungeheuer? Bist du sicher, dass du nicht\nnoch unter Schock stehst?")
          			}
          		}
          	}
          }

          void entrypoint_100_17() {
/*< 40>*/ 	start()
/*< 41>*/ 	printf("\x0E\x01\x09\x04\x01\x02\x0E\x03\x01\x00Link!\x0E\x01\x0D\x02\x1906")
/*<120>*/ 	set_camera(9, 0)
/*<121>*/ 	printf("Wenn du zum Dorfplatz willst, nimm\nden Ausgang hier unten.\n\n\n\x0E\x01\x09\x04\x09\x400Die Tür oben ist noch abgeschlossen.")
/*<123>*/ 	set_camera(11, 0)
/*<122>*/ 	printf("\x0E\x01\x09\x04\x0C\xC16Warum braucht denn unsere Küchendame heute\nso lange mit dem Aufschließen? Ich werde mal\nmit ihr reden müssen!")
          }

          void entrypoint_100_18() {
/*< 68>*/ 	start()
/*< 88>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*< 89>*/ 		switch (story_flags[28 /* us: 805A9ADA 0x10, jp: 805ACD5A 0x10 */]) {
          		  case 0:
/*< 90>*/ 			printf("\x0E\x01\x09\x04\x00\xC05Ein Tipp noch, bevor du dich an gefährliche\nOrte wagst.\n\n\n<r<Bete zur Göttin und speichere>>, bevor du\ndich aufmachst.\n\n\n<r<Statuen>>, an denen du beten kannst, werden auf\nder Karte gezeigt.")
          		  case 1:
/*<278>*/ 			printf("\x0E\x01\x09\x04\x0C\xC05Am Wasserfall wurden in letzter Zeit\ngefährliche Kreaturen gesehen, du solltest\nalso ein <r<Schwert>> oder so etwas mitnehmen...\n\n\x0E\x01\x13\x00\x0E\x01\x09\x04\x09\xC00\x0E\x01\n\x04 ÍFrag doch mal den <b<Schwertmeister>> hier in\nder Übungshalle, ob er dir ein Schwert leiht.")
          		}
          	  case 1:
/*<102>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 72, 'param3': 31}
/*< 72>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 191, 'param3': 32}
/*<191>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 20, 'next': 192, 'param3': 47}
/*<192>*/ 		set_camera(13, 0)
/*<193>*/ 		{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 100, 'next': 195, 'param3': 15}
/*<195>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 194, 'param3': 16}
/*<194>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 20, 'next': 70, 'param3': 48}
/*< 70>*/ 		switch (scene_flags[54 /* 0x7 40 */]) {
          		  case 0:
/*< 69>*/ 			printf("\x0E\x01\x09\x04\x08\x401Gut, dass du hier bist, Link.\nIch habe dich schon gesucht!")
          			flw_71:
/*< 71>*/ 			printf("\x0E\x01\x09\x04\x09\xC00Ich habe mich wegen deines\nWolkenvogels umgehört.\n\n\n\x0E\x01\x09\x04\x00\xC00Und als ich mit Grus hier geredet habe,\nhat er sich seltsam verhalten...")
/*< 73>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 0, 'next': 126, 'param3': 16}
/*<126>*/ 			set_camera(12, 0)
/*<155>*/ 			make_actor_do_something(0, 0)
/*<128>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 100, 'next': 74, 'param3': 17}
/*< 74>*/ 			printf("\x0E\x01\x09\x04\xC00\x812Verzeih mir, Link!\n\n\n\n\x0E\x01\x09\x04\xC00\x800Ich wollte es dir schon früher sagen\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\nAber dann hätte <b<Bado>> es ganz bestimmt\nherausgefunden...")
/*<196>*/ 			make_actor_do_something(1, 12)
/*< 75>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 127, 'param3': 16}
/*<127>*/ 			set_camera(13, 0)
/*< 76>*/ 			printf("\x0E\x01\x09\x04\x00\xC16Anscheinend hat <b<Bado >>ihn ordentlich\neingeschüchtert...")
/*<124>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 12, 'next': 125, 'param3': 17}
/*<125>*/ 			printf("\x0E\x01\x09\x04\x08\xC00Los...<pause23> Spuck's schon aus!")
/*< 77>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 78, 'param3': 16}
/*< 78>*/ 			printf("\x0E\x01\x09\x04\xC07\xE11Als ich vorhin den Speisesaal ein wenig\naufgeräumt habe, kamen Bado und die\nbeiden anderen rein...\n\n\x0E\x01\x09\x04\xC00\x800Sie haben mich gar nicht beachtet und\nbegannen einen Plan auszuhecken, um\ndeinen Wolkenvogel zu <r<verstecken>>.\n\n\x0E\x01\x09\x04\xC00\x800Ich wollte mich wegschleichen, um dich\nzu warnen...\n\n\n\x0E\x01\x09\x04\xC01\xE00Aber da hat mich Bado entdeckt...\n\n\n\n\x0E\x01\x09\x04\xC07\xE00Wenn ich etwas verrate, würde ich nie\nwieder fliegen, hat er gesagt...")
/*< 79>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 80, 'param3': 16}
/*< 80>*/ 			printf("\x0E\x01\x09\x04\x09\xC00<b<Bado>> hatte also anscheinend den Plan,\nsich deinen Vogel zu schnappen und ihn\nbeim <pling><r<Wasserfall>> zu verstecken.\n\n\x0E\x01\x09\x04\x08\xC00Hm, der Wasserfall\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\n<pause28>Gib mir doch mal kurz die <r<Karte>>...")
/*< 84>*/ 			scene_flags[0 'Skyloft'][14 /* 0x0 40 */] = true;
/*<279>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
          				flw_283:
/*<283>*/ 				scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<284>*/ 				scene_flags[0 'Skyloft'][117 /* 0xF 20 */] = true;
/*<282>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 82, 'param3': 30}
/*< 82>*/ 				printf("Da muss er sein, beim <r<Wasserfall>>!\nIch habe ihn mit \x0E\x02\x04\x02\x19CD markiert.")
/*<268>*/ 				{'type': 'type3', 'subType': 4, 'param1': 100, 'param2': 256, 'next': 81, 'param3': 30}
/*< 81>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 286, 'param3': 34}
/*<286>*/ 				switch (temp_flags[54 /* 0x7 40 */]) {
          				  case 0:
/*< 83>*/ 					printf("\x0E\x01\x09\x04\x00\x404Du weißt, wie die Karte funktioniert?\nDrücke \x0E\x02\x04\x02\x2CD, und du siehst eine Karte\ndeiner Umgebung!\x0E\x01\x11\x02\x2CD\n\n\x0E\x01\x09\x04\x08\x400Wenn du dich verlaufen hast, drücke\nalso einfach \x0E\x02\x04\x02\x2CD!\x0E\x01\x11\x02\x2CD")
          					flw_85:
/*< 85>*/ 					{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 86, 'param3': 16}
/*< 86>*/ 					printf("\x0E\x01\x09\x04\xC00\x819Es tut mir so leid, Link!\nIch bin so ein Feigling...\nEs tut mir so schrecklich leid!")
/*< 87>*/ 					scene_flags[0 'Skyloft'][55 /* 0x7 80 */] = true;
/*<285>*/ 					switch (temp_flags[54 /* 0x7 40 */]) {
          					  case 0:
/*<154>*/ 						story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          						flw_156:
/*<156>*/ 						story_flags[33 /* us: 805A9ADD 0x02, jp: 805ACD5D 0x02 */] = true;
/*<149>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
          						goto flw_156
          					}
          				  case 1:
          					goto flw_85
          				}
          			  case 1:
/*<280>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
          					goto flw_283
          				  case 1:
/*<281>*/ 					temp_flags[54 /* 0x7 40 */] = true;
          					goto flw_283
          				}
          			}
          		  case 1:
/*<101>*/ 			printf("\x0E\x01\x09\x04\x00\xC01\x0E\x03\x01\x00Link!\nSo ein Glück!")
/*<148>*/ 			scene_flags[0 'Skyloft'][54 /* 0x7 40 */] = true;
          			goto flw_71
          		}
          	}
          }

          void entrypoint_100_01() {
          	start()
/*< 48>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*< 50>*/ 		switch (scene_flags[45 /* 0x4 20 */]) {
          		  case 0:
/*< 55>*/ 			printf("\x0E\x01\x09\x04\x00\x04Drücke \x0E\x02\x04\x02\x2CD, um die Statue der Göttin\nauf der <r<Karte>> zu finden.\x0E\x01\x11\x02\x2CD")
          		  case 1:
/*<256>*/ 			switch (scene_flags[117 /* 0xF 20 */]) {
          			  case 0:
/*<257>*/ 				printf("\x0E\x01\x09\x04\x00\x04Was ist los, Link?<pause28>\n\x0E\x01\x09\x04\x00\x1100Was?!? Dein Vogel?<pause32>\nEr ist\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Íweg?\n\n\x0E\x01\x09\x04\x11\x1100Oh nein!\nIch hatte mich so darauf gefreut,\ndeinen roten Vogel fliegen zu sehen!\n\nTut mir leid, ich habe keine Ahnung,\nwo er sein könnte\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\n\n\n\x0E\x01\x09\x04\n\x1100Aber\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í Von der Statue der Göttin hat\nman den besten Ausblick über das Dorf,\nsieh dich doch da mal um.")
/*<258>*/ 				scene_flags[0 'Skyloft'][45 /* 0x4 20 */] = true;
          			  case 1:
/*<244>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 53, 'param3': 31}
/*< 53>*/ 				printf("\x0E\x01\x09\x04\x00\x04Was ist los, Link?<pause28>\n\x0E\x01\x09\x04\x00\x1100Was?!? Dein Vogel?<pause32>\nEr ist\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Íweg?\n\n\x0E\x01\x09\x04\x11\x1100Oh nein!\nIch hatte mich so darauf gefreut,\ndeinen roten Vogel fliegen zu sehen!\n\nTut mir leid, ich habe keine Ahnung,\nwo er sein könnte\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\n\n\n\x0E\x01\x09\x04\n\x1100Aber\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í Von der Statue der Göttin hat\nman den besten Ausblick über das Dorf,\nsieh dich doch da mal um.")
/*< 54>*/ 				scene_flags[0 'Skyloft'][45 /* 0x4 20 */] = true;
/*<238>*/ 				scene_flags[0 'Skyloft'][117 /* 0xF 20 */] = true;
/*<237>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 255, 'param3': 30}
/*<255>*/ 				printf("Die <r<Statue der Göttin>> ist die große Statue im\nNorden des Wolkenhorts, an der mit \x0E\x02\x04\x02\x19CD\nmarkierten Stelle.")
/*<266>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 256, 'next': 239, 'param3': 30}
/*<239>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 242, 'param3': 34}
/*<242>*/ 				switch (scene_flags[116 /* 0xF 10 */]) {
          				  case 0:
          				  case 1:
/*<243>*/ 					scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<240>*/ 					printf("\x0E\x01\x09\x04\x00\x404Du weißt, wie man eine Karte liest, oder?\nDrücke \x0E\x02\x04\x02\x2CD, und du siehst eine Karte der\nUmgebung!\x0E\x01\x11\x02\x2CD Wenn du dich verlaufen hast,\nschau auf die Karte!\x0E\x01\x11\x02\x2CD")
/*<241>*/ 					story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          				}
          			}
          		}
          	  case 1:
/*< 49>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*< 52>*/ 			printf("\x0E\x01\x09\x04\n\x705Ich bin schon gespannt, wie ihr euch schlagen\nwerdet, dein roter Vogel und du!")
          		  case 1:
/*<  1>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hey, Link! Bald beginnt die\nVogelreiter-Zeremonie!\n\n\nLetztes Mal hat <b<Cuco>> um Federbreite gewonnen,\ndas war vielleicht ein Schauspiel!\n\n\n\x0E\x01\x09\x04\n\x700Heute ist dein roter Wolkenvogel mit dabei!\n<pause28>Viel Glück, ich bin schon sehr gespannt!")
/*< 51>*/ 			scene_flags[0 'Skyloft'][44 /* 0x4 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_19() {
/*< 91>*/ 	start()
/*<109>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 197, 'param3': 32}
/*<197>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3073, 'param2': 256, 'next': 92, 'param3': 13}
/*< 92>*/ 	printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CDHey!\x0E\x01\x0D\x02\x1906 \x0E\x03\x01\x00Link!")
/*<108>*/ 	set_camera(2, 0)
/*<110>*/ 	make_actor_do_something(2, 12)
/*<139>*/ 	printf("\x0E\x01\x08\x02\x2CDHier sind wir!\x0E\x01\x08\x02Í\n\n\n\n\x0E\x01\n\x04\x03ÍWir sprechen gerade von deinem Wolkenvogel,\nkomm her!")
/*<111>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 93, 'param3': 42}
/*< 93>*/ 	scene_flags[0 'Skyloft'][54 /* 0x7 40 */] = true;
          }

          void entrypoint_100_02() {
/*<  2>*/ 	start()
/*< 28>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 29>*/ 		printf("\x0E\x01\x09\x04\x00\x03Was ist mit deinem Wolkenvogel?\n\n\n\n\x0E\x01\x09\x04\x10\xE00Ich bin gerade beschäftigt, hat das nicht Zeit\nbis später?")
          	  case 1:
/*<176>*/ 		switch (scene_flags[22 /* 0x3 40 */]) {
          		  case 0:
/*<177>*/ 			printf("\x0E\x01\x09\x04\x00\x01Die <r<Vogelreiter-Zeremonie >>beginnt bald,\nalso trödle hier nicht herum, sondern mach\ndich auf den Weg!")
          		  case 1:
/*<  3>*/ 			printf("\x0E\x01\x09\x04\x00\x02Wo steckt nur dieser <b<Grus>>?\nEr sollte mir <r<Fässer>> bringen, aber er will\neinfach nicht beikommen...\n\n\x0E\x01\x09\x04\x10\xF00Wo bleibt er nur?")
          		}
          	}
          }

          void entrypoint_100_03() {
/*< 32>*/ 	start()
/*< 33>*/ 	printf("\x0E\x01\x12\x04\x00\x01Gebieter...\nIch spüre, dass sich am Ende dieses Lichtstrahls\nHinweise zu den drei Flammen befinden.\n\nIch würde daher empfehlen, ihn näher zu untersuchen.")
/*<163>*/ 	story_flags[195 /* us: 805A9AEC 0x20, jp: 805ACD6C 0x20 */] = true;
          }

          void entrypoint_100_20() {
/*< 94>*/ 	start()
/*< 95>*/ 	printf("\x0E\x01\x09\x04\x00\x04Aha! \x0E\x03\x01\x00Link!")
/*< 96>*/ 	printf("\x0E\x01\x09\x04\x0C\xC05Am Wasserfall wurden in letzter Zeit\ngefährliche Kreaturen gesehen, du solltest\nalso ein <r<Schwert>> oder so etwas mitnehmen...\n\n\x0E\x01\x13\x00\x0E\x01\x09\x04\x09\xC00\x0E\x01\n\x04 ÍFrag doch mal den <b<Schwertmeister>> hier in\nder Übungshalle, ob er dir ein Schwert leiht.")
          }

          void entrypoint_100_04() {
/*<  4>*/ 	start()
/*< 10>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 66>*/ 		switch (scene_flags[53 /* 0x7 20 */]) {
          		  case 0:
/*< 67>*/ 			printf("\x0E\x01\x09\x04\x00\x05Wie? Du willst mich noch etwas fragen?\nWorüber soll ich dir denn Auskunft geben?\n[1]Wo ist mein\nWolkenvogel?[2]Was ist mit\nBado?")
          			flw_16:
/*< 16>*/ 			switch (choice(2)) {
          			  case 0:
/*< 62>*/ 				printf("\x0E\x01\x09\x04\x00\x12Nun, ich kann dir leider auch nicht sagen,\nwo er gerade ist...")
/*< 65>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
          			  case 1:
/*< 63>*/ 				printf("\x0E\x01\x09\x04\x00\x04<b<Bado>> wollte sich den Platz ansehen, auf dem\ndie <r<Vogelreiter-Zeremonie >>stattfinden soll.")
/*< 64>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
/*<234>*/ 				entrypoint_100_59();
          			}
          		  case 1:
/*<263>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
          				flw_61:
/*< 61>*/ 				printf("\x0E\x01\x09\x04\x00\x05Hm? Was ist los?\nDu siehst etwas mitgenommen aus...\n\n\nDein Wolkenvogel ist verschwunden?\n\n\n\n<pause32>Also...<pling> Ich habe ihn <r<gesehen>>, als er vor <b<Bado\n>>und den beiden anderen Rabauken geflohen ist.\n[1]Wo ist mein\nWolkenvogel?[2]Was ist mit\nBado?")
          				goto flw_16
          			  case 1:
/*<235>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 61, 'param3': 31}
          				goto flw_61
          			}
          		}
          	  case 1:
/*< 15>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 56, 'param3': 31}
/*< 56>*/ 		switch (scene_flags[52 /* 0x7 10 */]) {
          		  case 0:
/*< 58>*/ 			printf("\x0E\x01\x09\x04\x00\x03Ich bin bald mit der Tür fertig, also lass mich\nhier noch etwas in Ruhe arbeiten. Aber wenn\ndu was wissen willst, frag ruhig.\n[1]Wo ist\nZelda?[2]Die Zeremonie...")
/*<  9>*/ 			switch (choice(2)) {
          			  case 0:
/*< 60>*/ 				printf("\x0E\x01\x09\x04\x00\x05Du willst wissen, wo <b<Zelda>> gerade ist?\n<pause1E>Ja, ich habe sie gesehen. Sie war mit Direktor\n<b<Gepora >>an der Statue der Göttin.\n\nDie Statue der Göttin? <pause1E>Wo die ist?\nDrücke einfach \x0E\x02\x04\x02\x22CD und sieh dich um!\x0E\x01\x11\x02\x8CD")
          			  case 1:
/*< 59>*/ 				printf("\x0E\x01\x09\x04\x00\x03Hast du dich auf die <r<Vogelreiter-Zeremonie\n>>auch gut vorbereitet?\n\n\nWenn du gewinnst, wirst du für die <r<Oberstufe\n>>der Ritterschule zugelassen und danach in den\n<r<Ritterorden >>aufgenommen.\n\nDie Ritter haben die ehrenvolle Aufgabe,\nden Frieden des Wolkenhorts zu wahren.\nWürde mich freuen, dich als Ritter zu sehen.")
          			}
          		  case 1:
/*<  5>*/ 			printf("\x0E\x01\x09\x04\x00\x01Morgen, Link!\nHast du dich gut ausgeruht?\n\n\nTja, ich schätze mal, du hast wegen der\n<r<Vogelreiter-Zeremonie>> kein Auge\nzugekriegt, was?\n\nWie? Ich?<pause28> Ich repariere diese Tür...\n\n\n\nSie knarrt nämlich, und heute ist doch der Tag\nder heiligen Zeremonie, oder? Bis dahin wollte\nich fertig sein...\n\n\x0E\x01\x09\x04\x0C\xC00Na, da kann man nichts machen. Und du, hast\ndu nach dem Aufstehen auch fleißig zur\nGöttin <r<gebetet>>?\n\n\x0E\x01\n\x04\x06ÍWenn du dich dieser <r<Statue>> zuwendest und\nbetest, wird alles, was du bisher getan\nhast, <r<gespeichert>>.\n\n\x0E\x01\x09\x04\x0C\xC00\x0E\x01\n\x04\xFFFFÍStatuen wie diese gibt es überall im Wolkenhort.\n\n\n\nWenn du eine findest, solltest du deine\nEhrerbietung mit einem kleinen Gebet\nerweisen.\n\n\x0E\x01\x09\x04\x00\x08<r<Verlasse dich auf die Göttin>>.")
/*< 57>*/ 			scene_flags[0 'Skyloft'][52 /* 0x7 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_21() {
/*< 97>*/ 	start()
/*< 98>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*<100>*/ 		printf("\x0E\x01\x09\x04\xC00\x800\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\nSchaffst du es noch rechtzeitig?\nAch, Link...\n\n\x0E\x01\x09\x04\xC00\xE06Ich bin ein Feigling\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\nEs tut mir so leid...")
          	  case 1:
/*< 99>*/ 		printf("\x0E\x01\x09\x04\xC01\x900\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í")
          	}
          }

          void entrypoint_100_56() {
/*<178>*/ 	start()
/*<204>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<205>*/ 		printf("\x0E\x01\x09\x04\x00\x02Pass ein bisschen besser auf! Was hast du\neigentlich in der Schule gelernt? So wirst\ndu es nie zum Ritter bringen!")
          	  case 1:
/*<179>*/ 		printf("\x0E\x01\x09\x04\x00\x02Sei vorsichtig! Zum Glück sind wir Ritter\nstets wachsam!")
          	}
          }

          void entrypoint_100_05() {
/*<  6>*/ 	start()
/*<221>*/ 	switch (scene_flags[61 /* 0x6 20 */]) {
          	  case 0:
/*< 34>*/ 		switch (scene_flags[58 /* 0x6 04 */]) {
          		  case 0:
/*<104>*/ 			printf("\x0E\x01\x09\x04\x0F\x1300Verflucht! Mein <b<Wolken-Hirschkäfer>>!\nFast hätte ich ihn gehabt...\n\n\n\x0E\x01\x09\x04\n\x900Ohne Schmetterlingsnetz sind Insekten\nunmöglich zu fangen.\n\n\nWenn ich nur das Netz, das ich in <r<Terris Laden\n>>gekauft habe, nicht weggeworfen hätte... \x0E\x01\x09\x04\x11\x200Ach...")
          		  case 1:
/*<103>*/ 			printf("\x0E\x01\x09\x04\x00\x04Für eine <g<Rollattacke>> musst du zuerst rennen...\n\n\n\nUnd dann kann's losgehen mit der <g<Rollattacke>>!\nRUMMS! Wenn du richtig triffst, kannst du\nmit ihr Dinge aus Bäumen schütteln. Na?<pause1E>\nVersuch's mal!")
/*<225>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 227, 'param3': 31}
/*<227>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': -1, 'param3': 60}
          		}
          	  case 1:
/*<223>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 222, 'param3': 31}
/*<222>*/ 		printf("\x0E\x01\x09\x04\x00\x01\x0E\x01\x0D\x02\x1906Warte mal, Link!\n\n\n\n\x0E\x01\x0D\x02\x500Tust du mir 'nen Gefallen?\n\n\n\nDer Baum da... Kannst du auf ihn <g<zusprinten\n>>und eine <g<Rollattacke >>machen?\n\n\nRenne auf den Baum zu, <g<rolle >>und RUMMS!<pause1E>\nBitte mach's! <pause1E>Bittebittebitte!")
/*<224>*/ 		scene_flags[0 'Skyloft'][61 /* 0x6 20 */] = true;
/*<226>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': -1, 'param3': 60}
          	}
          }

          void entrypoint_100_22() {
/*<170>*/ 	start()
/*<198>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<199>*/ 		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          		  case 0:
/*<200>*/ 			switch (story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */]) {
          			  case 0:
          				flw_212:
/*<212>*/ 				printf("\x0E\x01\x09\x04\x00\x01Die Stimme aus der Toilette ist nicht mehr\nzu hören... Wer das wohl war?")
          			  case 1:
/*<202>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 201, 'param3': 31}
/*<201>*/ 				printf("\x0E\x01\x09\x04\x00\x01Die letzten <r<Nächte>> habe ich eine Stimme aus\nder <r<Toilette>> gehört.\n\n\nWer könnte das sein? Wenn derjenige\nwenigstens leise wäre...")
          			}
          		  case 1:
          			flw_214:
/*<214>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<216>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ich habe Bado schon eine Weile nicht\nmehr gesehen. Wo er wohl steckt?")
          			  case 1:
/*<213>*/ 				switch (story_flags[4 /* us: 805A9AD9 0x20, jp: 805ACD59 0x20 */]) {
          				  case 0:
/*<215>*/ 					printf("\x0E\x01\x09\x04\x00\x01Wie geht's dir? Denk dran, dein eigenes,\nbequemes <r<Bett>> steht in deinem Zimmer\nfür dich bereit!")
          				  case 1:
/*<171>*/ 					printf("\x0E\x01\x09\x04\x00\x01Oh, gehst du?<pause14>\nDann muss ich jetzt wohl weniger kochen!\n\n\n\x0E\x01\x09\x04\n\xC00Pass auf dich auf!\n\n\n\n\x0E\x01\x09\x04\x09\x800Komm hin und wieder hierher zurück, denn es\ngeht nichts über ein nettes Schläfchen im\neigenen Bett!")
          				}
          			}
          		}
          	  case 1:
          		goto flw_214
          	}
          }

          void entrypoint_100_57() {
/*<206>*/ 	start()
/*<207>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<209>*/ 		printf("\x0E\x01\x09\x04\x00\x02Vorsicht, Neuanwärter! Wenn du dich\nso anstellst, wirst du bestimmt kein\nguter Ritter werden!\n\nUnd vergiss nicht, dass nur wir Ritter\nvon den Luftrettern dazu befugt sind,\nnachts Wolkenvögel zu reiten. Schreib\ndir das hinter die Ohren!")
          	  case 1:
/*<208>*/ 		printf("\x0E\x01\x09\x04\x00\x02Du solltest besser aufpassen, Junge!\nIn der Nacht ist es dunkel, also achte\ndarauf, wohin du trittst.\n\nUnd vergiss nicht, dass nur wir Ritter\nvon den Luftrettern dazu befugt sind,\nnachts Wolkenvögel zu reiten. Schreib\ndir das hinter die Ohren!")
          	}
          }

          void entrypoint_100_58() {
/*<228>*/ 	start()
/*<232>*/ 	switch (scene_flags[116 /* 0xF 10 */]) {
          	  case 0:
          	  case 1:
/*<233>*/ 		scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<230>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 267, 'param3': 30}
/*<267>*/ 		printf("Der mit \x0E\x02\x04\x02\x19CD markierte Ort im Süden des\nWolkenhorts ist der Dorfplatz. Dort findet\nheute die <r<Vogelreiter-Zeremonie >>statt!")
/*<264>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 256, 'next': 231, 'param3': 30}
/*<231>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 229, 'param3': 34}
/*<229>*/ 		printf("\x0E\x01\x09\x04\x00\x404Du weißt, wie die Karte funktioniert?\nDrücke \x0E\x02\x04\x02\x2CD, und du siehst eine Karte\ndeiner Umgebung!\x0E\x01\x11\x02\x2CD Nicht vergessen!\x0E\x01\x11\x02\x2CD")
/*<236>*/ 		story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          	}
          }

          void entrypoint_100_07() {
/*< 11>*/ 	start()
/*<161>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<210>*/ 		switch (story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */]) {
          		  case 0:
/*<211>*/ 			switch (story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */]) {
          			  case 0:
/*<203>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ich höre keine Stimme mehr aus der Toilette.\n\n\n\nDafür weint Rax in Bados Zimmer jetzt jede\nNacht im Schlaf. Kann man denn da\nnichts tun?")
          			  case 1:
          				goto flw_212
          			}
          		  case 1:
/*<217>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<218>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ich habe Bado schon eine Weile nicht\nmehr gesehen. Wo er wohl steckt?")
          			  case 1:
/*<219>*/ 				switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          				  case 0:
/*<220>*/ 					printf("\x0E\x01\x09\x04\x00\x01Wie geht's dir? Denk dran, dein eigenes,\nbequemes <r<Bett>> steht in deinem Zimmer\nfür dich bereit!")
          				  case 1:
/*<162>*/ 					printf("\x0E\x01\x09\x04\x00\xB05Puh, wenn die Kinder abends endlich schlafen,\nkehrt hier zum Glück Ruhe ein...\n\n\n\x0E\x01\x09\x04\n\x800Ich wünsche dir alles Gute für deine Suche\nnach Zelda!")
          				}
          			}
          		}
          	  case 1:
/*< 12>*/ 		printf("\x0E\x01\x09\x04\x00\x03Hier ist geschlossen!\nNachts kommen hier sonst gefährliche\nUngeheuer herein!\n\nWenn du nachts nach draußen willst,\nnimm die Tür im 1. Stock!\n\n\nIch seh dir doch an, dass du dich auf die Suche\nnach Zelda machen willst.\n\n\nAber hier im Wolkenhort geht nachts eigentlich\nniemand vor die Tür...")
          	}
          }

          void entrypoint_100_24() {
/*<105>*/ 	start()
/*<106>*/ 	printf("\x0E\x01\x09\x04\x00\x08Hehe!<pause1E> Gut gemacht! Da ist er!\nMein <b<Wolken-Hirschkäfer>>!\n\n\nHaaaaaalt!")
/*<107>*/ 	scene_flags[0 'Skyloft'][58 /* 0x6 04 */] = true;
          }

          void entrypoint_100_59() {
/*<269>*/ 	start()
/*<273>*/ 	switch (scene_flags[116 /* 0xF 10 */]) {
          	  case 0:
          		flw_270:
/*<270>*/ 		printf("Dann ist er wohl Richtung Platz...\nDer direkte Weg wäre ja normalerweise\nhier entlang.\n\nJetzt müsstest du das Tor unten nehmen,\nich bin hier noch nicht fertig. Macht's dir\nwas aus, um die Schule herumzugehen?\nSchau zur Not mit \x0E\x02\x04\x02\x2CD auf die Karte!\x0E\x01\x11\x02\x2CD")
/*<275>*/ 		story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          	  case 1:
/*<274>*/ 		scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<271>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 277, 'param3': 30}
/*<277>*/ 		printf("Oh, versuchst du immer noch, zum Südende\nzu kommen? Die \x0E\x02\x04\x02\x19CD Markierung auf deiner\nKarte, das ist der Dorfplatz.\n\nDa soll heute die <r<Vogelreiter-Zeremonie>>\nstattfinden, du solltest tunlichst versuchen,\nihn zu finden!")
/*<276>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 256, 'next': 272, 'param3': 30}
/*<272>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 270, 'param3': 34}
          		goto flw_270
          	}
          }

          void entrypoint_100_25() {
/*<112>*/ 	start()
/*<113>*/ 	switch (zone_temp_flags[13 /* 0x0 20 */]) {
          	  case 0:
/*<119>*/ 		printf("\x0E\x01\x09\x04\x0C\x1252\x0E\x01\x08\x02\x2CDJetzt reicht's!\x0E\x01\x0D\x02\x1906\n\n\n\n\x0E\x01\n\x04\x0FÍIch rede mit dem Direktor und lasse dich von\nder Schule werfen!")
          	  case 1:
/*<114>*/ 		switch (zone_temp_flags[12 /* 0x0 10 */]) {
          		  case 0:
/*<117>*/ 			printf("\x0E\x01\x09\x04\x0C\x1207\x0E\x01\x08\x02\x1CDWas ist das denn für ein Benehmen!\x0E\x01\x0D\x02\x1906\nDu frecher Bengel!\n\n\n\x0E\x01\n\x04\x0FÍAber mach nur so weiter, wenn du eine\nWoche lang kein Essen haben möchtest!")
/*<118>*/ 			zone_temp_flags[13 /* 0x0 20 */] = true;
          		  case 1:
/*<115>*/ 			printf("\x0E\x01\x09\x04\x0C\x1206Was machst du denn?!?\x0E\x01\x0D\x02\x1906\n\n\n\n\x0E\x01\n\x04\x0FÍDas räumst du schön wieder auf!")
/*<116>*/ 			zone_temp_flags[12 /* 0x0 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_09() {
/*<  7>*/ 	start()
/*< 42>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*< 46>*/ 		switch (scene_flags[43 /* 0x4 08 */]) {
          		  case 0:
/*< 47>*/ 			printf("\x0E\x01\x09\x04\x00\x04Drücke \x0E\x02\x04\x02\x2CD, um die Statue der Göttin\nauf der <r<Karte>> zu finden.\x0E\x01\x11\x02\x2CD")
          		  case 1:
/*<246>*/ 			switch (scene_flags[117 /* 0xF 20 */]) {
          			  case 0:
/*<261>*/ 				printf("\x0E\x01\x09\x04\x00WWas ist los, Link?\nWarum so aufgeregt?\n\n\nDein Vogel, Link?\nAch, der seltene rote?\n<pause28>Keine Ahnung\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\n\n\x0E\x01\x09\x04\x11\x200Nein, hab ihn nicht gesehen.\n\n\n\n\x0E\x01\x09\x04\x09\x204Von der Statue der Göttin hat man den\nbesten Ausblick über das Dorf, sieh\ndich doch da mal um.")
/*<262>*/ 				scene_flags[0 'Skyloft'][43 /* 0x4 08 */] = true;
          			  case 1:
/*<253>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 259, 'param3': 31}
/*<259>*/ 				printf("\x0E\x01\x09\x04\x00WWas ist los, Link?\nWarum so aufgeregt?\n\n\nDein Vogel, Link?\nAch, der seltene rote?\n<pause28>Keine Ahnung\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\n\n\x0E\x01\x09\x04\x11\x200Nein, hab ihn nicht gesehen.\n\n\n\n\x0E\x01\x09\x04\x09\x204Von der Statue der Göttin hat man den\nbesten Ausblick über das Dorf, sieh\ndich doch da mal um.")
/*<260>*/ 				scene_flags[0 'Skyloft'][43 /* 0x4 08 */] = true;
/*<247>*/ 				scene_flags[0 'Skyloft'][117 /* 0xF 20 */] = true;
/*<245>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 254, 'param3': 30}
/*<254>*/ 				printf("Die <r<Statue der Göttin>> ist das große Denkmal im\nNorden des Wolkenhorts. Kennst du doch, oder?\nGeh einfach Richtung \x0E\x02\x04\x02\x19CD!")
/*<265>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 256, 'next': 248, 'param3': 30}
/*<248>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 251, 'param3': 34}
/*<251>*/ 				switch (scene_flags[116 /* 0xF 10 */]) {
          				  case 0:
          				  case 1:
/*<252>*/ 					scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<249>*/ 					printf("\x0E\x01\x09\x04\x00\x404Wenn du dich mal verlaufen hast, drücke\neinfach \x0E\x02\x04\x02\x2CD, um eine Karte der Umgebung\nzu sehen.\x0E\x01\x11\x02\x2CD Das sollte dann weiterhelfen!\x0E\x01\x11\x02\x2CD")
/*<250>*/ 					story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          				}
          			}
          		}
          	  case 1:
/*< 44>*/ 		switch (scene_flags[42 /* 0x4 04 */]) {
          		  case 0:
/*< 45>*/ 			printf("\x0E\x01\x09\x04\x0C\x209Ich würde auch gern bei der\nVogelreiter-Zeremonie als Vertreterin\nder Göttin einen furchtlosen Ritter treffen...")
          		  case 1:
/*<  8>*/ 			printf("\x0E\x01\x09\x04\x00\x01Oh, Link! Hallo!\nDer Wind heute ist günstig, was für ein Tag für\ndie Zeremonie!\n\n\x0E\x01\x09\x04\x11\x200Wer wohl gewinnen wird?\nAlso ich tippe ja auf <b<Bado>>!\n\n\n\x0E\x01\x09\x04\x0C\x200Der Sieger erhält von der Vertreterin\nder Göttin ein Geschenk.\n\x0E\x01\x09\x04\x00\x609Hach, wie romantisch...")
/*< 43>*/ 			scene_flags[0 'Skyloft'][42 /* 0x4 04 */] = true;
          		}
          	}
          }

          void entrypoint_100_26() {
/*<144>*/ 	start()
/*<146>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*<147>*/ 		printf("\x0E\x01\x09\x04\x09\x802Danke, Link!\nDas ist nett von dir. Eigentlich sollte\ndas ja <b<Grus >>erledigen, aber was soll's...\n\n\x0E\x01\x09\x04\n\xC00Du hast heute einen wichtigen Tag vor dir und\nhast mir trotzdem geholfen... Vielen Dank!")
          	  case 1:
/*<145>*/ 		printf("\x0E\x01\x09\x04\n\x401Hallo, Link!\nKannst du mir mit etwas helfen?\n\n\n\x0E\x01\x09\x04\x10\x802Eigentlich habe ich schon <b<Grus>> darum gebeten...\n\n\n\n\x0E\x01\x09\x04\x09\x400Aber wo du nun schon hier bist...\nKönntest du mir bitte ein <r<Fass >>bringen?")
          	}
          }

          void entrypoint_100_10() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf("")
          }

