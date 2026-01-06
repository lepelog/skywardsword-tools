          void entrypoint_100_11() {
/*< 17>*/ 	start()
/*<172>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<176>*/ 		switch (temp_flags[16 /* 0x3 01 */]) {
          		  case 0:
/*<175>*/ 			printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00000004>Nachts kann man jedenfalls nicht\nfliegen!\n\n\nDu wirst dich ins Bett legen und bis\nmorgen schlafen müssen.")
          		  case 1:
/*<177>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 173, 'param3': 31}
/*<173>*/ 			printf(/* textboxtype: 1, unk: 0, line: 58 */ "<0x10009:0x00000001>Was machst du denn hier mitten in der\nNacht?!?\n\n\n<0x10009:0x000c0c09>Was? Du wolltest auf deinem\nWolkenvogel reiten?!?\n\n\n<0x10009:0x00090c00>Wolkenvögel können nachts nicht\nfliegen, weil sie im Dunkeln nicht gut\nsehen.\n\nEinzig speziell auf den Nachtflug\ntrainierte Wolkenvögel sind dazu in\nder Lage, sich nachts im Wolkenmeer\nzurechtzufinden.\n<0x10009:0x00080400>Wenn du fliegen willst, musst du wohl\noder übel bis Tagesanbruch warten!\n\n\nLeg dich einfach schlafen und im Nu\ngeht die Sonne auf! Bist du etwa nicht\nmüde?")
/*<174>*/ 			temp_flags[16 /* 0x3 01 */] = true;
          		}
          	  case 1:
/*< 19>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*< 38>*/ 			switch (scene_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*< 39>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000b0c00>Also, in der Schule ist dein Vogel auf\nkeinen Fall, du musst schon draußen\nsuchen.\n\nIch muss ein paar Nachforschungen\nanstellen, ich gebe dir Bescheid, wenn\nich etwas herausfinde!")
          			  case 1:
/*< 20>*/ 				printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00000c06>Hey hey, was machst du denn noch\nhier?\n\n\n<0x10009:0x000c0c09>Ist das dein Ernst?!?<pause 20>\nDu hast deinen Vogel gerufen, und er\nist nicht gekommen?!?\n\n<0x10009:0x00010c00>Dein Schutzvogel ist nicht gekommen...\n\n\n\nIch habe ja schon vieles gehört, aber\nso etwas hätte ich niemals für möglich\ngehalten...\n\n<0x10009:0x00080400>Du musst dir allerdings keine Sorgen\nmachen, mein Freund. Ich werde einen\nWeg finden, dir zu helfen...\n\n<0x10009:0x000b0c00>Allerdings wird das etwas dauern...\nWie wäre es, wenn du dich inzwischen\nmal am Dorfplatz umhören würdest?")
/*< 21>*/ 				scene_flags[0 'Skyloft'][18 /* 0x3 04 */] = true;
          			}
          		  case 1:
/*< 36>*/ 			switch (scene_flags[35 /* 0x5 08 */]) {
          			  case 0:
/*< 37>*/ 				printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x000c0405>Denk dran, wenn du Fragen zu den\nVögeln hast, frag mich, <color blue<Cuco>coloroff>.")
          			  case 1:
/*< 18>*/ 				printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00090401>Morgen, <heroname>!\n\n\n\n<0x10009:0x00080400>Na, bist du auch bereit für die\n<color red<Vogelreiter-Zeremonie>coloroff> heute?\n\n\nDie anderen bereiten sich alle schon\ndraußen auf dem Dorfplatz vor, aber\ndu scheinst ja die Ruhe selbst zu sein.\n\n<0x10009:0x000b0400>Aber dein <color red<karminroter Wolkenvogel >coloroff>ist\nja auch ein tolles Tier.\n\n\nIch habe die Vogelreiter-Zeremonie\nzwar beim letzten Mal gewonnen, aber\nob mein Vogel eine Chance gegen\ndeinen hätte?\n<0x10009:0x00080400>Doch denk daran, ein Vogel ist nur so\ngut wie sein Reiter. Ich verbringe\njeden Tag mit dem Studium der Vögel.\n\n<0x10009:0x000c0405>Wenn du also mal Fragen zu den Vögeln\nhast, dann ist <color blue<Cuco >coloroff>dein Mann!")
/*< 35>*/ 				scene_flags[0 'Skyloft'][35 /* 0x5 08 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_100_12() {
/*< 22>*/ 	start()
/*< 26>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*<145>*/ 		switch (scene_flags[64 /* 0x9 01 */]) {
          		  case 0:
/*<146>*/ 			printf(/* textboxtype: 1, unk: 0, line: 65 */ "<0x10009:0x00000006><color blue<Cuco>coloroff> sollte vor der <color red<Übungshalle >coloroff>neben\nder Ritterschule zu finden sein.")
          		  case 1:
/*< 27>*/ 			printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x00080406>Wie?<pause 40>\nWohin <color blue<Bado >coloroff>unterwegs war?\n\n\n<0x10009:0x00000d00>Hat er wieder was ausgefressen?\n\n\n\n<0x10009:0x000c0400>Also, ich habe nichts gesehen, aber\n<color blue<Cuco>coloroff>... Vielleicht weiß er etwas.\n\n\n<0x10009:0x00080e04>Da fällt mir ein, <color blue<Cuco>coloroff> hat dich vorhin\ngesucht<0x10006:0xfccd>...<0x10006:0x00cd>\nWahrscheinlich findest du ihn jetzt vor\nder <color red<Übungshalle>coloroff>.")
/*<144>*/ 			scene_flags[0 'Skyloft'][64 /* 0x9 01 */] = true;
          		}
          	  case 1:
/*< 25>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<141>*/ 			switch (scene_flags[63 /* 0x6 80 */]) {
          			  case 0:
/*<143>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00080e06><color blue<Cuco>coloroff> weiß über Vögel am besten\nBescheid. Ich habe ihn unten gesehen,\ngeh doch mal runter und frag ihn.")
          			  case 1:
/*<150>*/ 				set_camera(14, 0)
/*<148>*/ 				make_actor_do_something(0, 0)
/*<139>*/ 				printf(/* textboxtype: 1, unk: 0, line: 64 */ "<0x10009:0x000a0e56><0x10008:0xffcd>Eigentlich ist das Aufschließen der Tür nicht\nmeine Aufgabe. Und trotzdem habe ich mich\nüberreden lassen...")
/*<151>*/ 				set_camera(-1, 0)
/*<149>*/ 				make_actor_do_something(1, 0)
/*< 24>*/ 				printf(/* textboxtype: 1, unk: 0, line: 61 */ "<0x10009:0x00010406>Was ist mit dir, <heroname>?\nDu siehst unruhig aus.\n\n\n<0x10009:0x00080d00>Das kann doch nicht sein!\n<pause 40>Dein <color red<Wolkenvogel>coloroff> ist verschwunden? \n\n\n<0x10009:0x000c0d12>Tut mir leid<0x10006:0xfccd>...<0x10006:0x00cd>\nIch war bis eben in der Schule, ich habe\nnichts mitbekommen.")
/*<142>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00080e06><color blue<Cuco>coloroff> weiß über Vögel am besten\nBescheid. Ich habe ihn unten gesehen,\ngeh doch mal runter und frag ihn.")
/*<140>*/ 				scene_flags[0 'Skyloft'][63 /* 0x6 80 */] = true;
          			}
          		  case 1:
/*<136>*/ 			switch (scene_flags[62 /* 0x6 40 */]) {
          			  case 0:
/*<138>*/ 				printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x00080900>Wenn du die <color red<Vogelreiter-Zeremonie>coloroff>\ngewinnst, erreichst du wie ich die\n<color red<Oberstufe>coloroff> und kannst Ritter werden!")
          			  case 1:
/*< 23>*/ 				printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x00080901>Hallo, <heroname>!\nStreng dich bei der <color red<Vogelreiter-\nZeremonie >coloroff>heute ordentlich an!\n\n<0x10009:0x00000400>Wenn du gewinnst, kommst du wie ich\nin die <color red<Oberstufe>coloroff> und kannst <color red<Ritter\n>coloroff>werden!\n\n<0x10009:0x00080900>Dann darfst du auch so eine schicke\n<color red<Ritter-Uniform >coloroff>wie ich tragen!\nDie würde dir sicher gut stehen!\n\n<0x10009:0x000b0713>Wenn auch nicht so gut\nwie IHM...")
/*<137>*/ 				scene_flags[0 'Skyloft'][62 /* 0x6 40 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_100_13() {
/*<158>*/ 	start()
/*<159>*/ 	printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x00000001>Sieh dir mal diese Statue an. Niemand\nweiß, wie lang sie schon hier steht.\n\n\nSchade, dass das eine Auge fehlt...\n\n\n\nDrücke (C) und sieh dir die Statue\nruhig etwas näher an! <0x10011:0x06cd>")
          }

          void entrypoint_100_30() {
/*<180>*/ 	start()
/*<181>*/ 	set_camera(30, 0)
/*<183>*/ 	set_camera(31, 0)
/*<182>*/ 	{'type': 'type3', 'subType': 1, 'param1': 25, 'param2': 0, 'next': -1, 'param3': 40}
          }

          void entrypoint_100_14() {
/*<160>*/ 	start()
/*<165>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<166>*/ 		printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x00000004>Mhmm...\nDas wird heute wieder ein leckeres\nSüppchen!")
          	  case 1:
/*<161>*/ 		printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x00000002>Oh, dieses Kind!\nGleich gibt's Essen und er treibt sich\nwieder sonst wo herum!\n\nJagt bestimmt wieder irgendwelche\nKrabbelviecher...")
          	}
          }

          void entrypoint_100_15() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0, line: 70 */ "<0x10009:0x00000007>Wo willst du denn damit hin?\n\n\n\n<0x10009:0x00001200>Mach keinen Unsinn! Hast du nichts\nanderes zu tun?")
          }

          void entrypoint_100_16() {
/*<167>*/ 	start()
/*<194>*/ 	switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          	  case 0:
/*<196>*/ 		printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00080909>Ah, <heroname>!\nVielen Dank, dank dir habe ich mein\nGlück gefunden!\n\nEr geht heute Abend wieder auf\nPatrouille! Niemand hat ihn darum\ngebeten, er tut es einfach!\n\n<0x10009:0x000e090a>Ach, ist er nicht wundervoll?")
          	  case 1:
/*<192>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<195>*/ 			printf(/* textboxtype: 1, unk: 0, line: 74 */ "<0x10009:0x00000e12>Was soll ich nur mit dem Brief von Rax\nmachen?\n\n\n<0x10009:0x000b0e00>Was würde wohl Cuco denken, wenn er\ndavon wüsste...")
          		  case 1:
/*<188>*/ 			switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          			  case 0:
/*<197>*/ 				switch (zone_temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
          					flw_193:
/*<193>*/ 					switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          					  case 0:
          					  case 1:
/*<190>*/ 						printf(/* textboxtype: 1, unk: 0, line: 73 */ "<0x10009:0x00080d57>Du willst reden?\nHat das nicht Zeit bis morgen?")
/*<198>*/ 						zone_temp_flags[16 /* 0x3 01 */] = true;
          					}
          				  case 1:
/*<189>*/ 					printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x000a0e57>Eine Unverschämtheit, sich mitten in\nder Nacht ins Zimmer einer Dame zu\nschleichen!\n\nIch will jetzt baden! Hättest du also\ndie Güte, aus meinem Zimmer zu\nverschwinden, <heroname>?!?\n\n<0x10009:0x000c0e14>Allerdings scheint das Bad im Moment\nnoch besetzt zu sein... Wer braucht da\ndrinnen nur so lange?")
/*<191>*/ 					switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          					  case 0:
          						goto flw_193
          					  case 1:
          					}
          				}
          			  case 1:
/*<168>*/ 				printf(/* textboxtype: 1, unk: 0, line: 71 */ "<0x10009:0x000c0d14>Ich kann nicht glauben, dass Zelda\ndurch die Wolkendecke gestürzt ist...\nSie ist doch eine so gute\nVogelreiterin!\n<0x10009:0x000a0d06>Ein Ungeheuer? Bist du sicher, dass du\nnicht noch unter Schock stehst?")
          			}
          		}
          	}
          }

          void entrypoint_100_17() {
/*< 40>*/ 	start()
/*< 41>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00010002><heroname>!<0x1000D:0x1906>")
/*<127>*/ 	set_camera(9, 0)
/*<128>*/ 	printf(/* textboxtype: 1, unk: 0, line: 43 */ "Wenn du zum Dorfplatz willst, nimm\nden Ausgang hier unten.\n\n\n<0x10009:0x00090400>Die Tür oben ist noch abgeschlossen.")
/*<130>*/ 	set_camera(11, 0)
/*<129>*/ 	printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x000c0c16>Warum braucht denn unsere\nKüchendame heute so lange mit dem\nAufschließen? Ich werde mal mit ihr\nreden müssen!")
          }

          void entrypoint_100_18() {
/*< 70>*/ 	start()
/*< 91>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*< 92>*/ 		switch (story_flags[28 /* us: 805A9ADA 0x10, jp: 805ACD5A 0x10 */]) {
          		  case 0:
/*< 94>*/ 			printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00000c05>Ein Tipp noch, bevor du dich an\ngefährliche Orte wagst.\n\n\n<color red<Bete zur Göttin und speichere>coloroff>, bevor\ndu dich aufmachst.\n\n\n<color red<Statuen>coloroff>, an denen du beten kannst,\nwerden auf der Karte gezeigt.")
          		  case 1:
/*< 93>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x000c0c05>Am Wasserfall wurden in letzter\nZeit gefährliche Kreaturen gesehen,\ndu solltest also ein <color red<Schwert>coloroff> oder so\netwas mitnehmen...\n<0x10009:0x00090c00>Frag doch mal den <color blue<Schwertmeister>coloroff> hier\nin der Übungshalle, ob er dir ein\nSchwert leiht.")
/*< 95>*/ 			scene_flags[0 'Skyloft'][56 /* 0x6 01 */] = true;
          		}
          	  case 1:
/*<107>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 74, 'param3': 31}
/*< 74>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 199, 'param3': 32}
/*<199>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 20, 'next': 200, 'param3': 47}
/*<200>*/ 		set_camera(13, 0)
/*<201>*/ 		{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 100, 'next': 203, 'param3': 15}
/*<203>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 202, 'param3': 16}
/*<202>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 20, 'next': 72, 'param3': 48}
/*< 72>*/ 		switch (scene_flags[54 /* 0x7 40 */]) {
          		  case 0:
/*< 71>*/ 			printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00080401>Gut, dass du hier bist, <heroname>.\nIch habe dich schon gesucht!")
          			flw_73:
/*< 73>*/ 			printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00090c00>Ich habe mich wegen deines\nWolkenvogels umgehört.\n\n\n<0x10009:0x00000c00>Und als ich mit Grus hier geredet habe,\nhat er sich seltsam verhalten...")
/*< 75>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 0, 'next': 133, 'param3': 16}
/*<133>*/ 			set_camera(12, 0)
/*<163>*/ 			make_actor_do_something(0, 0)
/*<135>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 100, 'next': 76, 'param3': 17}
/*< 76>*/ 			printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x0c000812>Verzeih mir, <heroname>!\n\n\n\n<0x10009:0x0c000800>Ich wollte es dir schon früher sagen<0x10006:0xfbcd>...<0x10006:0x00cd>\nAber dann hätte <color blue<Bado>coloroff> es ganz bestimmt\nherausgefunden...")
/*<204>*/ 			make_actor_do_something(1, 12)
/*< 77>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 134, 'param3': 16}
/*<134>*/ 			set_camera(13, 0)
/*< 78>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00000c16>Anscheinend hat <color blue<Bado >coloroff>ihn ordentlich\neingeschüchtert...")
/*<131>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 12, 'next': 132, 'param3': 17}
/*<132>*/ 			printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x00080c00>Los...<pause 35> Spuck's schon aus!")
/*< 79>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 80, 'param3': 16}
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x0c070e11>Als ich vorhin den Speisesaal ein wenig\naufgeräumt habe, kamen Bado und die\nbeiden anderen rein...\n\n<0x10009:0x0c000800>Sie haben mich gar nicht beachtet und\nbegannen einen Plan auszuhecken, um\ndeinen Wolkenvogel zu <color red<verstecken>coloroff>.\n\n<0x10009:0x0c000800>Ich wollte mich wegschleichen, um dich\nzu warnen...\n\n\n<0x10009:0x0c010e00>Aber da hat mich Bado entdeckt...\n\n\n\n<0x10009:0x0c070e00>Wenn ich etwas verrate, würde ich nie\nwieder fliegen, hat er gesagt...\n")
/*< 81>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 82, 'param3': 16}
/*< 82>*/ 			printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00090c00><color blue<Bado>coloroff> hatte also anscheinend den Plan,\nsich deinen Vogel zu schnappen und ihn\nbeim <sound 4><color red<Wasserfall>coloroff> zu verstecken.\n\n<0x10009:0x00080c00>Hm, der Wasserfall<0x10006:0xfbcd>...<0x10006:0x00cd>\n<pause 40>Gib mir doch mal kurz die <color red<Karte>coloroff>...")
/*< 87>*/ 			scene_flags[0 'Skyloft'][14 /* 0x0 40 */] = true;
/*< 83>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 85, 'param3': 30}
/*< 85>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "Da muss er sein, beim <color red<Wasserfall>coloroff>!\nIch habe ihn mit (X) markiert.")
/*< 84>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 86, 'param3': 34}
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x00000404>Du weißt, wie die Karte funktioniert?\nDrücke (+), und du siehst eine Karte\ndeiner Umgebung!<0x10011:0x03cd>\n\n<0x10009:0x00080400>Wenn du dich verlaufen hast, drücke\nalso einfach (+)!<0x10011:0x03cd>")
/*< 88>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 89, 'param3': 16}
/*< 89>*/ 			printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x0c000819>Es tut mir so leid, <heroname>!\nIch bin so ein Feigling...\nEs tut mir so schrecklich leid!")
/*< 90>*/ 			scene_flags[0 'Skyloft'][55 /* 0x7 80 */] = true;
/*<162>*/ 			story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
/*<164>*/ 			story_flags[33 /* us: 805A9ADD 0x02, jp: 805ACD5D 0x02 */] = true;
/*<157>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<106>*/ 			printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x00000c01><heroname>!\nSo ein Glück!")
/*<156>*/ 			scene_flags[0 'Skyloft'][54 /* 0x7 40 */] = true;
          			goto flw_73
          		}
          	}
          }

          void entrypoint_100_01() {
          	start()
/*< 50>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*< 52>*/ 		switch (scene_flags[45 /* 0x4 20 */]) {
          		  case 0:
/*< 57>*/ 			printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00000002>Wenn es um Wolkenvögel geht, solltest\ndu unbedingt mit <color blue<Cuco >coloroff>sprechen.\n\n\nDu kennst doch Cuco?\nDu findest ihn an der Ritterschule, er\nist einer der besten Schüler dort.")
          		  case 1:
/*< 55>*/ 			printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00000004>Was ist los, <heroname>?<pause 40>\n<0x10009:0x00001100>Was?!? Dein Vogel?<pause 50>\nEr ist<0x10006:0xfbcd>...<0x10006:0x00cd>weg?\n<0x10009:0x00111100>Oh nein!\nIch hatte mich so darauf gefreut,\ndeinen roten Vogel fliegen zu sehen!\nTut mir leid, ich habe keine Ahnung,\nwo er sein könnte<0x10006:0xfbcd>...<0x10006:0x00cd>\n<0x10009:0x000a1100>Aber<0x10006:0xfbcd>...<0x10006:0x00cd> Hast du schon mit <sound 4><color blue<Cuco>coloroff>,\nunserem <color red<Vogelexperten>coloroff>, gesprochen?\n<0x10009:0x00000700>Er kann dir vielleicht helfen.")
/*< 56>*/ 			scene_flags[0 'Skyloft'][45 /* 0x4 20 */] = true;
          		}
          	  case 1:
/*< 51>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*< 54>*/ 			printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x000a0705>Ich bin schon gespannt, wie ihr euch\nschlagen werdet, dein roter Vogel und\ndu!")
          		  case 1:
/*<  1>*/ 			printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00000001>Hey, <heroname>! Bald beginnt die\nVogelreiter-Zeremonie!\n\n\nLetztes Mal hat <color blue<Cuco>coloroff> um Federbreite\ngewonnen, das war vielleicht ein\nSchauspiel!\n\n<0x10009:0x000a0700>Heute ist dein roter Wolkenvogel mit\ndabei! <pause 40>Viel Glück, ich bin schon sehr\ngespannt!")
/*< 53>*/ 			scene_flags[0 'Skyloft'][44 /* 0x4 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_19() {
/*< 96>*/ 	start()
/*<116>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 205, 'param3': 32}
/*<205>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3073, 'param2': 256, 'next': 97, 'param3': 13}
/*< 97>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00000002><0x10008:0x02cd>Hey!<0x1000D:0x1906> <heroname>!")
/*<115>*/ 	set_camera(2, 0)
/*<117>*/ 	make_actor_do_something(2, 12)
/*<147>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10008:0x02cd>Hier sind wir!<0x10008:0x00cd>\n\n\n\n<0x1000A:0x000300cd>Wir sprechen gerade von deinem\nWolkenvogel, komm her!")
/*<118>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 98, 'param3': 42}
/*< 98>*/ 	scene_flags[0 'Skyloft'][54 /* 0x7 40 */] = true;
          }

          void entrypoint_100_02() {
/*<  2>*/ 	start()
/*< 28>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 29>*/ 		printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00000003>Was ist mit deinem Wolkenvogel?\n\n\n\n<0x10009:0x00100e00>Ich bin gerade beschäftigt, hat das\nnicht Zeit bis später?")
          	  case 1:
/*<184>*/ 		switch (scene_flags[22 /* 0x3 40 */]) {
          		  case 0:
/*<185>*/ 			printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000001>Die <color red<Vogelreiter-Zeremonie >coloroff>beginnt\nbald, also trödle hier nicht herum,\nsondern mach dich auf den Weg!")
          		  case 1:
/*<  3>*/ 			printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00000002>Wo steckt nur dieser <color blue<Grus>coloroff>?\nEr sollte mir <color red<Fässer>coloroff> bringen, aber\ner will einfach nicht beikommen...\n\n<0x10009:0x00100f00>Wo bleibt er nur?")
          		}
          	}
          }

          void entrypoint_100_03() {
/*< 32>*/ 	start()
/*< 33>*/ 	printf(/* textboxtype: 2, unk: 0, line: 13 */ "<0x10012:0x00000001>Gebieter...\nIch spüre, dass sich am Ende dieses\nLichtstrahls Hinweise zu den drei\nFlammen befinden.\nIch würde daher empfehlen, ihn näher\nzu untersuchen.")
/*<171>*/ 	story_flags[195 /* us: 805A9AEC 0x20, jp: 805ACD6C 0x20 */] = true;
          }

          void entrypoint_100_20() {
/*< 99>*/ 	start()
/*<100>*/ 	printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x00000004>Aha! <heroname>!")
/*<101>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x000c0c05>Am Wasserfall wurden in letzter\nZeit gefährliche Kreaturen gesehen,\ndu solltest also ein <color red<Schwert>coloroff> oder so\netwas mitnehmen...\n<0x10009:0x00090c00>Frag doch mal den <color blue<Schwertmeister>coloroff> hier\nin der Übungshalle, ob er dir ein\nSchwert leiht.")
          }

          void entrypoint_100_04() {
/*<  4>*/ 	start()
/*< 10>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 68>*/ 		switch (scene_flags[53 /* 0x7 20 */]) {
          		  case 0:
/*< 69>*/ 			printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00000005>Wie? Du willst mich noch etwas\nfragen? Worüber soll ich dir denn\nAuskunft geben?\n[1-]Wo ist mein\nWolkenvogel?[2-]Was ist mit\nBado?")
          			flw_16:
/*< 16>*/ 			switch (choice(2)) {
          			  case 0:
/*< 64>*/ 				printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00000012>Nun, ich kann dir leider auch nicht\nsagen, wo er gerade ist...")
/*< 67>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
          			  case 1:
/*< 65>*/ 				printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00000004><color blue<Bado>coloroff> wollte sich den Platz ansehen,\nauf dem die Vogelreiter-Zeremonie\nstattfinden soll.\n\nDann ist er wohl Richtung Dorf...\nDer direkte Weg wäre ja\nnormalerweise hier entlang.\n\nJetzt müsstest du das Tor unten\nnehmen, ich bin hier noch nicht fertig.\nMacht's dir was aus, um die Schule\nherumzugehen?")
/*< 66>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
          			}
          		  case 1:
/*< 63>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000005>Hm? Was ist los?\nDu siehst etwas mitgenommen aus...\n\n\nDein Wolkenvogel ist verschwunden?\n\n\n\n<pause 50>Also...<sound 4> Ich habe ihn <color red<gesehen>coloroff>, als er\nvor <color blue<Bado >coloroff>und den beiden anderen\nRabauken geflohen ist.\n[1-]Wo ist mein\nWolkenvogel?[2-]Was ist mit\nBado?")
          			goto flw_16
          		}
          	  case 1:
/*< 15>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 58, 'param3': 31}
/*< 58>*/ 		switch (scene_flags[52 /* 0x7 10 */]) {
          		  case 0:
/*< 60>*/ 			printf(/* textboxtype: 1, unk: 1, line: 15 */ "<0x10009:0x00000003>Ich bin bald mit der Tür fertig, also\nlass mich hier noch etwas in Ruhe\narbeiten. Aber wenn du was wissen\nwillst, frag ruhig.\n[1-]Wo ist\nZelda?[2-]Die Zeremonie...")
/*<  9>*/ 			switch (choice(2)) {
          			  case 0:
/*< 62>*/ 				printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00000005>Du willst wissen, wo <color blue<Zelda>coloroff> gerade ist?\n<pause 30>Ja, ich habe sie gesehen. Sie war mit\nDirektor <color blue<Gepora >coloroff>an der Statue der\nGöttin.\nDie Statue der Göttin? <pause 30>Wo die ist?\nDrücke einfach (C) und sieh dich um!<0x10011:0x06cd>\n\n\nEine tolle Aussicht! Wenn dir beim\n<color green<Umsehen>coloroff> mithilfe von (C) schwindlig\nwird, drücke (v), <color green<um deinen Blick\nwieder auf die Mitte auszurichten>coloroff>!<0x10011:0x06cd><0x10011:0x09cd>")
          			  case 1:
/*< 61>*/ 				printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00000003>Hast du dich auf die <color red<Vogelreiter-\nZeremonie>coloroff> auch gut vorbereitet?\n\n\nWenn du gewinnst, wirst du für die\n<color red<Oberstufe>coloroff> der Ritterschule zugelassen\nund danach in den <color red<Ritterorden\n>coloroff>aufgenommen.\nDie Ritter haben die ehrenvolle\nAufgabe, den Frieden des Wolkenhorts\nzu wahren. Würde mich freuen, dich als\nRitter zu sehen.")
          			}
          		  case 1:
/*<  5>*/ 			printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00000001>Morgen, <heroname>!\nHast du dich gut ausgeruht?\n\n\nTja, ich schätze mal, du hast wegen\nder <color red<Vogelreiter-Zeremonie>coloroff> kein Auge\nzugekriegt, was?\n\nWie? Ich?<pause 40> Ich repariere diese Tür...\n\n\n\nSie knarrt nämlich, und heute ist\ndoch der Tag der heiligen Zeremonie,\noder? Bis dahin wollte ich fertig sein...\n\n<0x10009:0x000c0c00>Na, da kann man nichts machen.\nUnd du, hast du nach dem Aufstehen\nauch fleißig zur Göttin <color red<gebetet>coloroff>?\n\n<0x1000A:0x000600cd>Wenn du dich dieser <color red<Statue>coloroff> zuwendest\nund betest, wird alles, was du bisher\ngetan hast, <color red<gespeichert>coloroff>.\n\n<0x10009:0x000c0c00><0x1000A:0xffff00cd>Statuen wie diese gibt es überall im\nWolkenhort.\n\n\nWenn du eine findest, solltest du deine\nEhrerbietung mit einem kleinen Gebet\nerweisen.\n\n<0x10009:0x00000008><color red<Verlasse dich auf die Göttin>coloroff>.")
/*< 59>*/ 			scene_flags[0 'Skyloft'][52 /* 0x7 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_21() {
/*<102>*/ 	start()
/*<103>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*<105>*/ 		printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x0c000800><0x10006:0xfbcd>...<0x10006:0x00cd>\nSchaffst du es noch rechtzeitig?\nAch, <heroname>...\n\n<0x10009:0x0c000e06>Ich bin ein Feigling<0x10006:0xfbcd>...<0x10006:0x00cd>\nEs tut mir so leid...")
          	  case 1:
/*<104>*/ 		printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x0c010900><0x10006:0xfbcd>...<0x10006:0x00cd>")
          	}
          }

          void entrypoint_100_56() {
/*<186>*/ 	start()
/*<212>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<213>*/ 		printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00000002>Pass ein bisschen besser auf!\nWas hast du eigentlich in der Schule\ngelernt? So wirst du es nie zum Ritter\nbringen!")
          	  case 1:
/*<187>*/ 		printf(/* textboxtype: 1, unk: 0, line: 82 */ "<0x10009:0x00000002>Sei vorsichtig! Zum Glück sind wir\nRitter stets wachsam!")
          	}
          }

          void entrypoint_100_05() {
/*<  6>*/ 	start()
/*< 34>*/ 	switch (scene_flags[58 /* 0x6 04 */]) {
          	  case 0:
/*<111>*/ 		printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x000f1300>Verflucht! Mein <color blue<Wolken-Hirschkäfer>coloroff>!\nFast hätte ich ihn gehabt...\n\n\n<0x10009:0x000a0900>Ohne Schmetterlingsnetz sind Insekten\nunmöglich zu fangen.\n\n\nWenn ich nur das Netz, das ich in\n<color red<Terris Laden >coloroff>gekauft habe, nicht\nweggeworfen hätte... <0x10009:0x00110200>Ach...")
          	  case 1:
/*<110>*/ 		printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00000004>Für eine <color green<Rollattacke>coloroff> musst du zuerst\ndurch Drücken von (A) rennen...\n\n\n<color red<Bewege dann das Nunchuk ruckartig>coloroff>,\nkurz bevor du die Attacke ausführen\nmöchtest.\n\nUnd RUMMS! Mit der <color green<Rollattacke\n>coloroff>kannst du Dinge aus Bäumen schütteln.\n\n\nNa?<pause 30> Versuch's mal!")
          	}
          }

          void entrypoint_100_22() {
/*<178>*/ 	start()
/*<206>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<207>*/ 		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          		  case 0:
/*<208>*/ 			switch (story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */]) {
          			  case 0:
          				flw_220:
/*<220>*/ 				printf(/* textboxtype: 1, unk: 0, line: 79 */ "<0x10009:0x00000001>Die Stimme aus der Toilette ist nicht\nmehr zu hören... Wer das wohl war?")
          			  case 1:
/*<210>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 209, 'param3': 31}
/*<209>*/ 				printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x00000001>Die letzten <color red<Nächte>coloroff> habe ich eine\nStimme aus der <color red<Toilette>coloroff> gehört.\n\n\nWer könnte das sein? Wenn derjenige\nwenigstens leise wäre...")
          			}
          		  case 1:
          			flw_222:
/*<222>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<224>*/ 				printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000001>Ich habe Bado schon eine Weile nicht\nmehr gesehen. Wo er wohl steckt?")
          			  case 1:
/*<221>*/ 				switch (story_flags[4 /* us: 805A9AD9 0x20, jp: 805ACD59 0x20 */]) {
          				  case 0:
/*<223>*/ 					printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x00000001>Wie geht's dir? Denk dran, dein\neigenes, bequemes <color red<Bett>coloroff> steht in deinem\nZimmer für dich bereit!")
          				  case 1:
/*<179>*/ 					printf(/* textboxtype: 1, unk: 0, line: 76 */ "<0x10009:0x00000001>Oh, gehst du?<pause 20>\nDann muss ich jetzt wohl weniger\nkochen!\n\n<0x10009:0x000a0c00>Pass auf dich auf!\n\n\n\n<0x10009:0x00090800>Komm hin und wieder hierher zurück,\ndenn es geht nichts über ein nettes\nSchläfchen im eigenen Bett!")
          				}
          			}
          		}
          	  case 1:
          		goto flw_222
          	}
          }

          void entrypoint_100_57() {
/*<214>*/ 	start()
/*<215>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<217>*/ 		printf(/* textboxtype: 1, unk: 0, line: 85 */ "<0x10009:0x00000002>Vorsicht, Neuanwärter! Wenn du dich\nso anstellst, wirst du bestimmt kein\nguter Ritter werden!\n\nUnd vergiss nicht, dass nur wir Ritter\nvon den Luftrettern dazu befugt sind,\nnachts Wolkenvögel zu reiten. Schreib\ndir das hinter die Ohren!")
          	  case 1:
/*<216>*/ 		printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000002>Du solltest besser aufpassen, Junge!\nIn der Nacht ist es dunkel, also achte\ndarauf, wohin du trittst.\n\nUnd vergiss nicht, dass nur wir Ritter\nvon den Luftrettern dazu befugt sind,\nnachts Wolkenvögel zu reiten. Schreib\ndir das hinter die Ohren!")
          	}
          }

          void entrypoint_100_23() {
/*<108>*/ 	start()
/*<109>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00000001><0x1000D:0x1906>Warte mal, <heroname>!\n\n\n\n<0x1000D:0x0500>Tust du mir 'n Gefallen?\n\n\n\nDer Baum da... Kannst du mithilfe von\n(A) auf ihn <color green<zusprinten>coloroff><color green< >coloroff>und eine\n<color green<Rollattacke >coloroff>machen?\n\nRenne auf den Baum zu, <color red<bewege\ndas Nunchuk ruckartig>coloroff>, um zu <color green<rollen\n>coloroff>und RUMMS!\n\nBitte mach's! <pause 30>Bittebittebitte!")
          }

          void entrypoint_100_07() {
/*< 11>*/ 	start()
/*<169>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<218>*/ 		switch (story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */]) {
          		  case 0:
/*<219>*/ 			switch (story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */]) {
          			  case 0:
/*<211>*/ 				printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00000001>Ich höre keine Stimme mehr aus der\nToilette.\n\n\nDafür weint Rax in Bados Zimmer jetzt\njede Nacht im Schlaf. Kann man denn\nda nichts tun?")
          			  case 1:
          				goto flw_220
          			}
          		  case 1:
/*<225>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<226>*/ 				printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000001>Ich habe Bado schon eine Weile nicht\nmehr gesehen. Wo er wohl steckt?")
          			  case 1:
/*<227>*/ 				switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          				  case 0:
/*<228>*/ 					printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x00000001>Wie geht's dir? Denk dran, dein\neigenes, bequemes <color red<Bett>coloroff> steht in deinem\nZimmer für dich bereit!")
          				  case 1:
/*<170>*/ 					printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000b05>Puh, wenn die Kinder abends endlich\nschlafen, kehrt hier zum Glück Ruhe\nein...\n\n<0x10009:0x000a0800>Ich wünsche dir alles Gute für deine\nSuche nach Zelda!")
          				}
          			}
          		}
          	  case 1:
/*< 12>*/ 		printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00000003>Hier ist geschlossen!\nNachts kommen hier sonst gefährliche\nUngeheuer herein!\n\nWenn du nachts nach draußen willst,\nnimm die Tür im 1. Stock!\n\n\nIch seh dir doch an, dass du dich auf die\nSuche nach Zelda machen willst.\n\n\nAber hier im Wolkenhort geht nachts\neigentlich niemand vor die Tür...")
          	}
          }

          void entrypoint_100_24() {
/*<112>*/ 	start()
/*<113>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000008>Hehe!<pause 30> Gut gemacht! Da ist er!\nMein <color blue<Wolken-Hirschkäfer>coloroff>!\n\n\nHaaaaaalt!")
/*<114>*/ 	scene_flags[0 'Skyloft'][58 /* 0x6 04 */] = true;
          }

          void entrypoint_100_25() {
/*<119>*/ 	start()
/*<120>*/ 	switch (zone_temp_flags[13 /* 0x0 20 */]) {
          	  case 0:
/*<126>*/ 		printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x000c1252><0x10008:0x02cd>Jetzt reicht's!<0x1000D:0x1906>\n\n\n\n<0x1000A:0x000f00cd>Ich rede mit dem Direktor und lasse\ndich von der Schule werfen!")
          	  case 1:
/*<121>*/ 		switch (zone_temp_flags[12 /* 0x0 10 */]) {
          		  case 0:
/*<124>*/ 			printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x000c1207><0x10008:0x01cd>Was ist das denn für ein\nBenehmen!<0x1000D:0x1906> Du frecher Bengel!\n\n\n<0x1000A:0x000f00cd>Aber mach nur so weiter, wenn du eine\nWoche lang kein Essen haben möchtest!")
/*<125>*/ 			zone_temp_flags[13 /* 0x0 20 */] = true;
          		  case 1:
/*<122>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x000c1206>Was machst du denn?!?<0x1000D:0x1906>\n\n\n\n<0x1000A:0x000f00cd>Das räumst du schön wieder auf!")
/*<123>*/ 			zone_temp_flags[12 /* 0x0 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_09() {
/*<  7>*/ 	start()
/*< 42>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*< 46>*/ 		switch (scene_flags[43 /* 0x4 08 */]) {
          		  case 0:
/*< 49>*/ 			printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00000004>Drücke (+), um die Statue der Göttin\nauf der <color red<Karte>coloroff> zu finden.<0x10011:0x03cd>")
          		  case 1:
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000057>Was ist los, <heroname>?\nWarum so aufgeregt?\n\n\nDein Vogel, <heroname>?\nAch, der seltene rote?\n<pause 40>Keine Ahnung<0x10006:0xfbcd>...<0x10006:0x00cd>\n\n<0x10009:0x00110200>Nein, hab ihn nicht gesehen.\n\n\n\n<0x10009:0x00090204>Von der Statue der Göttin hat man den\nbesten Ausblick über das Dorf, sieh\ndich doch da mal um.\n\nDrücke (+), um die Statue der Göttin\nauf der <color red<Karte>coloroff> zu finden.<0x10011:0x03cd>")
/*< 48>*/ 			scene_flags[0 'Skyloft'][43 /* 0x4 08 */] = true;
          		}
          	  case 1:
/*< 44>*/ 		switch (scene_flags[42 /* 0x4 04 */]) {
          		  case 0:
/*< 45>*/ 			printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x000c0209>Ich würde auch gern bei der\nVogelreiter-Zeremonie als Vertreterin\nder Göttin einen furchtlosen Ritter\ntreffen...")
          		  case 1:
/*<  8>*/ 			printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00000001>Oh, <heroname>! Hallo!\nDer Wind heute ist günstig, was für ein\nTag für die Zeremonie!\n\n<0x10009:0x00110200>Wer wohl gewinnen wird?\nAlso ich tippe ja auf <color blue<Bado>coloroff>!\n\n\n<0x10009:0x000c0200>Der Sieger erhält von der Vertreterin\nder Göttin ein Geschenk.\n<0x10009:0x00000609>Hach, wie romantisch...")
/*< 43>*/ 			scene_flags[0 'Skyloft'][42 /* 0x4 04 */] = true;
          		}
          	}
          }

          void entrypoint_100_26() {
/*<152>*/ 	start()
/*<154>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*<155>*/ 		printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00090802>Danke, <heroname>!\nDas ist nett von dir. Eigentlich sollte\ndas ja <color blue<Grus >coloroff>erledigen, aber was soll's...\n\n<0x10009:0x000a0c00>Du hast heute einen wichtigen Tag vor\ndir und hast mir trotzdem geholfen...\nVielen Dank!")
          	  case 1:
/*<153>*/ 		printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x000a0401>Hallo, <heroname>!\nKannst du mir mit etwas helfen?\n\n\n<0x10009:0x00100802>Eigentlich habe ich schon <color blue<Grus>coloroff> darum\ngebeten...\n\n\n<0x10009:0x00090400>Aber wo du nun schon hier bist...\nKönntest du mir bitte ein <color red<Fass\n>coloroff>bringen?")
          	}
          }

          void entrypoint_100_10() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 1, unk: 0, line: 32 */ "")
          }

