          void entrypoint_100_11() {
/*< 17>*/ 	start()
/*<164>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<168>*/ 		switch (temp_flags[16 /* 0x3 01 */]) {
          		  case 0:
/*<167>*/ 			printf(/* textboxtype: 0, unk: 1, line: 61 */ "<0x10009:0x00000004>Nachts kann man jedenfalls nicht\nfliegen!\n\n\nDu wirst dich ins Bett legen und bis\nmorgen schlafen müssen.")
          		  case 1:
/*<169>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 165, 'param3': 31}
/*<165>*/ 			printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x00000001>Was machst du denn hier mitten in\nder Nacht?!?\n\n\n<0x10009:0x000c0c09>Was? Du wolltest auf deinem\nWolkenvogel reiten?!?\n\n\n<0x10009:0x00090c00>Wolkenvögel können nachts nicht fliegen,\nweil sie im Dunkeln nicht gut sehen.\n\n\nEinzig speziell auf den Nachtflug trainierte\nWolkenvögel sind dazu in der Lage, sich nachts\nim Wolkenmeer zurechtzufinden.\n\n<0x10009:0x00080400>Wenn du fliegen willst, musst du wohl oder übel\nbis Tagesanbruch warten!\n\n\nLeg dich einfach schlafen und im Nu geht\ndie Sonne auf! Bist du etwa nicht müde?")
/*<166>*/ 			temp_flags[16 /* 0x3 01 */] = true;
          		}
          	  case 1:
/*< 19>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*< 38>*/ 			switch (scene_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*< 39>*/ 				printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x000b0c00>Also, in der Schule ist dein Vogel auf keinen\nFall, du musst schon draußen suchen.\n\n\nIch muss ein paar Nachforschungen anstellen,\nich gebe dir Bescheid, wenn ich etwas\nherausfinde!")
          			  case 1:
/*< 20>*/ 				printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00000c06>Hey hey, was machst du denn noch hier?\n\n\n<0x10009:0x000c0c09>Ist das dein Ernst?!?<pause 20>\nDu hast deinen Vogel gerufen, und er ist\nnicht gekommen?!?\n<0x10009:0x00010c00>Dein Schutzvogel ist nicht gekommen...\n\nIch habe ja schon vieles gehört, aber so etwas\nhätte ich niemals für möglich gehalten...\n\n\n<0x10009:0x00080400>Du musst dir allerdings keine Sorgen machen,\nmein Freund. Ich werde einen Weg finden,\ndir zu helfen...\n\n<0x10009:0x000b0c00>Allerdings wird das etwas dauern...\nWie wäre es, wenn du dich inzwischen mal\nam Dorfplatz umhören würdest?")
/*< 21>*/ 				scene_flags[0 'Skyloft'][18 /* 0x3 04 */] = true;
          			}
          		  case 1:
/*< 36>*/ 			switch (scene_flags[35 /* 0x5 08 */]) {
          			  case 0:
/*< 37>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000c0405>Denk dran, wenn du Fragen zu den Vögeln hast,\nfrag mich, <color blue<Cuco>coloroff>.")
          			  case 1:
/*< 18>*/ 				printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x00090401>Morgen, <heroname>!\n\n\n\n<0x10009:0x00080400>Na, bist du auch bereit für die\n<color red<Vogelreiter-Zeremonie>coloroff> heute?\n\n\nDie anderen bereiten sich alle schon draußen\nauf dem Dorfplatz vor, aber du scheinst ja\ndie Ruhe selbst zu sein.\n\n<0x10009:0x000b0400>Aber dein <color red<karminroter Wolkenvogel >coloroff>ist ja auch\nein tolles Tier.\n\n\nIch habe die Vogelreiter-Zeremonie zwar beim\nletzten Mal gewonnen, aber ob mein Vogel eine\nChance gegen deinen hätte?\n\n<0x10009:0x00080400>Doch denk daran, ein Vogel ist nur so gut wie\nsein Reiter. Ich verbringe jeden Tag mit dem\nStudium der Vögel.\n\n<0x10009:0x000c0405>Wenn du also mal Fragen zu den Vögeln hast,\ndann ist <color blue<Cuco >coloroff>dein Mann!")
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
/*<138>*/ 			printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000006><color blue<Cuco>coloroff> sollte vor der <color red<Übungshalle >coloroff>neben\nder Ritterschule zu finden sein.")
          		  case 1:
/*< 27>*/ 			printf(/* textboxtype: 0, unk: 1, line: 64 */ "<0x10009:0x00080406>Wie?<pause 40>\nWohin <color blue<Bado >coloroff>unterwegs war?\n\n\n<0x10009:0x00000d00>Hat er wieder was ausgefressen?\n\n\n\n<0x10009:0x000c0400>Also, ich habe nichts gesehen, aber <color blue<Cuco>coloroff>...\nVielleicht weiß er etwas.\n\n\n<0x10009:0x00080e04>Da fällt mir ein, <color blue<Cuco>coloroff> hat dich vorhin gesucht<0x10006:0xfccd>...<0x10006:0x00cd>\nWahrscheinlich findest du ihn jetzt vor\nder <color red<Übungshalle>coloroff>.")
/*<136>*/ 			scene_flags[0 'Skyloft'][64 /* 0x9 01 */] = true;
          		}
          	  case 1:
/*< 25>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<134>*/ 			switch (scene_flags[63 /* 0x6 80 */]) {
          			  case 0:
/*<135>*/ 				printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x00010406>Was ist mit dir, <heroname>?\nDu siehst unruhig aus.\n\n\n<0x10009:0x00080d00>Das kann doch nicht sein!\n<pause 40>Dein <color red<Wolkenvogel>coloroff> ist verschwunden?\n\n\n<0x10009:0x000c0d12>Tut mir leid<0x10006:0xfccd>...<0x10006:0x00cd>\nIch war bis eben in der Schule, ich habe\nnichts mitbekommen.")
          			  case 1:
/*<142>*/ 				set_camera(14, 0)
/*<140>*/ 				make_actor_do_something(0, 0)
/*<132>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x000a0e56><0x10008:0xffcd>Eigentlich ist das Aufschließen der Tür nicht meine\nAufgabe. Und trotzdem habe ich mich überreden lassen...")
/*<143>*/ 				set_camera(-1, 0)
/*<141>*/ 				make_actor_do_something(1, 0)
/*< 24>*/ 				printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x00010406>Was ist mit dir, <heroname>?\nDu siehst unruhig aus.\n\n\n<0x10009:0x00080d00>Das kann doch nicht sein!\n<pause 40>Dein <color red<Wolkenvogel>coloroff> ist verschwunden?\n\n\n<0x10009:0x000c0d12>Tut mir leid<0x10006:0xfccd>...<0x10006:0x00cd>\nIch war bis eben in der Schule, ich habe\nnichts mitbekommen.")
/*<133>*/ 				scene_flags[0 'Skyloft'][63 /* 0x6 80 */] = true;
          			}
          		  case 1:
/*<129>*/ 			switch (scene_flags[62 /* 0x6 40 */]) {
          			  case 0:
/*<131>*/ 				printf(/* textboxtype: 0, unk: 0, line: 65 */ "<0x10009:0x00080900>Wenn du die <color red<Vogelreiter-Zeremonie >coloroff>gewinnst,\nerreichst du wie ich die <color red<Oberstufe>coloroff> und kannst\nRitter werden!")
          			  case 1:
/*< 23>*/ 				printf(/* textboxtype: 0, unk: 0, line: 62 */ "<0x10009:0x00080901>Hallo, <heroname>!\nStreng dich bei der <color red<Vogelreiter-\nZeremonie >coloroff>heute ordentlich an!\n\n<0x10009:0x00000400>Wenn du gewinnst, kommst du wie ich\nin die <color red<Oberstufe>coloroff> und kannst <color red<Ritter\n>coloroff>werden!\n\n<0x10009:0x00080900>Dann darfst du auch so eine schicke\n<color red<Ritter-Uniform >coloroff>wie ich tragen!\nDie würde dir sicher gut stehen!\n\n<0x10009:0x000b0713>Wenn auch nicht so gut\nwie IHM...")
/*<130>*/ 				scene_flags[0 'Skyloft'][62 /* 0x6 40 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_100_13() {
/*<150>*/ 	start()
/*<151>*/ 	printf(/* textboxtype: 0, unk: 0, line: 68 */ "<0x10009:0x00000001>Sieh dir mal diese Statue an. Niemand weiß,\nwie lang sie schon hier steht.\n\n\nSchade, dass das eine Auge fehlt...\n\n\n\nDrücke (^) und sieh dir die Statue ruhig etwas\nnäher an!<0x10011:0x08cd>")
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
/*<158>*/ 		printf(/* textboxtype: 0, unk: 1, line: 70 */ "<0x10009:0x00000004>Mhmm...\nDas wird heute wieder ein leckeres Süppchen!")
          	  case 1:
/*<153>*/ 		printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x00000002>Oh, dieses Kind!\nGleich gibt's Essen und er treibt sich wieder\nsonst wo herum!\n\nJagt bestimmt wieder irgendwelche\nKrabbelviecher...")
          	}
          }

          void entrypoint_100_15() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 0, unk: 0, line: 71 */ "<0x10009:0x00000007>Wo willst du denn damit hin?\n\n\n\n<0x10009:0x00001200>Mach keinen Unsinn! Hast du nichts\nanderes zu tun?")
          }

          void entrypoint_100_16() {
/*<159>*/ 	start()
/*<186>*/ 	switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          	  case 0:
/*<188>*/ 		printf(/* textboxtype: 0, unk: 1, line: 76 */ "<0x10009:0x00080909>Ah, <heroname>!\nVielen Dank, dank dir habe ich mein\nGlück gefunden!\n\nEr geht heute Abend wieder auf Patrouille!\nNiemand hat ihn darum gebeten, er tut\nes einfach!\n\n<0x10009:0x000e090a>Ach, ist er nicht wundervoll?")
          	  case 1:
/*<184>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<187>*/ 			printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00000e12>Was soll ich nur mit dem Brief von Rax\nmachen?\n\n\n<0x10009:0x000b0e00>Was würde wohl Cuco denken, wenn er\ndavon wüsste...")
          		  case 1:
/*<180>*/ 			switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          			  case 0:
/*<189>*/ 				switch (zone_temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
          					flw_185:
/*<185>*/ 					switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          					  case 0:
          					  case 1:
/*<182>*/ 						printf(/* textboxtype: 0, unk: 0, line: 74 */ "<0x10009:0x00080d57>Du willst reden?\nHat das nicht Zeit bis morgen?")
/*<190>*/ 						zone_temp_flags[16 /* 0x3 01 */] = true;
          					}
          				  case 1:
/*<181>*/ 					printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x000a0e57>Eine Unverschämtheit, sich mitten in der Nacht\nins Zimmer einer Dame zu schleichen!\n\n\nIch will jetzt baden! Hättest du also\ndie Güte, aus meinem Zimmer zu\nverschwinden, <heroname>?!?\n\n<0x10009:0x000c0e14>Allerdings scheint das Bad im Moment noch\nbesetzt zu sein... Wer braucht da drinnen\nnur so lange?")
/*<183>*/ 					switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          					  case 0:
          						goto flw_185
          					  case 1:
          					}
          				}
          			  case 1:
/*<160>*/ 				printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x000c0d14>Ich kann nicht glauben, dass Zelda durch\ndie Wolkendecke gestürzt ist...\nSie ist doch eine so gute Vogelreiterin!\n\n<0x10009:0x000a0d06>Ein Ungeheuer? Bist du sicher, dass du nicht\nnoch unter Schock stehst?")
          			}
          		}
          	}
          }

          void entrypoint_100_17() {
/*< 40>*/ 	start()
/*< 41>*/ 	printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x00010002><0x30001:0x><heroname>!<0x1000D:0x1906>")
/*<120>*/ 	set_camera(9, 0)
/*<121>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "Wenn du zum Dorfplatz willst, nimm\nden Ausgang hier unten.\n\n\n<0x10009:0x00090400>Die Tür oben ist noch abgeschlossen.")
/*<123>*/ 	set_camera(11, 0)
/*<122>*/ 	printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x000c0c16>Warum braucht denn unsere Küchendame heute\nso lange mit dem Aufschließen? Ich werde mal\nmit ihr reden müssen!")
          }

          void entrypoint_100_18() {
/*< 68>*/ 	start()
/*< 88>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*< 89>*/ 		switch (story_flags[28 /* us: 805A9ADA 0x10, jp: 805ACD5A 0x10 */]) {
          		  case 0:
/*< 90>*/ 			printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00000c05>Ein Tipp noch, bevor du dich an gefährliche\nOrte wagst.\n\n\n<color red<Bete zur Göttin und speichere>coloroff>, bevor du\ndich aufmachst.\n\n\n<color red<Statuen>coloroff>, an denen du beten kannst, werden auf\nder Karte gezeigt.")
          		  case 1:
/*<278>*/ 			printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x000c0c05>Am Wasserfall wurden in letzter Zeit\ngefährliche Kreaturen gesehen, du solltest\nalso ein <color red<Schwert>coloroff> oder so etwas mitnehmen...\n\n<0x10013:0x><0x10009:0x00090c00><0x1000A:0x002000cd>Frag doch mal den <color blue<Schwertmeister>coloroff> hier in\nder Übungshalle, ob er dir ein Schwert leiht.")
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
/*< 69>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00080401>Gut, dass du hier bist, <heroname>.\nIch habe dich schon gesucht!")
          			flw_71:
/*< 71>*/ 			printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x00090c00>Ich habe mich wegen deines\nWolkenvogels umgehört.\n\n\n<0x10009:0x00000c00>Und als ich mit Grus hier geredet habe,\nhat er sich seltsam verhalten...")
/*< 73>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 0, 'next': 126, 'param3': 16}
/*<126>*/ 			set_camera(12, 0)
/*<155>*/ 			make_actor_do_something(0, 0)
/*<128>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 100, 'next': 74, 'param3': 17}
/*< 74>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x0c000812>Verzeih mir, <heroname>!\n\n\n\n<0x10009:0x0c000800>Ich wollte es dir schon früher sagen<0x10006:0xfbcd>...<0x10006:0x00cd>\nAber dann hätte <color blue<Bado>coloroff> es ganz bestimmt\nherausgefunden...")
/*<196>*/ 			make_actor_do_something(1, 12)
/*< 75>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 127, 'param3': 16}
/*<127>*/ 			set_camera(13, 0)
/*< 76>*/ 			printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x00000c16>Anscheinend hat <color blue<Bado >coloroff>ihn ordentlich\neingeschüchtert...")
/*<124>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 12, 'next': 125, 'param3': 17}
/*<125>*/ 			printf(/* textboxtype: 0, unk: 1, line: 58 */ "<0x10009:0x00080c00>Los...<pause 35> Spuck's schon aus!")
/*< 77>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 78, 'param3': 16}
/*< 78>*/ 			printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10009:0x0c070e11>Als ich vorhin den Speisesaal ein wenig\naufgeräumt habe, kamen Bado und die\nbeiden anderen rein...\n\n<0x10009:0x0c000800>Sie haben mich gar nicht beachtet und\nbegannen einen Plan auszuhecken, um\ndeinen Wolkenvogel zu <color red<verstecken>coloroff>.\n\n<0x10009:0x0c000800>Ich wollte mich wegschleichen, um dich\nzu warnen...\n\n\n<0x10009:0x0c010e00>Aber da hat mich Bado entdeckt...\n\n\n\n<0x10009:0x0c070e00>Wenn ich etwas verrate, würde ich nie\nwieder fliegen, hat er gesagt...")
/*< 79>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 80, 'param3': 16}
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00090c00><color blue<Bado>coloroff> hatte also anscheinend den Plan,\nsich deinen Vogel zu schnappen und ihn\nbeim <sound 4><color red<Wasserfall>coloroff> zu verstecken.\n\n<0x10009:0x00080c00>Hm, der Wasserfall<0x10006:0xfbcd>...<0x10006:0x00cd>\n<pause 40>Gib mir doch mal kurz die <color red<Karte>coloroff>...")
/*< 84>*/ 			scene_flags[0 'Skyloft'][14 /* 0x0 40 */] = true;
/*<279>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
          				flw_283:
/*<283>*/ 				scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<284>*/ 				scene_flags[0 'Skyloft'][117 /* 0xF 20 */] = true;
/*<282>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 82, 'param3': 30}
/*< 82>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "Da muss er sein, beim <color red<Wasserfall>coloroff>!\nIch habe ihn mit (X) markiert.")
/*<268>*/ 				{'type': 'type3', 'subType': 4, 'param1': 100, 'param2': 256, 'next': 81, 'param3': 30}
/*< 81>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 286, 'param3': 34}
/*<286>*/ 				switch (temp_flags[54 /* 0x7 40 */]) {
          				  case 0:
/*< 83>*/ 					printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00000404>Du weißt, wie die Karte funktioniert?\nDrücke (-), und du siehst eine Karte\ndeiner Umgebung!<0x10011:0x02cd>\n\n<0x10009:0x00080400>Wenn du dich verlaufen hast, drücke\nalso einfach (-)!<0x10011:0x02cd>")
          					flw_85:
/*< 85>*/ 					{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 86, 'param3': 16}
/*< 86>*/ 					printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x0c000819>Es tut mir so leid, <heroname>!\nIch bin so ein Feigling...\nEs tut mir so schrecklich leid!")
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
/*<101>*/ 			printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x00000c01><0x30001:0x><heroname>!\nSo ein Glück!")
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
/*< 55>*/ 			printf(/* textboxtype: 1, unk: 2, line: 33 */ "<0x10009:0x00000004>Drücke (-), um die Statue der Göttin\nauf der <color red<Karte>coloroff> zu finden.<0x10011:0x02cd>")
          		  case 1:
/*<256>*/ 			switch (scene_flags[117 /* 0xF 20 */]) {
          			  case 0:
/*<257>*/ 				printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x00000004>Was ist los, <heroname>?<pause 40>\n<0x10009:0x00001100>Was?!? Dein Vogel?<pause 50>\nEr ist<0x10006:0xfbcd>...<0x10006:0x00cd>weg?\n\n<0x10009:0x00111100>Oh nein!\nIch hatte mich so darauf gefreut,\ndeinen roten Vogel fliegen zu sehen!\n\nTut mir leid, ich habe keine Ahnung,\nwo er sein könnte<0x10006:0xfbcd>...<0x10006:0x00cd>\n\n\n<0x10009:0x000a1100>Aber<0x10006:0xfbcd>...<0x10006:0x00cd> Von der Statue der Göttin hat\nman den besten Ausblick über das Dorf,\nsieh dich doch da mal um.")
/*<258>*/ 				scene_flags[0 'Skyloft'][45 /* 0x4 20 */] = true;
          			  case 1:
/*<244>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 53, 'param3': 31}
/*< 53>*/ 				printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x00000004>Was ist los, <heroname>?<pause 40>\n<0x10009:0x00001100>Was?!? Dein Vogel?<pause 50>\nEr ist<0x10006:0xfbcd>...<0x10006:0x00cd>weg?\n\n<0x10009:0x00111100>Oh nein!\nIch hatte mich so darauf gefreut,\ndeinen roten Vogel fliegen zu sehen!\n\nTut mir leid, ich habe keine Ahnung,\nwo er sein könnte<0x10006:0xfbcd>...<0x10006:0x00cd>\n\n\n<0x10009:0x000a1100>Aber<0x10006:0xfbcd>...<0x10006:0x00cd> Von der Statue der Göttin hat\nman den besten Ausblick über das Dorf,\nsieh dich doch da mal um.")
/*< 54>*/ 				scene_flags[0 'Skyloft'][45 /* 0x4 20 */] = true;
/*<238>*/ 				scene_flags[0 'Skyloft'][117 /* 0xF 20 */] = true;
/*<237>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 255, 'param3': 30}
/*<255>*/ 				printf(/* textboxtype: 0, unk: 1, line: 91 */ "Die <color red<Statue der Göttin>coloroff> ist die große Statue im\nNorden des Wolkenhorts, an der mit (X)\nmarkierten Stelle.")
/*<266>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 256, 'next': 239, 'param3': 30}
/*<239>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 242, 'param3': 34}
/*<242>*/ 				switch (scene_flags[116 /* 0xF 10 */]) {
          				  case 0:
          				  case 1:
/*<243>*/ 					scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<240>*/ 					printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x00000404>Du weißt, wie man eine Karte liest, oder?\nDrücke (-), und du siehst eine Karte der\nUmgebung!<0x10011:0x02cd> Wenn du dich verlaufen hast,\nschau auf die Karte!<0x10011:0x02cd>")
/*<241>*/ 					story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          				}
          			}
          		}
          	  case 1:
/*< 49>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*< 52>*/ 			printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x000a0705>Ich bin schon gespannt, wie ihr euch schlagen\nwerdet, dein roter Vogel und du!")
          		  case 1:
/*<  1>*/ 			printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000001>Hey, <heroname>! Bald beginnt die\nVogelreiter-Zeremonie!\n\n\nLetztes Mal hat <color blue<Cuco>coloroff> um Federbreite gewonnen,\ndas war vielleicht ein Schauspiel!\n\n\n<0x10009:0x000a0700>Heute ist dein roter Wolkenvogel mit dabei!\n<pause 40>Viel Glück, ich bin schon sehr gespannt!")
/*< 51>*/ 			scene_flags[0 'Skyloft'][44 /* 0x4 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_19() {
/*< 91>*/ 	start()
/*<109>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 197, 'param3': 32}
/*<197>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3073, 'param2': 256, 'next': 92, 'param3': 13}
/*< 92>*/ 	printf(/* textboxtype: 0, unk: 0, line: 47 */ "<0x10009:0x00000002><0x10008:0x02cd>Hey!<0x1000D:0x1906> <0x30001:0x><heroname>!")
/*<108>*/ 	set_camera(2, 0)
/*<110>*/ 	make_actor_do_something(2, 12)
/*<139>*/ 	printf(/* textboxtype: 0, unk: 0, line: 59 */ "<0x10008:0x02cd>Hier sind wir!<0x10008:0x00cd>\n\n\n\n<0x1000A:0x000300cd>Wir sprechen gerade von deinem Wolkenvogel,\nkomm her!")
/*<111>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 93, 'param3': 42}
/*< 93>*/ 	scene_flags[0 'Skyloft'][54 /* 0x7 40 */] = true;
          }

          void entrypoint_100_02() {
/*<  2>*/ 	start()
/*< 28>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 29>*/ 		printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00000003>Was ist mit deinem Wolkenvogel?\n\n\n\n<0x10009:0x00100e00>Ich bin gerade beschäftigt, hat das nicht Zeit\nbis später?")
          	  case 1:
/*<176>*/ 		switch (scene_flags[22 /* 0x3 40 */]) {
          		  case 0:
/*<177>*/ 			printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000001>Die <color red<Vogelreiter-Zeremonie >coloroff>beginnt bald,\nalso trödle hier nicht herum, sondern mach\ndich auf den Weg!")
          		  case 1:
/*<  3>*/ 			printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00000002>Wo steckt nur dieser <color blue<Grus>coloroff>?\nEr sollte mir <color red<Fässer>coloroff> bringen, aber er will\neinfach nicht beikommen...\n\n<0x10009:0x00100f00>Wo bleibt er nur?")
          		}
          	}
          }

          void entrypoint_100_03() {
/*< 32>*/ 	start()
/*< 33>*/ 	printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10012:0x00000001>Gebieter...\nIch spüre, dass sich am Ende dieses Lichtstrahls\nHinweise zu den drei Flammen befinden.\n\nIch würde daher empfehlen, ihn näher zu untersuchen.")
/*<163>*/ 	story_flags[195 /* us: 805A9AEC 0x20, jp: 805ACD6C 0x20 */] = true;
          }

          void entrypoint_100_20() {
/*< 94>*/ 	start()
/*< 95>*/ 	printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x00000004>Aha! <0x30001:0x><heroname>!")
/*< 96>*/ 	printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x000c0c05>Am Wasserfall wurden in letzter Zeit\ngefährliche Kreaturen gesehen, du solltest\nalso ein <color red<Schwert>coloroff> oder so etwas mitnehmen...\n\n<0x10013:0x><0x10009:0x00090c00><0x1000A:0x002000cd>Frag doch mal den <color blue<Schwertmeister>coloroff> hier in\nder Übungshalle, ob er dir ein Schwert leiht.")
          }

          void entrypoint_100_04() {
/*<  4>*/ 	start()
/*< 10>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 66>*/ 		switch (scene_flags[53 /* 0x7 20 */]) {
          		  case 0:
/*< 67>*/ 			printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00000005>Wie? Du willst mich noch etwas fragen?\nWorüber soll ich dir denn Auskunft geben?\n[1-]Wo ist mein\nWolkenvogel?[2-]Was ist mit\nBado?")
          			flw_16:
/*< 16>*/ 			switch (choice(2)) {
          			  case 0:
/*< 62>*/ 				printf(/* textboxtype: 0, unk: 2, line: 19 */ "<0x10009:0x00000012>Nun, ich kann dir leider auch nicht sagen,\nwo er gerade ist...")
/*< 65>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
          			  case 1:
/*< 63>*/ 				printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00000004><color blue<Bado>coloroff> wollte sich den Platz ansehen, auf dem\ndie <color red<Vogelreiter-Zeremonie >coloroff>stattfinden soll.")
/*< 64>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
/*<234>*/ 				entrypoint_100_59();
          			}
          		  case 1:
/*<263>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
          				flw_61:
/*< 61>*/ 				printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000005>Hm? Was ist los?\nDu siehst etwas mitgenommen aus...\n\n\nDein Wolkenvogel ist verschwunden?\n\n\n\n<pause 50>Also...<sound 4> Ich habe ihn <color red<gesehen>coloroff>, als er vor <color blue<Bado\n>coloroff>und den beiden anderen Rabauken geflohen ist.\n[1-]Wo ist mein\nWolkenvogel?[2-]Was ist mit\nBado?")
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
/*< 58>*/ 			printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000003>Ich bin bald mit der Tür fertig, also lass mich\nhier noch etwas in Ruhe arbeiten. Aber wenn\ndu was wissen willst, frag ruhig.\n[1-]Wo ist\nZelda?[2-]Die Zeremonie...")
/*<  9>*/ 			switch (choice(2)) {
          			  case 0:
/*< 60>*/ 				printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000005>Du willst wissen, wo <color blue<Zelda>coloroff> gerade ist?\n<pause 30>Ja, ich habe sie gesehen. Sie war mit Direktor\n<color blue<Gepora >coloroff>an der Statue der Göttin.\n\nDie Statue der Göttin? <pause 30>Wo die ist?\nDrücke einfach <icon 34> und sieh dich um!<0x10011:0x08cd>")
          			  case 1:
/*< 59>*/ 				printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00000003>Hast du dich auf die <color red<Vogelreiter-Zeremonie\n>coloroff>auch gut vorbereitet?\n\n\nWenn du gewinnst, wirst du für die <color red<Oberstufe\n>coloroff>der Ritterschule zugelassen und danach in den\n<color red<Ritterorden >coloroff>aufgenommen.\n\nDie Ritter haben die ehrenvolle Aufgabe,\nden Frieden des Wolkenhorts zu wahren.\nWürde mich freuen, dich als Ritter zu sehen.")
          			}
          		  case 1:
/*<  5>*/ 			printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00000001>Morgen, <heroname>!\nHast du dich gut ausgeruht?\n\n\nTja, ich schätze mal, du hast wegen der\n<color red<Vogelreiter-Zeremonie>coloroff> kein Auge\nzugekriegt, was?\n\nWie? Ich?<pause 40> Ich repariere diese Tür...\n\n\n\nSie knarrt nämlich, und heute ist doch der Tag\nder heiligen Zeremonie, oder? Bis dahin wollte\nich fertig sein...\n\n<0x10009:0x000c0c00>Na, da kann man nichts machen. Und du, hast\ndu nach dem Aufstehen auch fleißig zur\nGöttin <color red<gebetet>coloroff>?\n\n<0x1000A:0x000600cd>Wenn du dich dieser <color red<Statue>coloroff> zuwendest und\nbetest, wird alles, was du bisher getan\nhast, <color red<gespeichert>coloroff>.\n\n<0x10009:0x000c0c00><0x1000A:0xffff00cd>Statuen wie diese gibt es überall im Wolkenhort.\n\n\n\nWenn du eine findest, solltest du deine\nEhrerbietung mit einem kleinen Gebet\nerweisen.\n\n<0x10009:0x00000008><color red<Verlasse dich auf die Göttin>coloroff>.")
/*< 57>*/ 			scene_flags[0 'Skyloft'][52 /* 0x7 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_21() {
/*< 97>*/ 	start()
/*< 98>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*<100>*/ 		printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x0c000800><0x10006:0xfbcd>...<0x10006:0x00cd>\nSchaffst du es noch rechtzeitig?\nAch, <heroname>...\n\n<0x10009:0x0c000e06>Ich bin ein Feigling<0x10006:0xfbcd>...<0x10006:0x00cd>\nEs tut mir so leid...")
          	  case 1:
/*< 99>*/ 		printf(/* textboxtype: 0, unk: 0, line: 56 */ "<0x10009:0x0c010900><0x10006:0xfbcd>...<0x10006:0x00cd>")
          	}
          }

          void entrypoint_100_56() {
/*<178>*/ 	start()
/*<204>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<205>*/ 		printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000002>Pass ein bisschen besser auf! Was hast du\neigentlich in der Schule gelernt? So wirst\ndu es nie zum Ritter bringen!")
          	  case 1:
/*<179>*/ 		printf(/* textboxtype: 0, unk: 0, line: 83 */ "<0x10009:0x00000002>Sei vorsichtig! Zum Glück sind wir Ritter\nstets wachsam!")
          	}
          }

          void entrypoint_100_05() {
/*<  6>*/ 	start()
/*<221>*/ 	switch (scene_flags[61 /* 0x6 20 */]) {
          	  case 0:
/*< 34>*/ 		switch (scene_flags[58 /* 0x6 04 */]) {
          		  case 0:
/*<104>*/ 			printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x000f1300>Verflucht! Mein <color blue<Wolken-Hirschkäfer>coloroff>!\nFast hätte ich ihn gehabt...\n\n\n<0x10009:0x000a0900>Ohne Schmetterlingsnetz sind Insekten\nunmöglich zu fangen.\n\n\nWenn ich nur das Netz, das ich in <color red<Terris Laden\n>coloroff>gekauft habe, nicht weggeworfen hätte... <0x10009:0x00110200>Ach...")
          		  case 1:
/*<103>*/ 			printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00000004>Für eine <color green<Rollattacke>coloroff> musst du zuerst rennen...\n\n\n\nUnd dann kann's losgehen mit der <color green<Rollattacke>coloroff>!\nRUMMS! Wenn du richtig triffst, kannst du\nmit ihr Dinge aus Bäumen schütteln. Na?<pause 30>\nVersuch's mal!")
/*<225>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 227, 'param3': 31}
/*<227>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': -1, 'param3': 60}
          		}
          	  case 1:
/*<223>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 222, 'param3': 31}
/*<222>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000001><0x1000D:0x1906>Warte mal, <heroname>!\n\n\n\n<0x1000D:0x0500>Tust du mir 'nen Gefallen?\n\n\n\nDer Baum da... Kannst du auf ihn <color green<zusprinten\n>coloroff>und eine <color green<Rollattacke >coloroff>machen?\n\n\nRenne auf den Baum zu, <color green<rolle >coloroff>und RUMMS!<pause 30>\nBitte mach's! <pause 30>Bittebittebitte!")
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
/*<212>*/ 				printf(/* textboxtype: 0, unk: 0, line: 80 */ "<0x10009:0x00000001>Die Stimme aus der Toilette ist nicht mehr\nzu hören... Wer das wohl war?")
          			  case 1:
/*<202>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 201, 'param3': 31}
/*<201>*/ 				printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00000001>Die letzten <color red<Nächte>coloroff> habe ich eine Stimme aus\nder <color red<Toilette>coloroff> gehört.\n\n\nWer könnte das sein? Wenn derjenige\nwenigstens leise wäre...")
          			}
          		  case 1:
          			flw_214:
/*<214>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<216>*/ 				printf(/* textboxtype: 0, unk: 1, line: 82 */ "<0x10009:0x00000001>Ich habe Bado schon eine Weile nicht\nmehr gesehen. Wo er wohl steckt?")
          			  case 1:
/*<213>*/ 				switch (story_flags[4 /* us: 805A9AD9 0x20, jp: 805ACD59 0x20 */]) {
          				  case 0:
/*<215>*/ 					printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000001>Wie geht's dir? Denk dran, dein eigenes,\nbequemes <color red<Bett>coloroff> steht in deinem Zimmer\nfür dich bereit!")
          				  case 1:
/*<171>*/ 					printf(/* textboxtype: 0, unk: 0, line: 77 */ "<0x10009:0x00000001>Oh, gehst du?<pause 20>\nDann muss ich jetzt wohl weniger kochen!\n\n\n<0x10009:0x000a0c00>Pass auf dich auf!\n\n\n\n<0x10009:0x00090800>Komm hin und wieder hierher zurück, denn es\ngeht nichts über ein nettes Schläfchen im\neigenen Bett!")
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
/*<209>*/ 		printf(/* textboxtype: 0, unk: 0, line: 86 */ "<0x10009:0x00000002>Vorsicht, Neuanwärter! Wenn du dich\nso anstellst, wirst du bestimmt kein\nguter Ritter werden!\n\nUnd vergiss nicht, dass nur wir Ritter\nvon den Luftrettern dazu befugt sind,\nnachts Wolkenvögel zu reiten. Schreib\ndir das hinter die Ohren!")
          	  case 1:
/*<208>*/ 		printf(/* textboxtype: 0, unk: 1, line: 85 */ "<0x10009:0x00000002>Du solltest besser aufpassen, Junge!\nIn der Nacht ist es dunkel, also achte\ndarauf, wohin du trittst.\n\nUnd vergiss nicht, dass nur wir Ritter\nvon den Luftrettern dazu befugt sind,\nnachts Wolkenvögel zu reiten. Schreib\ndir das hinter die Ohren!")
          	}
          }

          void entrypoint_100_58() {
/*<228>*/ 	start()
/*<232>*/ 	switch (scene_flags[116 /* 0xF 10 */]) {
          	  case 0:
          	  case 1:
/*<233>*/ 		scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<230>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 267, 'param3': 30}
/*<267>*/ 		printf(/* textboxtype: 1, unk: 0, line: 90 */ "Der mit (X) markierte Ort im Süden des\nWolkenhorts ist der Dorfplatz. Dort findet\nheute die <color red<Vogelreiter-Zeremonie >coloroff>statt!")
/*<264>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 256, 'next': 231, 'param3': 30}
/*<231>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 229, 'param3': 34}
/*<229>*/ 		printf(/* textboxtype: 0, unk: 0, line: 92 */ "<0x10009:0x00000404>Du weißt, wie die Karte funktioniert?\nDrücke (-), und du siehst eine Karte\ndeiner Umgebung!<0x10011:0x02cd> Nicht vergessen!<0x10011:0x02cd>")
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
/*<203>*/ 				printf(/* textboxtype: 0, unk: 1, line: 79 */ "<0x10009:0x00000001>Ich höre keine Stimme mehr aus der Toilette.\n\n\n\nDafür weint Rax in Bados Zimmer jetzt jede\nNacht im Schlaf. Kann man denn da\nnichts tun?")
          			  case 1:
          				goto flw_212
          			}
          		  case 1:
/*<217>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<218>*/ 				printf(/* textboxtype: 0, unk: 1, line: 82 */ "<0x10009:0x00000001>Ich habe Bado schon eine Weile nicht\nmehr gesehen. Wo er wohl steckt?")
          			  case 1:
/*<219>*/ 				switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          				  case 0:
/*<220>*/ 					printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000001>Wie geht's dir? Denk dran, dein eigenes,\nbequemes <color red<Bett>coloroff> steht in deinem Zimmer\nfür dich bereit!")
          				  case 1:
/*<162>*/ 					printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00000b05>Puh, wenn die Kinder abends endlich schlafen,\nkehrt hier zum Glück Ruhe ein...\n\n\n<0x10009:0x000a0800>Ich wünsche dir alles Gute für deine Suche\nnach Zelda!")
          				}
          			}
          		}
          	  case 1:
/*< 12>*/ 		printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00000003>Hier ist geschlossen!\nNachts kommen hier sonst gefährliche\nUngeheuer herein!\n\nWenn du nachts nach draußen willst,\nnimm die Tür im 1. Stock!\n\n\nIch seh dir doch an, dass du dich auf die Suche\nnach Zelda machen willst.\n\n\nAber hier im Wolkenhort geht nachts eigentlich\nniemand vor die Tür...")
          	}
          }

          void entrypoint_100_24() {
/*<105>*/ 	start()
/*<106>*/ 	printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00000008>Hehe!<pause 30> Gut gemacht! Da ist er!\nMein <color blue<Wolken-Hirschkäfer>coloroff>!\n\n\nHaaaaaalt!")
/*<107>*/ 	scene_flags[0 'Skyloft'][58 /* 0x6 04 */] = true;
          }

          void entrypoint_100_59() {
/*<269>*/ 	start()
/*<273>*/ 	switch (scene_flags[116 /* 0xF 10 */]) {
          	  case 0:
          		flw_270:
/*<270>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "Dann ist er wohl Richtung Platz...\nDer direkte Weg wäre ja normalerweise\nhier entlang.\n\nJetzt müsstest du das Tor unten nehmen,\nich bin hier noch nicht fertig. Macht's dir\nwas aus, um die Schule herumzugehen?\nSchau zur Not mit (-) auf die Karte!<0x10011:0x02cd>")
/*<275>*/ 		story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          	  case 1:
/*<274>*/ 		scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<271>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 277, 'param3': 30}
/*<277>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "Oh, versuchst du immer noch, zum Südende\nzu kommen? Die (X) Markierung auf deiner\nKarte, das ist der Dorfplatz.\n\nDa soll heute die <color red<Vogelreiter-Zeremonie>coloroff>\nstattfinden, du solltest tunlichst versuchen,\nihn zu finden!")
/*<276>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 256, 'next': 272, 'param3': 30}
/*<272>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 270, 'param3': 34}
          		goto flw_270
          	}
          }

          void entrypoint_100_25() {
/*<112>*/ 	start()
/*<113>*/ 	switch (zone_temp_flags[13 /* 0x0 20 */]) {
          	  case 0:
/*<119>*/ 		printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x000c1252><0x10008:0x02cd>Jetzt reicht's!<0x1000D:0x1906>\n\n\n\n<0x1000A:0x000f00cd>Ich rede mit dem Direktor und lasse dich von\nder Schule werfen!")
          	  case 1:
/*<114>*/ 		switch (zone_temp_flags[12 /* 0x0 10 */]) {
          		  case 0:
/*<117>*/ 			printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x000c1207><0x10008:0x01cd>Was ist das denn für ein Benehmen!<0x1000D:0x1906>\nDu frecher Bengel!\n\n\n<0x1000A:0x000f00cd>Aber mach nur so weiter, wenn du eine\nWoche lang kein Essen haben möchtest!")
/*<118>*/ 			zone_temp_flags[13 /* 0x0 20 */] = true;
          		  case 1:
/*<115>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x000c1206>Was machst du denn?!?<0x1000D:0x1906>\n\n\n\n<0x1000A:0x000f00cd>Das räumst du schön wieder auf!")
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
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 2, line: 33 */ "<0x10009:0x00000004>Drücke (-), um die Statue der Göttin\nauf der <color red<Karte>coloroff> zu finden.<0x10011:0x02cd>")
          		  case 1:
/*<246>*/ 			switch (scene_flags[117 /* 0xF 20 */]) {
          			  case 0:
/*<261>*/ 				printf(/* textboxtype: 0, unk: 1, line: 88 */ "<0x10009:0x00000057>Was ist los, <heroname>?\nWarum so aufgeregt?\n\n\nDein Vogel, <heroname>?\nAch, der seltene rote?\n<pause 40>Keine Ahnung<0x10006:0xfbcd>...<0x10006:0x00cd>\n\n<0x10009:0x00110200>Nein, hab ihn nicht gesehen.\n\n\n\n<0x10009:0x00090204>Von der Statue der Göttin hat man den\nbesten Ausblick über das Dorf, sieh\ndich doch da mal um.")
/*<262>*/ 				scene_flags[0 'Skyloft'][43 /* 0x4 08 */] = true;
          			  case 1:
/*<253>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 259, 'param3': 31}
/*<259>*/ 				printf(/* textboxtype: 0, unk: 1, line: 88 */ "<0x10009:0x00000057>Was ist los, <heroname>?\nWarum so aufgeregt?\n\n\nDein Vogel, <heroname>?\nAch, der seltene rote?\n<pause 40>Keine Ahnung<0x10006:0xfbcd>...<0x10006:0x00cd>\n\n<0x10009:0x00110200>Nein, hab ihn nicht gesehen.\n\n\n\n<0x10009:0x00090204>Von der Statue der Göttin hat man den\nbesten Ausblick über das Dorf, sieh\ndich doch da mal um.")
/*<260>*/ 				scene_flags[0 'Skyloft'][43 /* 0x4 08 */] = true;
/*<247>*/ 				scene_flags[0 'Skyloft'][117 /* 0xF 20 */] = true;
/*<245>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 254, 'param3': 30}
/*<254>*/ 				printf(/* textboxtype: 0, unk: 0, line: 89 */ "Die <color red<Statue der Göttin>coloroff> ist das große Denkmal im\nNorden des Wolkenhorts. Kennst du doch, oder?\nGeh einfach Richtung (X)!")
/*<265>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 256, 'next': 248, 'param3': 30}
/*<248>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 251, 'param3': 34}
/*<251>*/ 				switch (scene_flags[116 /* 0xF 10 */]) {
          				  case 0:
          				  case 1:
/*<252>*/ 					scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<249>*/ 					printf(/* textboxtype: 0, unk: 1, line: 94 */ "<0x10009:0x00000404>Wenn du dich mal verlaufen hast, drücke\neinfach (-), um eine Karte der Umgebung\nzu sehen.<0x10011:0x02cd> Das sollte dann weiterhelfen!<0x10011:0x02cd>")
/*<250>*/ 					story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          				}
          			}
          		}
          	  case 1:
/*< 44>*/ 		switch (scene_flags[42 /* 0x4 04 */]) {
          		  case 0:
/*< 45>*/ 			printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x000c0209>Ich würde auch gern bei der\nVogelreiter-Zeremonie als Vertreterin\nder Göttin einen furchtlosen Ritter treffen...")
          		  case 1:
/*<  8>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000001>Oh, <heroname>! Hallo!\nDer Wind heute ist günstig, was für ein Tag für\ndie Zeremonie!\n\n<0x10009:0x00110200>Wer wohl gewinnen wird?\nAlso ich tippe ja auf <color blue<Bado>coloroff>!\n\n\n<0x10009:0x000c0200>Der Sieger erhält von der Vertreterin\nder Göttin ein Geschenk.\n<0x10009:0x00000609>Hach, wie romantisch...")
/*< 43>*/ 			scene_flags[0 'Skyloft'][42 /* 0x4 04 */] = true;
          		}
          	}
          }

          void entrypoint_100_26() {
/*<144>*/ 	start()
/*<146>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*<147>*/ 		printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00090802>Danke, <heroname>!\nDas ist nett von dir. Eigentlich sollte\ndas ja <color blue<Grus >coloroff>erledigen, aber was soll's...\n\n<0x10009:0x000a0c00>Du hast heute einen wichtigen Tag vor dir und\nhast mir trotzdem geholfen... Vielen Dank!")
          	  case 1:
/*<145>*/ 		printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x000a0401>Hallo, <heroname>!\nKannst du mir mit etwas helfen?\n\n\n<0x10009:0x00100802>Eigentlich habe ich schon <color blue<Grus>coloroff> darum gebeten...\n\n\n\n<0x10009:0x00090400>Aber wo du nun schon hier bist...\nKönntest du mir bitte ein <color red<Fass >coloroff>bringen?")
          	}
          }

          void entrypoint_100_10() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 0, unk: 1, line: 34 */ "")
          }

