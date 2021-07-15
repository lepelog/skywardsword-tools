          void entrypoint_100_11() {
/*< 17>*/ 	start()
/*<172>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<176>*/ 		switch (temp_flags[16 /* 0x3 01 */]) {
          		  case 0:
/*<175>*/ 			printf("\x0E\x01\x09\x04\x00\x04Nachts kann man jedenfalls nicht\nfliegen!\n\n\nDu wirst dich ins Bett legen und bis\nmorgen schlafen müssen.")
          		  case 1:
/*<177>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 173, 'param3': 31}
/*<173>*/ 			printf("\x0E\x01\x09\x04\x00\x01Was machst du denn hier mitten in der\nNacht?!?\n\n\n\x0E\x01\x09\x04\x0C\xC09Was? Du wolltest auf deinem\nWolkenvogel reiten?!?\n\n\n\x0E\x01\x09\x04\x09\xC00Wolkenvögel können nachts nicht\nfliegen, weil sie im Dunkeln nicht gut\nsehen.\n\nEinzig speziell auf den Nachtflug\ntrainierte Wolkenvögel sind dazu in\nder Lage, sich nachts im Wolkenmeer\nzurechtzufinden.\n\x0E\x01\x09\x04\x08\x400Wenn du fliegen willst, musst du wohl\noder übel bis Tagesanbruch warten!\n\n\nLeg dich einfach schlafen und im Nu\ngeht die Sonne auf! Bist du etwa nicht\nmüde?")
/*<174>*/ 			temp_flags[16 /* 0x3 01 */] = true;
          		}
          	  case 1:
/*< 19>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*< 38>*/ 			switch (scene_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*< 39>*/ 				printf("\x0E\x01\x09\x04\x0B\xC00Also, in der Schule ist dein Vogel auf\nkeinen Fall, du musst schon draußen\nsuchen.\n\nIch muss ein paar Nachforschungen\nanstellen, ich gebe dir Bescheid, wenn\nich etwas herausfinde!")
          			  case 1:
/*< 20>*/ 				printf("\x0E\x01\x09\x04\x00\xC06Hey hey, was machst du denn noch\nhier?\n\n\n\x0E\x01\x09\x04\x0C\xC09Ist das dein Ernst?!?<pause14>\nDu hast deinen Vogel gerufen, und er\nist nicht gekommen?!?\n\n\x0E\x01\x09\x04\x01\xC00Dein Schutzvogel ist nicht gekommen...\n\n\n\nIch habe ja schon vieles gehört, aber\nso etwas hätte ich niemals für möglich\ngehalten...\n\n\x0E\x01\x09\x04\x08\x400Du musst dir allerdings keine Sorgen\nmachen, mein Freund. Ich werde einen\nWeg finden, dir zu helfen...\n\n\x0E\x01\x09\x04\x0B\xC00Allerdings wird das etwas dauern...\nWie wäre es, wenn du dich inzwischen\nmal am Dorfplatz umhören würdest?")
/*< 21>*/ 				scene_flags[0 'Skyloft'][18 /* 0x3 04 */] = true;
          			}
          		  case 1:
/*< 36>*/ 			switch (scene_flags[35 /* 0x5 08 */]) {
          			  case 0:
/*< 37>*/ 				printf("\x0E\x01\x09\x04\x0C\x405Denk dran, wenn du Fragen zu den\nVögeln hast, frag mich, <b<Cuco>>.")
          			  case 1:
/*< 18>*/ 				printf("\x0E\x01\x09\x04\x09\x401Morgen, Link!\n\n\n\n\x0E\x01\x09\x04\x08\x400Na, bist du auch bereit für die\n<r<Vogelreiter-Zeremonie>> heute?\n\n\nDie anderen bereiten sich alle schon\ndraußen auf dem Dorfplatz vor, aber\ndu scheinst ja die Ruhe selbst zu sein.\n\n\x0E\x01\x09\x04\x0B\x400Aber dein <r<karminroter Wolkenvogel >>ist\nja auch ein tolles Tier.\n\n\nIch habe die Vogelreiter-Zeremonie\nzwar beim letzten Mal gewonnen, aber\nob mein Vogel eine Chance gegen\ndeinen hätte?\n\x0E\x01\x09\x04\x08\x400Doch denk daran, ein Vogel ist nur so\ngut wie sein Reiter. Ich verbringe\njeden Tag mit dem Studium der Vögel.\n\n\x0E\x01\x09\x04\x0C\x405Wenn du also mal Fragen zu den Vögeln\nhast, dann ist <b<Cuco >>dein Mann!")
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
/*<146>*/ 			printf("\x0E\x01\x09\x04\x00\x06<b<Cuco>> sollte vor der <r<Übungshalle >>neben\nder Ritterschule zu finden sein.")
          		  case 1:
/*< 27>*/ 			printf("\x0E\x01\x09\x04\x08\x406Wie?<pause28>\nWohin <b<Bado >>unterwegs war?\n\n\n\x0E\x01\x09\x04\x00\xD00Hat er wieder was ausgefressen?\n\n\n\n\x0E\x01\x09\x04\x0C\x400Also, ich habe nichts gesehen, aber\n<b<Cuco>>... Vielleicht weiß er etwas.\n\n\n\x0E\x01\x09\x04\x08\xE04Da fällt mir ein, <b<Cuco>> hat dich vorhin\ngesucht\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í\nWahrscheinlich findest du ihn jetzt vor\nder <r<Übungshalle>>.")
/*<144>*/ 			scene_flags[0 'Skyloft'][64 /* 0x9 01 */] = true;
          		}
          	  case 1:
/*< 25>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<141>*/ 			switch (scene_flags[63 /* 0x6 80 */]) {
          			  case 0:
/*<143>*/ 				printf("\x0E\x01\x09\x04\x08\xE06<b<Cuco>> weiß über Vögel am besten\nBescheid. Ich habe ihn unten gesehen,\ngeh doch mal runter und frag ihn.")
          			  case 1:
/*<150>*/ 				set_camera(14, 0)
/*<148>*/ 				make_actor_do_something(0, 0)
/*<139>*/ 				printf("\x0E\x01\x09\x04\n\xE56\x0E\x01\x08\x02\xFFCDEigentlich ist das Aufschließen der Tür nicht\nmeine Aufgabe. Und trotzdem habe ich mich\nüberreden lassen...")
/*<151>*/ 				set_camera(-1, 0)
/*<149>*/ 				make_actor_do_something(1, 0)
/*< 24>*/ 				printf("\x0E\x01\x09\x04\x01\x406Was ist mit dir, Link?\nDu siehst unruhig aus.\n\n\n\x0E\x01\x09\x04\x08\xD00Das kann doch nicht sein!\n<pause28>Dein <r<Wolkenvogel>> ist verschwunden? \n\n\n\x0E\x01\x09\x04\x0C\xD12Tut mir leid\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í\nIch war bis eben in der Schule, ich habe\nnichts mitbekommen.")
/*<142>*/ 				printf("\x0E\x01\x09\x04\x08\xE06<b<Cuco>> weiß über Vögel am besten\nBescheid. Ich habe ihn unten gesehen,\ngeh doch mal runter und frag ihn.")
/*<140>*/ 				scene_flags[0 'Skyloft'][63 /* 0x6 80 */] = true;
          			}
          		  case 1:
/*<136>*/ 			switch (scene_flags[62 /* 0x6 40 */]) {
          			  case 0:
/*<138>*/ 				printf("\x0E\x01\x09\x04\x08\x900Wenn du die <r<Vogelreiter-Zeremonie>>\ngewinnst, erreichst du wie ich die\n<r<Oberstufe>> und kannst Ritter werden!")
          			  case 1:
/*< 23>*/ 				printf("\x0E\x01\x09\x04\x08\x901Hallo, Link!\nStreng dich bei der <r<Vogelreiter-\nZeremonie >>heute ordentlich an!\n\n\x0E\x01\x09\x04\x00\x400Wenn du gewinnst, kommst du wie ich\nin die <r<Oberstufe>> und kannst <r<Ritter\n>>werden!\n\n\x0E\x01\x09\x04\x08\x900Dann darfst du auch so eine schicke\n<r<Ritter-Uniform >>wie ich tragen!\nDie würde dir sicher gut stehen!\n\n\x0E\x01\x09\x04\x0B\x713Wenn auch nicht so gut\nwie IHM...")
/*<137>*/ 				scene_flags[0 'Skyloft'][62 /* 0x6 40 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_100_13() {
/*<158>*/ 	start()
/*<159>*/ 	printf("\x0E\x01\x09\x04\x00\x01Sieh dir mal diese Statue an. Niemand\nweiß, wie lang sie schon hier steht.\n\n\nSchade, dass das eine Auge fehlt...\n\n\n\nDrücke (C) und sieh dir die Statue\nruhig etwas näher an! \x0E\x01\x11\x02\x6CD")
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
/*<166>*/ 		printf("\x0E\x01\x09\x04\x00\x04Mhmm...\nDas wird heute wieder ein leckeres\nSüppchen!")
          	  case 1:
/*<161>*/ 		printf("\x0E\x01\x09\x04\x00\x02Oh, dieses Kind!\nGleich gibt's Essen und er treibt sich\nwieder sonst wo herum!\n\nJagt bestimmt wieder irgendwelche\nKrabbelviecher...")
          	}
          }

          void entrypoint_100_15() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf("\x0E\x01\x09\x04\x00\x07Wo willst du denn damit hin?\n\n\n\n\x0E\x01\x09\x04\x00\x1200Mach keinen Unsinn! Hast du nichts\nanderes zu tun?")
          }

          void entrypoint_100_16() {
/*<167>*/ 	start()
/*<194>*/ 	switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          	  case 0:
/*<196>*/ 		printf("\x0E\x01\x09\x04\x08\x909Ah, Link!\nVielen Dank, dank dir habe ich mein\nGlück gefunden!\n\nEr geht heute Abend wieder auf\nPatrouille! Niemand hat ihn darum\ngebeten, er tut es einfach!\n\n\x0E\x01\x09\x04\x0E\x90AAch, ist er nicht wundervoll?")
          	  case 1:
/*<192>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<195>*/ 			printf("\x0E\x01\x09\x04\x00\xE12Was soll ich nur mit dem Brief von Rax\nmachen?\n\n\n\x0E\x01\x09\x04\x0B\xE00Was würde wohl Cuco denken, wenn er\ndavon wüsste...")
          		  case 1:
/*<188>*/ 			switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          			  case 0:
/*<197>*/ 				switch (zone_temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
          					flw_193:
/*<193>*/ 					switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          					  case 0:
          					  case 1:
/*<190>*/ 						printf("\x0E\x01\x09\x04\x08\xD57Du willst reden?\nHat das nicht Zeit bis morgen?")
/*<198>*/ 						zone_temp_flags[16 /* 0x3 01 */] = true;
          					}
          				  case 1:
/*<189>*/ 					printf("\x0E\x01\x09\x04\n\xE57Eine Unverschämtheit, sich mitten in\nder Nacht ins Zimmer einer Dame zu\nschleichen!\n\nIch will jetzt baden! Hättest du also\ndie Güte, aus meinem Zimmer zu\nverschwinden, Link?!?\n\n\x0E\x01\x09\x04\x0C\xE14Allerdings scheint das Bad im Moment\nnoch besetzt zu sein... Wer braucht da\ndrinnen nur so lange?")
/*<191>*/ 					switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          					  case 0:
          						goto flw_193
          					  case 1:
          					}
          				}
          			  case 1:
/*<168>*/ 				printf("\x0E\x01\x09\x04\x0C\xD14Ich kann nicht glauben, dass Zelda\ndurch die Wolkendecke gestürzt ist...\nSie ist doch eine so gute\nVogelreiterin!\n\x0E\x01\x09\x04\n\xD06Ein Ungeheuer? Bist du sicher, dass du\nnicht noch unter Schock stehst?")
          			}
          		}
          	}
          }

          void entrypoint_100_17() {
/*< 40>*/ 	start()
/*< 41>*/ 	printf("\x0E\x01\x09\x04\x01\x02Link!\x0E\x01\x0D\x02\x1906")
/*<127>*/ 	set_camera(9, 0)
/*<128>*/ 	printf("Wenn du zum Dorfplatz willst, nimm\nden Ausgang hier unten.\n\n\n\x0E\x01\x09\x04\x09\x400Die Tür oben ist noch abgeschlossen.")
/*<130>*/ 	set_camera(11, 0)
/*<129>*/ 	printf("\x0E\x01\x09\x04\x0C\xC16Warum braucht denn unsere\nKüchendame heute so lange mit dem\nAufschließen? Ich werde mal mit ihr\nreden müssen!")
          }

          void entrypoint_100_18() {
/*< 70>*/ 	start()
/*< 91>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*< 92>*/ 		switch (story_flags[28 /* us: 805A9ADA 0x10, jp: 805ACD5A 0x10 */]) {
          		  case 0:
/*< 94>*/ 			printf("\x0E\x01\x09\x04\x00\xC05Ein Tipp noch, bevor du dich an\ngefährliche Orte wagst.\n\n\n<r<Bete zur Göttin und speichere>>, bevor\ndu dich aufmachst.\n\n\n<r<Statuen>>, an denen du beten kannst,\nwerden auf der Karte gezeigt.")
          		  case 1:
/*< 93>*/ 			printf("\x0E\x01\x09\x04\x0C\xC05Am Wasserfall wurden in letzter\nZeit gefährliche Kreaturen gesehen,\ndu solltest also ein <r<Schwert>> oder so\netwas mitnehmen...\n\x0E\x01\x09\x04\x09\xC00Frag doch mal den <b<Schwertmeister>> hier\nin der Übungshalle, ob er dir ein\nSchwert leiht.")
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
/*< 71>*/ 			printf("\x0E\x01\x09\x04\x08\x401Gut, dass du hier bist, Link.\nIch habe dich schon gesucht!")
          			flw_73:
/*< 73>*/ 			printf("\x0E\x01\x09\x04\x09\xC00Ich habe mich wegen deines\nWolkenvogels umgehört.\n\n\n\x0E\x01\x09\x04\x00\xC00Und als ich mit Grus hier geredet habe,\nhat er sich seltsam verhalten...")
/*< 75>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 0, 'next': 133, 'param3': 16}
/*<133>*/ 			set_camera(12, 0)
/*<163>*/ 			make_actor_do_something(0, 0)
/*<135>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 100, 'next': 76, 'param3': 17}
/*< 76>*/ 			printf("\x0E\x01\x09\x04\xC00\x812Verzeih mir, Link!\n\n\n\n\x0E\x01\x09\x04\xC00\x800Ich wollte es dir schon früher sagen\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\nAber dann hätte <b<Bado>> es ganz bestimmt\nherausgefunden...")
/*<204>*/ 			make_actor_do_something(1, 12)
/*< 77>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 134, 'param3': 16}
/*<134>*/ 			set_camera(13, 0)
/*< 78>*/ 			printf("\x0E\x01\x09\x04\x00\xC16Anscheinend hat <b<Bado >>ihn ordentlich\neingeschüchtert...")
/*<131>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 12, 'next': 132, 'param3': 17}
/*<132>*/ 			printf("\x0E\x01\x09\x04\x08\xC00Los...<pause23> Spuck's schon aus!")
/*< 79>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 80, 'param3': 16}
/*< 80>*/ 			printf("\x0E\x01\x09\x04\xC07\xE11Als ich vorhin den Speisesaal ein wenig\naufgeräumt habe, kamen Bado und die\nbeiden anderen rein...\n\n\x0E\x01\x09\x04\xC00\x800Sie haben mich gar nicht beachtet und\nbegannen einen Plan auszuhecken, um\ndeinen Wolkenvogel zu <r<verstecken>>.\n\n\x0E\x01\x09\x04\xC00\x800Ich wollte mich wegschleichen, um dich\nzu warnen...\n\n\n\x0E\x01\x09\x04\xC01\xE00Aber da hat mich Bado entdeckt...\n\n\n\n\x0E\x01\x09\x04\xC07\xE00Wenn ich etwas verrate, würde ich nie\nwieder fliegen, hat er gesagt...\n")
/*< 81>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 82, 'param3': 16}
/*< 82>*/ 			printf("\x0E\x01\x09\x04\x09\xC00<b<Bado>> hatte also anscheinend den Plan,\nsich deinen Vogel zu schnappen und ihn\nbeim <pling><r<Wasserfall>> zu verstecken.\n\n\x0E\x01\x09\x04\x08\xC00Hm, der Wasserfall\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\n<pause28>Gib mir doch mal kurz die <r<Karte>>...")
/*< 87>*/ 			scene_flags[0 'Skyloft'][14 /* 0x0 40 */] = true;
/*< 83>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 85, 'param3': 30}
/*< 85>*/ 			printf("Da muss er sein, beim <r<Wasserfall>>!\nIch habe ihn mit \x0E\x02\x04\x02\x19CD markiert.")
/*< 84>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 86, 'param3': 34}
/*< 86>*/ 			printf("\x0E\x01\x09\x04\x00\x404Du weißt, wie die Karte funktioniert?\nDrücke \x0E\x02\x04\x02\x3CD, und du siehst eine Karte\ndeiner Umgebung!\x0E\x01\x11\x02\x3CD\n\n\x0E\x01\x09\x04\x08\x400Wenn du dich verlaufen hast, drücke\nalso einfach \x0E\x02\x04\x02\x3CD!\x0E\x01\x11\x02\x3CD")
/*< 88>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 89, 'param3': 16}
/*< 89>*/ 			printf("\x0E\x01\x09\x04\xC00\x819Es tut mir so leid, Link!\nIch bin so ein Feigling...\nEs tut mir so schrecklich leid!")
/*< 90>*/ 			scene_flags[0 'Skyloft'][55 /* 0x7 80 */] = true;
/*<162>*/ 			story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
/*<164>*/ 			story_flags[33 /* us: 805A9ADD 0x02, jp: 805ACD5D 0x02 */] = true;
/*<157>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<106>*/ 			printf("\x0E\x01\x09\x04\x00\xC01Link!\nSo ein Glück!")
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
/*< 57>*/ 			printf("\x0E\x01\x09\x04\x00\x02Wenn es um Wolkenvögel geht, solltest\ndu unbedingt mit <b<Cuco >>sprechen.\n\n\nDu kennst doch Cuco?\nDu findest ihn an der Ritterschule, er\nist einer der besten Schüler dort.")
          		  case 1:
/*< 55>*/ 			printf("\x0E\x01\x09\x04\x00\x04Was ist los, Link?<pause28>\n\x0E\x01\x09\x04\x00\x1100Was?!? Dein Vogel?<pause32>\nEr ist\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Íweg?\n\x0E\x01\x09\x04\x11\x1100Oh nein!\nIch hatte mich so darauf gefreut,\ndeinen roten Vogel fliegen zu sehen!\nTut mir leid, ich habe keine Ahnung,\nwo er sein könnte\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\n\x0E\x01\x09\x04\n\x1100Aber\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í Hast du schon mit <pling><b<Cuco>>,\nunserem <r<Vogelexperten>>, gesprochen?\n\x0E\x01\x09\x04\x00\x700Er kann dir vielleicht helfen.")
/*< 56>*/ 			scene_flags[0 'Skyloft'][45 /* 0x4 20 */] = true;
          		}
          	  case 1:
/*< 51>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*< 54>*/ 			printf("\x0E\x01\x09\x04\n\x705Ich bin schon gespannt, wie ihr euch\nschlagen werdet, dein roter Vogel und\ndu!")
          		  case 1:
/*<  1>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hey, Link! Bald beginnt die\nVogelreiter-Zeremonie!\n\n\nLetztes Mal hat <b<Cuco>> um Federbreite\ngewonnen, das war vielleicht ein\nSchauspiel!\n\n\x0E\x01\x09\x04\n\x700Heute ist dein roter Wolkenvogel mit\ndabei! <pause28>Viel Glück, ich bin schon sehr\ngespannt!")
/*< 53>*/ 			scene_flags[0 'Skyloft'][44 /* 0x4 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_19() {
/*< 96>*/ 	start()
/*<116>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 205, 'param3': 32}
/*<205>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3073, 'param2': 256, 'next': 97, 'param3': 13}
/*< 97>*/ 	printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CDHey!\x0E\x01\x0D\x02\x1906 Link!")
/*<115>*/ 	set_camera(2, 0)
/*<117>*/ 	make_actor_do_something(2, 12)
/*<147>*/ 	printf("\x0E\x01\x08\x02\x2CDHier sind wir!\x0E\x01\x08\x02Í\n\n\n\n\x0E\x01\n\x04\x03ÍWir sprechen gerade von deinem\nWolkenvogel, komm her!")
/*<118>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 98, 'param3': 42}
/*< 98>*/ 	scene_flags[0 'Skyloft'][54 /* 0x7 40 */] = true;
          }

          void entrypoint_100_02() {
/*<  2>*/ 	start()
/*< 28>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 29>*/ 		printf("\x0E\x01\x09\x04\x00\x03Was ist mit deinem Wolkenvogel?\n\n\n\n\x0E\x01\x09\x04\x10\xE00Ich bin gerade beschäftigt, hat das\nnicht Zeit bis später?")
          	  case 1:
/*<184>*/ 		switch (scene_flags[22 /* 0x3 40 */]) {
          		  case 0:
/*<185>*/ 			printf("\x0E\x01\x09\x04\x00\x01Die <r<Vogelreiter-Zeremonie >>beginnt\nbald, also trödle hier nicht herum,\nsondern mach dich auf den Weg!")
          		  case 1:
/*<  3>*/ 			printf("\x0E\x01\x09\x04\x00\x02Wo steckt nur dieser <b<Grus>>?\nEr sollte mir <r<Fässer>> bringen, aber\ner will einfach nicht beikommen...\n\n\x0E\x01\x09\x04\x10\xF00Wo bleibt er nur?")
          		}
          	}
          }

          void entrypoint_100_03() {
/*< 32>*/ 	start()
/*< 33>*/ 	printf("\x0E\x01\x12\x04\x00\x01Gebieter...\nIch spüre, dass sich am Ende dieses\nLichtstrahls Hinweise zu den drei\nFlammen befinden.\nIch würde daher empfehlen, ihn näher\nzu untersuchen.")
/*<171>*/ 	story_flags[195 /* us: 805A9AEC 0x20, jp: 805ACD6C 0x20 */] = true;
          }

          void entrypoint_100_20() {
/*< 99>*/ 	start()
/*<100>*/ 	printf("\x0E\x01\x09\x04\x00\x04Aha! Link!")
/*<101>*/ 	printf("\x0E\x01\x09\x04\x0C\xC05Am Wasserfall wurden in letzter\nZeit gefährliche Kreaturen gesehen,\ndu solltest also ein <r<Schwert>> oder so\netwas mitnehmen...\n\x0E\x01\x09\x04\x09\xC00Frag doch mal den <b<Schwertmeister>> hier\nin der Übungshalle, ob er dir ein\nSchwert leiht.")
          }

          void entrypoint_100_04() {
/*<  4>*/ 	start()
/*< 10>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 68>*/ 		switch (scene_flags[53 /* 0x7 20 */]) {
          		  case 0:
/*< 69>*/ 			printf("\x0E\x01\x09\x04\x00\x05Wie? Du willst mich noch etwas\nfragen? Worüber soll ich dir denn\nAuskunft geben?\n[1]Wo ist mein\nWolkenvogel?[2]Was ist mit\nBado?")
          			flw_16:
/*< 16>*/ 			switch (choice(2)) {
          			  case 0:
/*< 64>*/ 				printf("\x0E\x01\x09\x04\x00\x12Nun, ich kann dir leider auch nicht\nsagen, wo er gerade ist...")
/*< 67>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
          			  case 1:
/*< 65>*/ 				printf("\x0E\x01\x09\x04\x00\x04<b<Bado>> wollte sich den Platz ansehen,\nauf dem die Vogelreiter-Zeremonie\nstattfinden soll.\n\nDann ist er wohl Richtung Dorf...\nDer direkte Weg wäre ja\nnormalerweise hier entlang.\n\nJetzt müsstest du das Tor unten\nnehmen, ich bin hier noch nicht fertig.\nMacht's dir was aus, um die Schule\nherumzugehen?")
/*< 66>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
          			}
          		  case 1:
/*< 63>*/ 			printf("\x0E\x01\x09\x04\x00\x05Hm? Was ist los?\nDu siehst etwas mitgenommen aus...\n\n\nDein Wolkenvogel ist verschwunden?\n\n\n\n<pause32>Also...<pling> Ich habe ihn <r<gesehen>>, als er\nvor <b<Bado >>und den beiden anderen\nRabauken geflohen ist.\n[1]Wo ist mein\nWolkenvogel?[2]Was ist mit\nBado?")
          			goto flw_16
          		}
          	  case 1:
/*< 15>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 58, 'param3': 31}
/*< 58>*/ 		switch (scene_flags[52 /* 0x7 10 */]) {
          		  case 0:
/*< 60>*/ 			printf("\x0E\x01\x09\x04\x00\x03Ich bin bald mit der Tür fertig, also\nlass mich hier noch etwas in Ruhe\narbeiten. Aber wenn du was wissen\nwillst, frag ruhig.\n[1]Wo ist\nZelda?[2]Die Zeremonie...")
/*<  9>*/ 			switch (choice(2)) {
          			  case 0:
/*< 62>*/ 				printf("\x0E\x01\x09\x04\x00\x05Du willst wissen, wo <b<Zelda>> gerade ist?\n<pause1E>Ja, ich habe sie gesehen. Sie war mit\nDirektor <b<Gepora >>an der Statue der\nGöttin.\nDie Statue der Göttin? <pause1E>Wo die ist?\nDrücke einfach (C) und sieh dich um!\x0E\x01\x11\x02\x6CD\n\n\nEine tolle Aussicht! Wenn dir beim\n<g<Umsehen>> mithilfe von (C) schwindlig\nwird, drücke (v), <g<um deinen Blick\nwieder auf die Mitte auszurichten>>!\x0E\x01\x11\x02\x6CD\x0E\x01\x11\x02\x9CD")
          			  case 1:
/*< 61>*/ 				printf("\x0E\x01\x09\x04\x00\x03Hast du dich auf die <r<Vogelreiter-\nZeremonie>> auch gut vorbereitet?\n\n\nWenn du gewinnst, wirst du für die\n<r<Oberstufe>> der Ritterschule zugelassen\nund danach in den <r<Ritterorden\n>>aufgenommen.\nDie Ritter haben die ehrenvolle\nAufgabe, den Frieden des Wolkenhorts\nzu wahren. Würde mich freuen, dich als\nRitter zu sehen.")
          			}
          		  case 1:
/*<  5>*/ 			printf("\x0E\x01\x09\x04\x00\x01Morgen, Link!\nHast du dich gut ausgeruht?\n\n\nTja, ich schätze mal, du hast wegen\nder <r<Vogelreiter-Zeremonie>> kein Auge\nzugekriegt, was?\n\nWie? Ich?<pause28> Ich repariere diese Tür...\n\n\n\nSie knarrt nämlich, und heute ist\ndoch der Tag der heiligen Zeremonie,\noder? Bis dahin wollte ich fertig sein...\n\n\x0E\x01\x09\x04\x0C\xC00Na, da kann man nichts machen.\nUnd du, hast du nach dem Aufstehen\nauch fleißig zur Göttin <r<gebetet>>?\n\n\x0E\x01\n\x04\x06ÍWenn du dich dieser <r<Statue>> zuwendest\nund betest, wird alles, was du bisher\ngetan hast, <r<gespeichert>>.\n\n\x0E\x01\x09\x04\x0C\xC00\x0E\x01\n\x04\xFFFFÍStatuen wie diese gibt es überall im\nWolkenhort.\n\n\nWenn du eine findest, solltest du deine\nEhrerbietung mit einem kleinen Gebet\nerweisen.\n\n\x0E\x01\x09\x04\x00\x08<r<Verlasse dich auf die Göttin>>.")
/*< 59>*/ 			scene_flags[0 'Skyloft'][52 /* 0x7 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_21() {
/*<102>*/ 	start()
/*<103>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*<105>*/ 		printf("\x0E\x01\x09\x04\xC00\x800\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\nSchaffst du es noch rechtzeitig?\nAch, Link...\n\n\x0E\x01\x09\x04\xC00\xE06Ich bin ein Feigling\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\nEs tut mir so leid...")
          	  case 1:
/*<104>*/ 		printf("\x0E\x01\x09\x04\xC01\x900\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í")
          	}
          }

          void entrypoint_100_56() {
/*<186>*/ 	start()
/*<212>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<213>*/ 		printf("\x0E\x01\x09\x04\x00\x02Pass ein bisschen besser auf!\nWas hast du eigentlich in der Schule\ngelernt? So wirst du es nie zum Ritter\nbringen!")
          	  case 1:
/*<187>*/ 		printf("\x0E\x01\x09\x04\x00\x02Sei vorsichtig! Zum Glück sind wir\nRitter stets wachsam!")
          	}
          }

          void entrypoint_100_05() {
/*<  6>*/ 	start()
/*< 34>*/ 	switch (scene_flags[58 /* 0x6 04 */]) {
          	  case 0:
/*<111>*/ 		printf("\x0E\x01\x09\x04\x0F\x1300Verflucht! Mein <b<Wolken-Hirschkäfer>>!\nFast hätte ich ihn gehabt...\n\n\n\x0E\x01\x09\x04\n\x900Ohne Schmetterlingsnetz sind Insekten\nunmöglich zu fangen.\n\n\nWenn ich nur das Netz, das ich in\n<r<Terris Laden >>gekauft habe, nicht\nweggeworfen hätte... \x0E\x01\x09\x04\x11\x200Ach...")
          	  case 1:
/*<110>*/ 		printf("\x0E\x01\x09\x04\x00\x04Für eine <g<Rollattacke>> musst du zuerst\ndurch Drücken von (A) rennen...\n\n\n<r<Bewege dann das Nunchuk ruckartig>>,\nkurz bevor du die Attacke ausführen\nmöchtest.\n\nUnd RUMMS! Mit der <g<Rollattacke\n>>kannst du Dinge aus Bäumen schütteln.\n\n\nNa?<pause1E> Versuch's mal!")
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
/*<220>*/ 				printf("\x0E\x01\x09\x04\x00\x01Die Stimme aus der Toilette ist nicht\nmehr zu hören... Wer das wohl war?")
          			  case 1:
/*<210>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 209, 'param3': 31}
/*<209>*/ 				printf("\x0E\x01\x09\x04\x00\x01Die letzten <r<Nächte>> habe ich eine\nStimme aus der <r<Toilette>> gehört.\n\n\nWer könnte das sein? Wenn derjenige\nwenigstens leise wäre...")
          			}
          		  case 1:
          			flw_222:
/*<222>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<224>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ich habe Bado schon eine Weile nicht\nmehr gesehen. Wo er wohl steckt?")
          			  case 1:
/*<221>*/ 				switch (story_flags[4 /* us: 805A9AD9 0x20, jp: 805ACD59 0x20 */]) {
          				  case 0:
/*<223>*/ 					printf("\x0E\x01\x09\x04\x00\x01Wie geht's dir? Denk dran, dein\neigenes, bequemes <r<Bett>> steht in deinem\nZimmer für dich bereit!")
          				  case 1:
/*<179>*/ 					printf("\x0E\x01\x09\x04\x00\x01Oh, gehst du?<pause14>\nDann muss ich jetzt wohl weniger\nkochen!\n\n\x0E\x01\x09\x04\n\xC00Pass auf dich auf!\n\n\n\n\x0E\x01\x09\x04\x09\x800Komm hin und wieder hierher zurück,\ndenn es geht nichts über ein nettes\nSchläfchen im eigenen Bett!")
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
/*<217>*/ 		printf("\x0E\x01\x09\x04\x00\x02Vorsicht, Neuanwärter! Wenn du dich\nso anstellst, wirst du bestimmt kein\nguter Ritter werden!\n\nUnd vergiss nicht, dass nur wir Ritter\nvon den Luftrettern dazu befugt sind,\nnachts Wolkenvögel zu reiten. Schreib\ndir das hinter die Ohren!")
          	  case 1:
/*<216>*/ 		printf("\x0E\x01\x09\x04\x00\x02Du solltest besser aufpassen, Junge!\nIn der Nacht ist es dunkel, also achte\ndarauf, wohin du trittst.\n\nUnd vergiss nicht, dass nur wir Ritter\nvon den Luftrettern dazu befugt sind,\nnachts Wolkenvögel zu reiten. Schreib\ndir das hinter die Ohren!")
          	}
          }

          void entrypoint_100_23() {
/*<108>*/ 	start()
/*<109>*/ 	printf("\x0E\x01\x09\x04\x00\x01\x0E\x01\x0D\x02\x1906Warte mal, Link!\n\n\n\n\x0E\x01\x0D\x02\x500Tust du mir 'n Gefallen?\n\n\n\nDer Baum da... Kannst du mithilfe von\n(A) auf ihn <g<zusprinten>><g< >>und eine\n<g<Rollattacke >>machen?\n\nRenne auf den Baum zu, <r<bewege\ndas Nunchuk ruckartig>>, um zu <g<rollen\n>>und RUMMS!\n\nBitte mach's! <pause1E>Bittebittebitte!")
          }

          void entrypoint_100_07() {
/*< 11>*/ 	start()
/*<169>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<218>*/ 		switch (story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */]) {
          		  case 0:
/*<219>*/ 			switch (story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */]) {
          			  case 0:
/*<211>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ich höre keine Stimme mehr aus der\nToilette.\n\n\nDafür weint Rax in Bados Zimmer jetzt\njede Nacht im Schlaf. Kann man denn\nda nichts tun?")
          			  case 1:
          				goto flw_220
          			}
          		  case 1:
/*<225>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<226>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ich habe Bado schon eine Weile nicht\nmehr gesehen. Wo er wohl steckt?")
          			  case 1:
/*<227>*/ 				switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          				  case 0:
/*<228>*/ 					printf("\x0E\x01\x09\x04\x00\x01Wie geht's dir? Denk dran, dein\neigenes, bequemes <r<Bett>> steht in deinem\nZimmer für dich bereit!")
          				  case 1:
/*<170>*/ 					printf("\x0E\x01\x09\x04\x00\xB05Puh, wenn die Kinder abends endlich\nschlafen, kehrt hier zum Glück Ruhe\nein...\n\n\x0E\x01\x09\x04\n\x800Ich wünsche dir alles Gute für deine\nSuche nach Zelda!")
          				}
          			}
          		}
          	  case 1:
/*< 12>*/ 		printf("\x0E\x01\x09\x04\x00\x03Hier ist geschlossen!\nNachts kommen hier sonst gefährliche\nUngeheuer herein!\n\nWenn du nachts nach draußen willst,\nnimm die Tür im 1. Stock!\n\n\nIch seh dir doch an, dass du dich auf die\nSuche nach Zelda machen willst.\n\n\nAber hier im Wolkenhort geht nachts\neigentlich niemand vor die Tür...")
          	}
          }

          void entrypoint_100_24() {
/*<112>*/ 	start()
/*<113>*/ 	printf("\x0E\x01\x09\x04\x00\x08Hehe!<pause1E> Gut gemacht! Da ist er!\nMein <b<Wolken-Hirschkäfer>>!\n\n\nHaaaaaalt!")
/*<114>*/ 	scene_flags[0 'Skyloft'][58 /* 0x6 04 */] = true;
          }

          void entrypoint_100_25() {
/*<119>*/ 	start()
/*<120>*/ 	switch (zone_temp_flags[13 /* 0x0 20 */]) {
          	  case 0:
/*<126>*/ 		printf("\x0E\x01\x09\x04\x0C\x1252\x0E\x01\x08\x02\x2CDJetzt reicht's!\x0E\x01\x0D\x02\x1906\n\n\n\n\x0E\x01\n\x04\x0FÍIch rede mit dem Direktor und lasse\ndich von der Schule werfen!")
          	  case 1:
/*<121>*/ 		switch (zone_temp_flags[12 /* 0x0 10 */]) {
          		  case 0:
/*<124>*/ 			printf("\x0E\x01\x09\x04\x0C\x1207\x0E\x01\x08\x02\x1CDWas ist das denn für ein\nBenehmen!\x0E\x01\x0D\x02\x1906 Du frecher Bengel!\n\n\n\x0E\x01\n\x04\x0FÍAber mach nur so weiter, wenn du eine\nWoche lang kein Essen haben möchtest!")
/*<125>*/ 			zone_temp_flags[13 /* 0x0 20 */] = true;
          		  case 1:
/*<122>*/ 			printf("\x0E\x01\x09\x04\x0C\x1206Was machst du denn?!?\x0E\x01\x0D\x02\x1906\n\n\n\n\x0E\x01\n\x04\x0FÍDas räumst du schön wieder auf!")
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
/*< 49>*/ 			printf("\x0E\x01\x09\x04\x00\x04Drücke \x0E\x02\x04\x02\x3CD, um die Statue der Göttin\nauf der <r<Karte>> zu finden.\x0E\x01\x11\x02\x3CD")
          		  case 1:
/*< 47>*/ 			printf("\x0E\x01\x09\x04\x00WWas ist los, Link?\nWarum so aufgeregt?\n\n\nDein Vogel, Link?\nAch, der seltene rote?\n<pause28>Keine Ahnung\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\n\n\x0E\x01\x09\x04\x11\x200Nein, hab ihn nicht gesehen.\n\n\n\n\x0E\x01\x09\x04\x09\x204Von der Statue der Göttin hat man den\nbesten Ausblick über das Dorf, sieh\ndich doch da mal um.\n\nDrücke \x0E\x02\x04\x02\x3CD, um die Statue der Göttin\nauf der <r<Karte>> zu finden.\x0E\x01\x11\x02\x3CD")
/*< 48>*/ 			scene_flags[0 'Skyloft'][43 /* 0x4 08 */] = true;
          		}
          	  case 1:
/*< 44>*/ 		switch (scene_flags[42 /* 0x4 04 */]) {
          		  case 0:
/*< 45>*/ 			printf("\x0E\x01\x09\x04\x0C\x209Ich würde auch gern bei der\nVogelreiter-Zeremonie als Vertreterin\nder Göttin einen furchtlosen Ritter\ntreffen...")
          		  case 1:
/*<  8>*/ 			printf("\x0E\x01\x09\x04\x00\x01Oh, Link! Hallo!\nDer Wind heute ist günstig, was für ein\nTag für die Zeremonie!\n\n\x0E\x01\x09\x04\x11\x200Wer wohl gewinnen wird?\nAlso ich tippe ja auf <b<Bado>>!\n\n\n\x0E\x01\x09\x04\x0C\x200Der Sieger erhält von der Vertreterin\nder Göttin ein Geschenk.\n\x0E\x01\x09\x04\x00\x609Hach, wie romantisch...")
/*< 43>*/ 			scene_flags[0 'Skyloft'][42 /* 0x4 04 */] = true;
          		}
          	}
          }

          void entrypoint_100_26() {
/*<152>*/ 	start()
/*<154>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*<155>*/ 		printf("\x0E\x01\x09\x04\x09\x802Danke, Link!\nDas ist nett von dir. Eigentlich sollte\ndas ja <b<Grus >>erledigen, aber was soll's...\n\n\x0E\x01\x09\x04\n\xC00Du hast heute einen wichtigen Tag vor\ndir und hast mir trotzdem geholfen...\nVielen Dank!")
          	  case 1:
/*<153>*/ 		printf("\x0E\x01\x09\x04\n\x401Hallo, Link!\nKannst du mir mit etwas helfen?\n\n\n\x0E\x01\x09\x04\x10\x802Eigentlich habe ich schon <b<Grus>> darum\ngebeten...\n\n\n\x0E\x01\x09\x04\x09\x400Aber wo du nun schon hier bist...\nKönntest du mir bitte ein <r<Fass\n>>bringen?")
          	}
          }

          void entrypoint_100_10() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf("")
          }

